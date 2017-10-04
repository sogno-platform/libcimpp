#include "Float.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Float;


Float::Float(){

}



Float::~Float(){

}



Float::Float(elem_type value)
	: value(value), initialized(true)
{
}



Float& Float::operator=(elem_type &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Float::operator elem_type()
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
