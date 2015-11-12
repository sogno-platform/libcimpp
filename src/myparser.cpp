#include "myparser.h"
#include <iostream>
#include <sstream>

#include "PowerSystemResource.h"
#include "DSLModem.h"
#include "LTEModem.h"

MyParser::MyParser()
{
}

MyParser::~MyParser()
{
}

void MyParser::print()
{
    for(auto pair : elements)
    {
        std::cout << pair.second->name << std::endl;
    }
}

void MyParser::on_start_document()
{
    std::cout << "Found start of the document" << std::endl;
}

void MyParser::on_end_document()
{
    std::cout << "Reached end of the document" << std::endl;
}

void MyParser::on_start_element(const Glib::ustring &name, const AttributeList &properties)
{
    // Remember last opened tag
    tagStack.push(name);

    // Is the value of the tag a literal?
    if(properties.empty())
        return;

    if(name == "base:PowerSystemResource")
    {
        base* basePtr = new PowerSystemResource;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:DSLModem")
    {
        base* basePtr = new DSLModem;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:LTEModem")
    {
        base* basePtr = new LTEModem;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    // Nobody knows what to do
    std::cout << "Nobody knows what to do with " << name << std::endl;
}

void MyParser::on_end_element(const Glib::ustring &name)
{
    if(tagStack.top() == name)
        tagStack.pop();
}

void MyParser::on_characters(const Glib::ustring &characters)
{
    std::stringstream buffer;
    buffer << characters;
    if(!tagStack.empty())
    {
        if(tagStack.top() == "base:cost")
            buffer >> ((Modem*) elementStack.top())->cost;
        if(tagStack.top() == "base:frequency")
            buffer >> ((LTEModem*) elementStack.top())->frequency;
        if(tagStack.top() == "base:modulationType")
            buffer >> ((LTEModem*) elementStack.top())->modulationType;
    }
}
