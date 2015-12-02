///////////////////////////////////////////////////////////
//  Float.cpp
//  Implementation of the Class Float
//  Created on:      27-Nov-2015 11:06:32
///////////////////////////////////////////////////////////

#include "Float.h"


Float::Float(){

}

Float::Float(double value)
	: value(value)
{
}

Float& Float::operator=(double &rop)
{
	value = rop;
	return *this;
}

Float::operator double()
{
	return value;
}
