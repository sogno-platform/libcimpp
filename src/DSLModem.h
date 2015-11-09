//  Created by Daniel Knibbe on 09.11.15.

#ifndef DSLModem_h
#define DSLModem_h

#include "base.h"

class DSLModem : public base
{
public:
	DSLModem();
	DSLModem(std::string p_name);
	~DSLModem();
	int cost;
};

#endif /* DSLModem_h */
