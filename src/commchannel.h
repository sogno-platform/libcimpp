#ifndef COMMCHANNEL_H
#define COMMCHANNEL_H

#include "base.h"
#include "Modem.h"

class CommChannel : public base
{
public:
    CommChannel();
    using base::base;

    double ber;
    double dataRate;
    double delay;
    Modem* src;
    Modem* dest;

    virtual void print();
};

#endif // COMMCHANNEL_H
