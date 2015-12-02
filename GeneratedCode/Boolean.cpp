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
