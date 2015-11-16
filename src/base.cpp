#include "base.h"
#include <iostream>

base::base()
{
}

base::base(std::string Name): name(Name)
{
}

void base::print()
{
    std::cout << "base " << name << std::endl;
}
