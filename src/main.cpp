#include "LTEModem.h"
#include "DSLModem.h"
#include "PowerSystemResource.h"
#include <iostream>
#include <string>
#include "myparser.h"

int main()
{
    LTEModem* modem;
    PowerSystemResource* PSR;

    MyParser xmlparser;
    xmlparser.parse_file("../../network.xml");

    std::unordered_map<std::string, base*>::const_iterator got;
    got = xmlparser.elements.find("Node1");
    if(got == xmlparser.elements.end())
        std::cout << "Node1 not found" << std::endl;
    else
    {
        PSR = (PowerSystemResource*) got->second;
        std::cout << "Name: " << PSR->name << std::endl;
        std::cout << "ComMod: " << PSR->ComMod.front()->name << std::endl;
    }
	return 0;
}
