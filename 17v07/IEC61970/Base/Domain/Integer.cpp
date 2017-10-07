#include "Integer.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Integer;


Integer::Integer(){

}



Integer::~Integer(){

}



Integer::Integer(long int value)
	: value(value), initialized(true)
{
}



Integer& Integer::operator=(long int &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Integer::operator long int()
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
			std::istream& operator>>(std::istream& lop, Integer& rop)
			{
				std::string tmp;
				lop >> tmp;

                		rop.value = stol(tmp);
                		rop.initialized = true;
				return lop;
			}
		}
	}
}
