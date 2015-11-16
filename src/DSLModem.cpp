#include "DSLModem.h"
#include <iostream>

DSLModem::DSLModem()
{
}

void DSLModem::print()
{
    std::cout << "DSLModem " << name
              << "\n\tcost " << cost << std::endl;
}
