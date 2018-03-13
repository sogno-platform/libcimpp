#include "Float.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Float;


Float::Float(){

}



Float::~Float(){

}



Float::Float(long double value)
	: value(value), initialized(true)
{
}



Float& Float::operator=(long double &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Float::operator long double()
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
			std::istream& operator>>(std::istream& lop, Float& rop)
			{
				std::string tmp;
				lop >> tmp;

                rop.value = stold(tmp);
                rop.initialized = true;
				return lop;
			}
		}
	}
}
