//  Created by Daniel Knibbe on 10.11.15.

#ifndef PowerSystemResource_h
#define PowerSystemResource_h

#include <vector>
#include "base.h"

class PowerSystemResource : public base
{
public:
	PowerSystemResource();
	~PowerSystemResource();
	std::vector<base> ComMod;
};

#endif /* PowerSystemResource_h */
