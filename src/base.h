#ifndef base_h
#define base_h

#include <string>

class base
{
public:
	base();
    base(std::string Name);

	std::string name;

    virtual void print();
};

#endif /* base_h */
