#include "Modem.h"
#include <iostream>

Modem::Modem(): cost(0)
{
}

void Modem::print()
{
    std::cout << "Modem " << name
              << "\n\tcost " << cost << std::endl;
}
