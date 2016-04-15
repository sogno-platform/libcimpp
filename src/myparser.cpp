#include "myparser.h"
#include <iostream>
#include <sstream>

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
	/*
    while(!taskQueue.empty())
    {
        taskQueue.front().resolve(elements);
        taskQueue.pop();
	}*/
    std::cout << "Reached end of the document" << std::endl;
}

void MyParser::on_start_element(const Glib::ustring &name, const AttributeList &properties)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		std::cerr << name << " not in namespace \"cim\"" << std::endl;
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
		elements.emplace(rdf_id, BaseClass_ptr);
		elementStack.push(BaseClass_ptr);
		return;
	}


	/*
	if(name == "cim:Terminal.ConductingEquipment")
	{
		std::string rdf_resource;
		try
		{
			rdf_resource = get_rdf_resource(properties);
		}
		catch(std::logic_error &excep)
		{
			std::cerr << excep.what() << std::endl;
			exit(1);
		}

		task Task(&(std::dynamic_pointer_cast<Terminal>(elementStack.top())->ConductingEquipment), rdf_resource);
		taskQueue.push(Task);
		return;
	}
	*/

#ifdef DEBUG
    // Nobody knows what to do
	//std::cerr << "Nobody knows what to do with " << name << std::endl;
#endif
}

void MyParser::on_end_element(const Glib::ustring &name)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		std::cerr << name << " not in namespace \"cim\"" << std::endl;
		return;
	}

	// Pop Stacks
	tagStack.pop();
	if(CIMFactory::IsCIMObject(name))
		elementStack.pop();
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

#ifndef DEBUG
	assign(characters, elementStack.top(), tagStack.top());
#else
	if(!assign(characters, elementStack.top(), tagStack.top()))
		std::cout << "Kann '" << characters << "' nicht an " << tagStack.top() << " zuweisen" << std::endl;
	else
		std::cout << "'" << characters << "' an " << tagStack.top() << " zugewiesen" << std::endl;
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
