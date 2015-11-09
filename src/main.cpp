//  Created by Daniel Knibbe on 09.11.15.

#include "DSLModem.h"
#include <iostream>
#include <string>

int main()
{
	DSLModem modem(std::string("Name des modems"));
	std::cout << modem.name << std::endl;
	return 0;
}