#include "myparser.h"
#include <iostream>
#include <sstream>

#include <stdexcept>

#include "IdentifiedObject.h"
#include "Terminal.h"
#include "ACDCTerminal.h"

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
    // Remember last opened tag
    tagStack.push(name);

    // Is the value of the tag a literal?
    if(properties.empty())
        return;

	if(name == "cim:Terminal")
    {
		std::shared_ptr<IdentifiedObject> basePtr(new Terminal);
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

        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }

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

	/*
    if(name == "base:ComMod")
    {
        // Assume that the first attribute defines rdf:resource
        task Task(elementStack.top(), properties.front().value, PowerSystemResource_ComMod);
        taskQueue.push(Task);
        return;
    }
    if(name == "base:src")
    {
        task Task(elementStack.top(), properties.front().value, CommChannel_src);
        taskQueue.push(Task);
        return;
    }
    if(name == "base:dest")
    {
        task Task(elementStack.top(), properties.front().value, CommChannel_dest);
        taskQueue.push(Task);
        return;
	}*/

    // Nobody knows what to do
    std::cout << "Nobody knows what to do with " << name << std::endl;
}

void MyParser::on_end_element(const Glib::ustring &name)
{
	tagStack.pop();
	if(name == "cim:Terminal")
    {
        elementStack.pop();
        return;
	}
}

void MyParser::on_characters(const Glib::ustring &characters)
{
	std::stringstream buffer; // TODO: UTF-8 support
    buffer << characters;
	if(tagStack.empty())
	{
		throw std::runtime_error("tagStack leer");
	}
	if(elementStack.empty())
	{
		throw std::runtime_error("elementStack leer");
	}

	if(tagStack.top() == "cim:IdentifiedObject.name")
	{
		buffer >> std::dynamic_pointer_cast<IdentifiedObject>(elementStack.top())->name;
		return;
	}
	if(tagStack.top() == "cim:ACDCTerminal.connected")
	{
		buffer >> std::dynamic_pointer_cast<ACDCTerminal>(elementStack.top())->connected;
		return;
	}
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
