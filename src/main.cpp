//  Created by Daniel Knibbe on 09.11.15.

#include "LTEModem.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include "myparser.h"

int main()
{
    LTEModem* modem;

    MyParser xmlparser;
    //xmlparser.set_validate(false);
    xmlparser.parse_file("../../network.xml");
    //xmlparser.print();

    std::unordered_map<std::string, base*>::const_iterator got;
    got = xmlparser.elements.find("LTEModem1");
    if(got == xmlparser.elements.end())
        std::cout << "LTEModem1 not found" << std::endl;
    else
    {
        modem = (LTEModem*) got->second;
        std::cout << "Name: " << modem->name << std::endl;
        std::cout << "cost: " << modem->cost << std::endl;
        std::cout << "frequency: " << modem->frequency << std::endl;
        std::cout << "modulationType: " << modem->modulationType << std::endl;
    }
	return 0;
}
