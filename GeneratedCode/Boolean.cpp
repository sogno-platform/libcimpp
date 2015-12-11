///////////////////////////////////////////////////////////
//  Boolean.cpp
//  Implementation of the Class Boolean
//  Created on:      27-Nov-2015 11:05:30
///////////////////////////////////////////////////////////

#include "Boolean.h"


Boolean::Boolean(){

}

Boolean::Boolean(bool value)
	: value(value)
{
}

Boolean& Boolean::operator=(bool &rop)
{
	value = rop;
	return *this;
}

Boolean::operator bool()
{
	return value;
}

std::istream& operator>>(std::istream& lop, Boolean& rop)
{
	std::string tmp;
	lop >> tmp;
	if(tmp == "true" || tmp == "True" || tmp == "TRUE")
	{
		rop.value = true;
		return lop;
	}
	if(tmp == "false" || tmp == "False" || tmp == "FALSE")
	{
		rop.value = false;
		return lop;
	}
	else
	{
		lop.setstate(std::ios::failbit);
		return lop;
	}
}
