#include "CIMContentHandler.hpp"

#include <iostream>
#include <regex>

#include "CIMExceptions.hpp"
#include "CIMFactory.hpp"
#include "CimConstants.hpp"
#include "assignments.hpp"
#include "gettercache.hpp"

static std::string RDF = NamespaceMap.at("rdf");
static std::string MD  = NamespaceMap.at("md");

CIMContentHandler::CIMContentHandler() : Objects(nullptr), RDFMap(nullptr)
{
}

CIMContentHandler::~CIMContentHandler()
{
	checkStacksEmpty();
}

void CIMContentHandler::checkStacksEmpty()
{
	if (!objectStack.empty())
	{
		throw CriticalError("CIMContentHandler: Critical Error: objectStack is not empty!");
	}
	if (!tagStack.empty())
	{
		std::cerr << "First 5 items on stack: " << std::endl;
		int i = 10;
		while (!tagStack.empty() && i--) {
			std::string name = tagStack.top();
			std::cerr << "{" << name << "}" << std::endl;
			tagStack.pop();
		}
		throw CriticalError("CIMContentHandler: Critical Error: tagStack is not empty!");
	}
}

void CIMContentHandler::setObjectsContainer(std::vector<BaseClass*> *Objects)
{
	this->Objects = Objects;
}

void CIMContentHandler::setRDFMap(std::unordered_map<std::string, BaseClass*> *RDFMap)
{
	this->RDFMap = RDFMap;
}

void CIMContentHandler::setDocumentLocator(const LocatorT &locator)
{}

void CIMContentHandler::startDocument()
{
	if(Objects == nullptr)
	{
		throw NoObjectsContainer(this);
	}
	if(RDFMap == nullptr)
	{
		throw NoRdfMap(this);
	}

}

void CIMContentHandler::endDocument()
{
}

void CIMContentHandler::startPrefixMapping(const std::string &prefix, const std::string &uri)
{}

void CIMContentHandler::endPrefixMapping(const std::string &prefix)
{}

void CIMContentHandler::startElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName, const AttributesT &atts)
{
	if (namespaceURI == RDF || namespaceURI == MD) // RDF root element or ModelDescription
	{
		return;
	}

	// Remember last opened tag
	tagStack.push(localName);
	value.clear();

	// If there is no RDF ID (an XML attribute!) then we don't have a new CIM
	// object or RDF relation therefore the XML element will contain a value
	// assignment.
	if(atts.getLength() == 0)
		return;
	// If name is a CIM class check if to create a new object
	if (CIMFactory::IsCIMClass(localName))
	{
		// Get rdf_id
		std::string rdf_id = get_rdf_id(atts);
		if(rdf_id.empty())
		{
			throw NoRdfID();
		}
		// check if object already exists
		std::unordered_map<std::string, BaseClass*>::iterator it = RDFMap->find(rdf_id);
		if(it != RDFMap->end()) // object exists -> push it on the stack
		{
			BaseClass* BaseClass_ptr = it->second;
			if (BaseClass_ptr->debugString() != localName)
			{
				BaseClass* newObject_ptr = retypeObject(BaseClass_ptr, localName, rdf_id);
				if (newObject_ptr != nullptr)
				{
					it->second = newObject_ptr;
					*std::find(Objects->begin(), Objects->end(), BaseClass_ptr) = newObject_ptr;
					delete BaseClass_ptr;
					BaseClass_ptr = newObject_ptr;
				}
				else
				{
					std::cout << "CIMContentHandler: Found " << BaseClass_ptr->debugString() << " (instead of "
						<< localName << ") with rdf:ID: " << rdf_id << " in map" << std::endl;
				}
			}
			objectStack.push(BaseClass_ptr);
		}
		else // object does not exist -> create object
		{
			BaseClass* BaseClass_ptr = CIMFactory::CreateNew(localName);

			//Check if created Object is IdentifiedObject and place rdf_id into mRID
			if(CIMPP::IdentifiedObject* idOb = dynamic_cast<CIMPP::IdentifiedObject*>(BaseClass_ptr))
			{
				(*idOb).mRID = rdf_id;
			}
			BaseClass_ptr->setRdfid(rdf_id);
			RDFMap->emplace(rdf_id, BaseClass_ptr);
			objectStack.push(BaseClass_ptr);
			Objects->push_back(BaseClass_ptr);
		}
		return;
	}
	// Create a task if the XML element is no CIM class and contains a RDF ID
	std::string rdf_id = get_rdf_resource(atts);
	if (!rdf_id.empty())
	{
		taskQueue.push_back(Task(objectStack.top(), localName, rdf_id));
		return;
	}
	// Assign an enum symbol if the rdf id contains a enum symbol
	std::string enumSymbol = get_rdf_enum(atts);
	if(!enumSymbol.empty())
	{
		if (!assign(objectStack.top(), localName, enumSymbol))
			std::cerr << "CIMContentHandler: Error: " << enumSymbol << " can not be assigned" << std::endl;
		return;
	}

	// Nobody knows what to do
	std::cerr << "CIMContentHandler: Error: Nobody knows, the " << localName << " I've seen... *sing*" << std::endl;
}

