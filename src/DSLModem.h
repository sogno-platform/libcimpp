#ifndef DSLModem_h
#define DSLModem_h

#include "Modem.h"

class DSLModem : public Modem
{
public:
    DSLModem();
    using Modem::Modem;
};

#endif /* DSLModem_h */
