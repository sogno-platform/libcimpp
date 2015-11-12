//  Created by Daniel Knibbe on 09.11.15.

#include "DSLModem.h"
#include <iostream>
#include <string>
#include <map>
#include "myparser.h"

int main()
{
    DSLModem modem;
    modem.name = "Unnamed Modem";
	std::cout << modem.name << std::endl;

    MyParser xmlparser;
    xmlparser.set_validate(false);
    xmlparser.parse_file("../../network.xml");
    xmlparser.print();
	return 0;
}
