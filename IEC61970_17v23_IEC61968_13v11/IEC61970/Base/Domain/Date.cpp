#include "Date.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Date;


Date::Date(){

}



Date::~Date(){

}



Date::Date(IEC61970::Base::Domain::String value)
	: value(value), initialized(true)
{
}



Date& Date::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Date::operator IEC61970::Base::Domain::String()
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
			std::istream& operator>>(std::istream& lop, Date& rop)
			{
				std::string tmp;
				lop >> tmp;

				rop.value = tmp;
				rop.initialized = true;
				return lop;
			}
		}
	}
}
