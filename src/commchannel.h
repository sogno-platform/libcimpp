#ifndef COMMCHANNEL_H
#define COMMCHANNEL_H

#include <memory>

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
    std::weak_ptr<Modem> src;
    std::weak_ptr<Modem> dest;

    virtual void print();
};

#endif // COMMCHANNEL_H
