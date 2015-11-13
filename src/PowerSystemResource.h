#ifndef PowerSystemResource_h
#define PowerSystemResource_h

#include <vector>
#include "base.h"

class PowerSystemResource : public base
{
public:
    PowerSystemResource();
    using base::base;
    std::vector<base*> ComMod;
};

#endif /* PowerSystemResource_h */
