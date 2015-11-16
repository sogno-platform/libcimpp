#include "commchannel.h"
#include <iostream>

CommChannel::CommChannel()
{
}

void CommChannel::print()
{
    std::cout << "CommChannel " << name
              << "\n\tber " << ber
              << "\n\tdataRate " << dataRate
              << "\n\tdelay " << delay
              << "\n\tsrc " << src->name
              << "\n\tdest " << dest->name << std::endl;
}
