//  Created by Daniel Knibbe on 09.11.15.

#ifndef base_h
#define base_h

#include <string>

class base
{
public:
	base();
	base(std::string Name);
	~base();
    //virtual void print() = 0;
	std::string name;
};

#endif /* base_h */
