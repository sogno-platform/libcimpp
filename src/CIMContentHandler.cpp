#include "CIMContentHandler.hpp"
#include <iostream>
#include <sstream>
#include <regex>

#include <stdexcept>

#include "Folders.hpp"
#include "CIMFactory.hpp"
#include "assignments.hpp"
#include "CIMExceptions.hpp"

CIMContentHandler::CIMContentHandler() : Objects(nullptr), RDFMap(nullptr)
{
}

CIMContentHandler::~CIMContentHandler()
{
	if(!objectStack.empty())
	{
		throw CriticalError("CIMContentHandler: Critical Error: objectStack is not empty!");
	}
	if(!tagStack.empty())
	{
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
	// Only process tags in cim namespace
	if(qName.find("cim:") == std::string::npos)
	{
		bool isModelDescription = qName.find("md:") != std::string::npos || qName.find("DependentOn:") != std::string::npos || qName.find("createdBy") != std::string::npos;
		bool isModel = qName.find("rdf:") != std::string::npos;

		if(!isModelDescription && !isModel)
		{
			std::cerr << "WARNING: "<< qName << " not in namespace \"cim\"" << std::endl;
		}
		return;
	}

	// Remember last opened tag
	tagStack.push(qName);

	// If there is no RDF ID (an XML attribute!) then we don't have a new CIM
	// object or RDF relation therefore the XML element will contain a value
	// assignment.
	if(atts.getLength() == 0)
		return;
	// If name is a CIM class check if to create a new object
	if(CIMFactory::IsCIMClass(qName))
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
			objectStack.push(it->second);
		}
		else // object does not exist -> create object
		{
			BaseClass* BaseClass_ptr = CIMFactory::CreateNew(qName);

			//Check if created Object is IdentifiedObject and place rdf_id into mRID
			if(IEC61970::Base::Core::IdentifiedObject* idOb = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(BaseClass_ptr))
			{
				(*idOb).mRID = rdf_id;
			}
			RDFMap->emplace(rdf_id, BaseClass_ptr);
			objectStack.push(BaseClass_ptr);
			Objects->push_back(BaseClass_ptr);
		}
		return;
	}
	// Create a task if the XML element is no CIM class and contains a RDF ID
	std::string rdf_id = get_rdf_resource(atts);
    if(!rdf_id.empty())
	{
		taskQueue.push_back(Task(objectStack.top(), qName, rdf_id));
		return;
	}
	// Assign an enum symbol if the rdf id contains a enum symbol
	std::string enumSymbol = get_rdf_enum(atts);
	if(!enumSymbol.empty())
	{
		if(!assign(objectStack.top(), qName, enumSymbol))
			std::cerr << "CIMContentHandler: Error: " << enumSymbol << " can not be assigned" << std::endl;
		return;
	}

	// Nobody knows what to do
	std::cerr << "CIMContentHandler: Error: Nobody knows, the " << qName << " I've seen... *sing*" << std::endl;
}

void CIMContentHandler::endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName)
{
	// Only process tags in cim namespace
	if(qName.find("cim:") == std::string::npos)
	{
		return;
	}

	// Pop Stacks
	tagStack.pop();
	if(CIMFactory::IsCIMClass(qName))
	{
		objectStack.pop();
		//std::cout << "Popped " << name << std::endl;
	}
}

void CIMContentHandler::characters(const std::string &characters)
{
	// Only process tags in "cim" namespace
	if(tagStack.empty())
	{
		return;
	}
	if(objectStack.empty())
	{
		throw CriticalError("CIMContentHandler: Critical Error: objectStack empty");
	}

#ifndef DEBUG
	assign(objectStack.top(), tagStack.top(), characters);
#else
	// Check if the characters only contain whitespace
	if(is_only_whitespace(characters))
	{
		return;
	}
	if(!assign(objectStack.top(), tagStack.top(), characters))
		std::cout << "CIMContentHandler: Note: Cannot assign '" << characters << "' to " << tagStack.top() << std::endl;
#endif
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
			std::regex expr("^http[s]*://[a-zA-Z0-9./_]*CIM-schema-cim[0-9]+#([a-zA-z0-9]*).([a-zA-z0-9]*)");
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
	unsigned int size, unresolved;
	unresolved = 0;
	size = taskQueue.size();
	std::list<Task>::iterator it = taskQueue.begin();
	while(it != taskQueue.end())
	{
		if(!it->resolve(RDFMap))
		{
			std::cout << "CIMContentHandler: Note: Cannot resolve following RDF relationship: ";
			it->print();
			unresolved++;
			++it;
		}
		else
		{
			taskQueue.erase(it++);
		}
	}
	std::cout << "CIMContentHandler: Note: " << unresolved << " out of " << size << " tasks remain unresolved!" << std::endl;
	if(unresolved > 0)
		return false;
	else
		return true;
}
