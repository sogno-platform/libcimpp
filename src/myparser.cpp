#include "myparser.h"
#include <iostream>
#include <sstream>
#include <regex>

#include <stdexcept>

#include "IEC61970.h"
#include "CIMFactory.h"
#include "assignments.h"

MyParser::MyParser()
{
}

MyParser::~MyParser()
{
    if(!elementStack.empty())
        std::cerr << "elementStack nicht leer!!!" << std::endl;
    if(!tagStack.empty())
        std::cerr << "tagStack nicht leer!!!" << std::endl;
}

void MyParser::print()
{
	std::cout << "Cannot print objects" << std::endl;
}

void MyParser::on_start_document()
{
    std::cout << "Found start of the document" << std::endl;
}

void MyParser::on_end_document()
{
	unsigned int size, unresolved;
	size = taskQueue.size();
	unresolved = 0;
    while(!taskQueue.empty())
    {
		if(!taskQueue.front().resolve())
		{
			std::cout << "Kann folgende Beziehung nicht auflösen: ";
			taskQueue.front().print();
			unresolved++;
		}
        taskQueue.pop();
	}
    std::cout << "Reached end of the document" << std::endl;
	std::cout << unresolved << " out of " << size << " tasks remain unresolved!" << std::endl;
}

void MyParser::on_start_element(const Glib::ustring &name, const AttributeList &properties)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		//std::cerr << name << " not in namespace \"cim\"" << std::endl;
		return;
	}

    // Remember last opened tag
    tagStack.push(name);

	// Is the value of the tag a literal?
	if(properties.empty()) // TODO: Was habe ich damit gemeint?
        return;

	// Erstelle neues Object
	BaseClass* BaseClass_ptr = CIMFactory::CreateNew(name);
	if(BaseClass_ptr != nullptr)
	{
		std::string rdf_id;
		try
		{
			rdf_id = get_rdf_id(properties);
		}
		catch(std::logic_error &excep)
		{
			std::cerr << excep.what() << std::endl;
			exit(1);
		}
		//std::cout << "Created " << name << " = " << rdf_id << std::endl;
		Task::RDFMap.emplace(rdf_id, BaseClass_ptr);
		elementStack.push(BaseClass_ptr);
		return;
	}


	// Lege einen neuen Task an
	std::string rdf_id;
	try
	{
		rdf_id = get_rdf_resource(properties);
	}
	catch(std::logic_error &excep)
	{
	}

	if(!rdf_id.empty())
	{
		taskQueue.push(Task(elementStack.top(), name, rdf_id));
		return;
	}

    // Nobody knows what to do
	std::cerr << "Nobody knows what to do with " << name << std::endl;
}

void MyParser::on_end_element(const Glib::ustring &name)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		return;
	}

	// Pop Stacks
	tagStack.pop();
	if(CIMFactory::IsCIMObject(name))
	{
		elementStack.pop();
		//std::cout << "Popped " << name << std::endl;
	}
}

void MyParser::on_characters(const Glib::ustring &characters)
{
	// Only process tags in "cim" namespace
	if(tagStack.empty())
	{
		return;
	}
	if(elementStack.empty())
	{
		throw std::runtime_error("elementStack leer");
	}

	// Check if the characters only contain whitespace
	if(is_only_whitespace(characters))
	{
		return;
	}

#ifndef DEBUG
	assign(characters, elementStack.top(), tagStack.top());
#else
	if(!assign(characters, elementStack.top(), tagStack.top()))
		std::cout << "Kann '" << characters << "' nicht an " << tagStack.top() << " zuweisen" << std::endl;
#endif
}

Glib::ustring MyParser::get_rdf_id(const AttributeList &properties)
{
	for(auto&& attribute : properties)
	{
		if(attribute.name == "rdf:ID")
			return attribute.value;
	}
	throw std::logic_error("Attribute enthalten keine rdf:ID");
}

Glib::ustring MyParser::get_rdf_resource(const AttributeList &properties)
{
	for(auto&& attribute : properties)
	{
		if(attribute.name == "rdf:resource")
		{
			if(attribute.value.at(0) == '#')
			{
				return attribute.value.substr(1);
			}
			throw std::logic_error("rdf:resource verweist nicht auf ein Element in dieser Datei");
		}
	}
	throw std::logic_error("Attribute enthalten keine rdf:resource");
}

bool MyParser::is_only_whitespace(const Glib::ustring& characters)
{
	return std::regex_match(characters.c_str(), std::regex("^[[:space:]]*$"));
}
