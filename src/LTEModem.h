#ifndef LTEModem_h
#define LTEModem_h

#include "Modem.h"

class LTEModem : public Modem
{
public:
    LTEModem();
    using Modem::Modem;
	double frequency;
	int modulationType;
};

#endif /* LTEModem_h */
