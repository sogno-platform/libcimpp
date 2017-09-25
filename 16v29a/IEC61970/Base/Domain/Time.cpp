#include "Time.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Time;


Time::Time(){

}



Time::~Time(){

}



Time::Time(IEC61970::Base::Domain::String value)
	: value(value), initialized(true)
{
}



Time& Time::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Time::operator IEC61970::Base::Domain::String()
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
			std::istream& operator>>(std::istream& lop, Time& rop)
			{
				std::string tmp;
				lop >> tmp;

				rop.value = tmp;
				rop.initialized = true;
			}
		}
	}
}
