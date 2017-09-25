#include "MonthDay.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::MonthDay;


MonthDay::MonthDay(){

}



MonthDay::~MonthDay(){

}



MonthDay::MonthDay(IEC61970::Base::Domain::String value)
	: value(value), initialized(true)
{
}



MonthDay& MonthDay::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



MonthDay::operator IEC61970::Base::Domain::String()
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
			std::istream& operator>>(std::istream& lop, MonthDay& rop)
			{
				std::string tmp;
				lop >> tmp;

				rop.value = tmp;
				rop.initialized = true;
			}
		}
	}
}

