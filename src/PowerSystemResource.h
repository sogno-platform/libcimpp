#ifndef PowerSystemResource_h
#define PowerSystemResource_h

#include <vector>
#include <memory>
#include "base.h"

class PowerSystemResource : public base
{
public:
    PowerSystemResource();
    using base::base;
    std::vector<std::weak_ptr<base>> ComMod;

    virtual void print();
};

#endif /* PowerSystemResource_h */
