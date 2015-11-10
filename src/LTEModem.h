//  Created by Daniel Knibbe on 10.11.15.

#ifndef LTEModem_h
#define LTEModem_h

#include "Modem.h"

class LTEModem : public Modem
{
public:
	LTEModem();
	~LTEModem();
	double frequency;
	int modulationType;
};

#endif /* LTEModem_h */
