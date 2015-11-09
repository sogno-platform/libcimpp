//  Created by Daniel Knibbe on 09.11.15.

#include "base.h"
#include <iostream>

base::base()
{
	std::cerr << "base standard constructor called" << std::endl;
}

base::base(std::string p_name) :name(p_name)
{
}

base::~base()
{
}