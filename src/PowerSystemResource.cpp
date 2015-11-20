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
        std::cout << "\n\tComMod " << element.lock()->name;
    }
    std::cout << std::endl;
}
