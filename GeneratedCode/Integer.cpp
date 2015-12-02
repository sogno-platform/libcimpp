///////////////////////////////////////////////////////////
//  Integer.cpp
//  Implementation of the Class Integer
//  Created on:      27-Nov-2015 11:06:57
///////////////////////////////////////////////////////////

#include "Integer.h"


Integer::Integer(){

}

Integer::Integer(long value)
	: value(value)
{
}

Integer& Integer::operator=(long &rop)
{
	value = rop;
	return *this;
}

Integer::operator long()
{
	return value;
}
