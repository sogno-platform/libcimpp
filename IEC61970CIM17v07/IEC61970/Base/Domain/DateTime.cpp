#include "DateTime.h"
#include "../../../../src/CIMExceptions.hpp"

using IEC61970::Base::Domain::DateTime;


DateTime::DateTime(){

}



DateTime::~DateTime(){

}



DateTime::DateTime(IEC61970::Base::Domain::String value)
	: value(value), initialized(true)
{
}



DateTime& DateTime::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	initialized = true;
	return *this;
}



DateTime::operator IEC61970::Base::Domain::String()
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
			std::istream& operator>>(std::istream& lop, DateTime& rop)
			{
				std::string tmp;
				lop >> tmp;

				rop.value = tmp;
				rop.initialized = true;
			}
		}
	}
}
