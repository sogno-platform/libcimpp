#include "LTEModem.h"
#include "iostream"

LTEModem::LTEModem()
{
}

void LTEModem::print()
{
    std::cout << "LTEModem " << name
              << "\n\tcost " << cost
              << "\n\tfrequency " << frequency
              << "\n\tmodulationType " << modulationType << std::endl;
}
