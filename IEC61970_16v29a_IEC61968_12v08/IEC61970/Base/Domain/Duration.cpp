#include "Duration.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::Duration;


Duration::Duration(){

}



Duration::~Duration(){

}



Duration::Duration(IEC61970::Base::Domain::String value)
	: value(value), initialized(true)
{
}



Duration& Duration::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



Duration::operator IEC61970::Base::Domain::String()
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
			std::istream& operator>>(std::istream& lop, Duration& rop)
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
