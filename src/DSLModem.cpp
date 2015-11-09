//  Created by Daniel Knibbe on 09.11.15.

#include "DSLModem.h"
#include <iostream>

DSLModem::DSLModem() :cost(0)
{
	std::cerr << "DSLModem standard constructor called" << std::endl;
}

DSLModem::DSLModem(std::string p_name) :base(p_name)
{
}

DSLModem::~DSLModem()
{
}