#include "CIMContentHandler.hpp"
#include <iostream>
#include <sstream>
#include <regex>

#include <stdexcept>

#include "IEC61970.hpp"
#include "CIMFactory.hpp"
#include "assignments.hpp"

CIMContentHandler::CIMContentHandler() : Objects(nullptr), RDFMap(nullptr)
{
}

CIMContentHandler::~CIMContentHandler()
{
	if(!objectStack.empty())
		std::cerr << "Error: objectStack is not empty!" << std::endl;
	if(!tagStack.empty())
		std::cerr << "Error: tagStack is not empty!" << std::endl;
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
		throw std::runtime_error("CIMContentHandler: Objects container not set");
	if(RDFMap == nullptr)
		throw std::runtime_error("CIMContentHandler: RDFMap not set");
}

void CIMContentHandler::endDocument()
{
	this->resolveRDFRelations();
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
		//std::cerr << name << " not in namespace \"cim\"" << std::endl;
		return;
	}

	// Remember last opened tag
	tagStack.push(qName);

	// Is the value of the tag a literal?
	if(atts.getLength() == 0) // TODO: Was habe ich damit gemeint?
		return;

	// If name is a CIM class check if to create a new object
	if(CIMFactory::IsCIMClass(qName))
	{
		// Get rdf_id
		std::string rdf_id;
		try
		{
			rdf_id = get_rdf_id(atts);
		}
		catch(std::logic_error &excep)
		{
			std::cerr << excep.what() << std::endl;
			exit(1);
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
			RDFMap->emplace(rdf_id, BaseClass_ptr);
			objectStack.push(BaseClass_ptr);
			Objects->push_back(BaseClass_ptr);
		}
		return;
	}

	// Lege einen neuen Task an
	try // FIXME: No exep
	{
		std::string rdf_id = get_rdf_resource(atts);
		taskQueue.push_back(Task(objectStack.top(), qName, rdf_id));
		return;
	}
	catch(std::logic_error &excep)
	{}

	try
	{
		std::string enumSymbol = get_rdf_enum(atts);
		if(!assign(objectStack.top(), qName, enumSymbol))
			std::cerr << "Error: " << enumSymbol << " can not be assigned" << std::endl;
		return;
	}
	catch(std::logic_error &excep)
	{}

	// Nobody knows what to do
	std::cerr << "Error: Nobody knows, the " << qName << " I've seen... *sing*" << std::endl;
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
		throw std::runtime_error("objectStack empty");
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
		std::cout << "Note: Cannot assign '" << characters << "' to " << tagStack.top() << std::endl;
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
	throw std::logic_error("Attributes contain no rdf:ID");
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
			throw std::logic_error("rdf:resource does not relate to an object in this file");
		}
	}
	throw std::logic_error("Attribute contain no rdf:resource");
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
			throw std::logic_error("rdf:resource does not relate to an object in this file");
		}
	}
	throw std::logic_error("Attribute contain no rdf:resource");
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
			std::cout << "Note: Cannot resolve following RDF relationship: ";
			it->print();
			unresolved++;
			++it;
		}
		else
		{
			taskQueue.erase(it++);
		}
	}
	std::cout << "Note: " << unresolved << " out of " << size << " tasks remain unresolved!" << std::endl;
	if(unresolved > 0)
		return false;
	else
		return true;
}
