#include "LTEModem.h"
#include "DSLModem.h"
#include "PowerSystemResource.h"
#include <iostream>
#include <string>
#include "myparser.h"

int main()
{
    std::string input;
    MyParser xmlparser;
    xmlparser.parse_file("../../network.xml");


    std::unordered_map<std::string, base*>::const_iterator got;
    while(true)
    {
        std::cout << "Gebe namen des Elements oder 'quit' ein" << std::endl;
        std::cin >> input;

        if(input == "quit")
            break;

        got = xmlparser.elements.find(input);
        if(got == xmlparser.elements.end())
            std::cout << "not found" << std::endl;
        else
        {
            got->second->print();
        }
    }
	return 0;
}
