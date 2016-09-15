///////////////////////////////////////////////////////////
//  Boolean.cpp
//  Implementation of the Class Boolean
//  Created on:      28-Jan-2016 12:43:28
///////////////////////////////////////////////////////////

#include "Boolean.h"

using IEC61970::Base::Domain::Boolean;


Boolean::Boolean(){

}



Boolean::~Boolean(){

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

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
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
		}
	}
}
