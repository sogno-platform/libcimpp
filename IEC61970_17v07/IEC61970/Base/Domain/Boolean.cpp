#include "Boolean.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Boolean;


Boolean::Boolean(){

}



Boolean::~Boolean(){

}



Boolean::Boolean(bool value)
	: value(value), initialized(true)
{
}



Boolean& Boolean::operator=(bool &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Boolean::operator bool()
{
	if(!initialized)
	{
		throw new ReadingUninitializedField();
	}
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
					rop.initialized = true;
					return lop;
				}
				if(tmp == "false" || tmp == "False" || tmp == "FALSE")
				{
					rop.value = false;
					rop.initialized = true;
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