void CIMContentHandler::endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName)
{
	if (namespaceURI == RDF || namespaceURI == MD) // RDF root element or ModelDescription
	{
		return;
	}

	if (!tagStack.empty() && !objectStack.empty() && !value.empty())
	{
		assign(objectStack.top(), tagStack.top(), value);
	}

	// Pop Stacks
	if (tagStack.size() == 0) {
		std::cerr << "WARNING: Nearly tried to pop empty tag stack for tag: " << localName << std::endl;
	}
	else {
		tagStack.pop();
	}
	if (CIMFactory::IsCIMClass(localName))
	{
		if (objectStack.size() == 0) {
			std::cerr << "WARNING: Nearly tried to pop empty object stack for tag: " << localName << std::endl;
		}
		else {
			objectStack.pop();
		}
	}
}

void CIMContentHandler::characters(const std::string &characters)
{
	value.append(characters);
}

void CIMContentHandler::ignorableWhitespace(const std::string &ch)
{}

void CIMContentHandler::processingInstruction(const std::string &target, const std::string &data)
{}

void CIMContentHandler::skippedEntity(const std::string &name)
{}

std::string CIMContentHandler::get_rdf_id(const AttributesT &attributes)
{
	for(int i = 0; i < attributes.getLength(); i++)
	{
		if(attributes.getQName(i) == "rdf:ID")
			return attributes.getValue(i);
		if(attributes.getQName(i) == "rdf:about")
			return attributes.getValue(i).substr(1);
	}
	return std::string();
}

std::string CIMContentHandler::get_rdf_resource(const AttributesT &attributes)
{
	for(int i = 0; i < attributes.getLength(); i++)
	{
		if(attributes.getQName(i) == "rdf:resource")
		{
			if(attributes.getValue(i).at(0) == '#')
			{
				return attributes.getValue(i).substr(1);
			}
		}
	}
	return std::string();
}

bool CIMContentHandler::is_only_whitespace(const std::string& characters)
{
	return std::regex_match(characters, std::regex("^[[:space:]]*$"));
}

std::string CIMContentHandler::get_rdf_enum(const AttributesT &attributes)
{
	for(int i = 0; i < attributes.getLength(); i++)
	{
		if(attributes.getQName(i) == "rdf:resource")
		{
			std::regex expr("^http[s]*://.*#([a-zA-z0-9]*).([a-zA-z0-9]*)");
			std::smatch m;
			std::string str = attributes.getValue(i);
			if(std::regex_match(str, m, expr))
			{
				return std::string(m[1]).append(".").append(m[2]);
			}
			std::cerr << "CIMContentHandler: Note: rdf:resource does not relate to an object in this file "<< str << std::endl;
		}
	}
	std::cerr << "CIMContentHandler: Note: Attribute contain no rdf:resource" << std::endl;
	return std::string();
}

bool CIMContentHandler::resolveRDFRelations()
{
	unsigned int unresolved;
	unresolved = 0;
	size_t taskSize = taskQueue.size();
	for (const auto& task : taskQueue)
	{
		if (!task.resolve(RDFMap))
		{
			std::cout << "CIMContentHandler: Note: Cannot resolve following RDF relationship: ";
			task.print();
			unresolved++;
		}
	}
	std::cout << "CIMContentHandler: Note: " << unresolved << " out of " << taskSize << " tasks remain unresolved!" << std::endl;
	if(unresolved > 0)
		return false;
	else
		return true;
}

BaseClass* CIMContentHandler::retypeObject(BaseClass* oldObject_ptr, const std::string& newClassName, const std::string& rdfid)
{
	BaseClass* newObject_ptr = CIMFactory::CreateNew(newClassName);
	if (oldObject_ptr->isAssignableFrom(newObject_ptr))
	{
		std::cout << "CIMContentHandler: Retyping object with rdf:ID: " << rdfid << " from type: "
			<< oldObject_ptr->debugString() << " to type: " << newClassName << std::endl;

		newObject_ptr->setRdfid(rdfid);

		// Copy primitive attributes from old object to the new object
		for (const auto& attrAndFunc : get_primitive_getter_map(oldObject_ptr))
		{
			std::string attr  = attrAndFunc.first;
			get_function func = attrAndFunc.second;

			std::stringstream stream;
			if (func(oldObject_ptr, stream))
			{
				assign(newObject_ptr, attr, stream.str());
			}
		}

		// Copy enum attributes from old object to the new object
		for (const auto& attrAndFunc : get_enum_getter_map(oldObject_ptr))
		{
			std::string attr  = attrAndFunc.first;
			get_function func = attrAndFunc.second;

			std::stringstream stream;
			if (func(oldObject_ptr, stream))
			{
				assign(newObject_ptr, attr, stream.str());
			}
		}

		// Copy class attributes from old object to the new object
		for (auto& task : taskQueue)
		{
			task.replaceObject(oldObject_ptr, newObject_ptr);
		}

		return newObject_ptr;
	}
	delete newObject_ptr;
	return nullptr;
}
