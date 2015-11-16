#include "PowerSystemResource.h"
#include <iostream>

PowerSystemResource::PowerSystemResource()
{
}

void PowerSystemResource::print()
{
    std::cout << "PowerSystemResource " << name;
    for(auto element : ComMod)
    {
        std::cout << "\n\tComMod " << element->name;
    }
    std::cout << std::endl;
}
