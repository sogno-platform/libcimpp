///////////////////////////////////////////////////////////
//  Decimal.cpp
//  Implementation of the Class Decimal
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#include "Decimal.h"
#include <string>

using IEC61970::Base::Domain::Decimal;


Decimal::Decimal(){

}



Decimal::~Decimal(){

}



Decimal& Decimal::operator=(IEC61970::Base::Domain::String &rop)
{
	value = rop;
	return *this;
}



Decimal& Decimal::operator=(IEC61970::Base::Domain::Integer &rop)
{
	value = std::to_string(rop);
	return *this;
}



Decimal& Decimal::operator=(IEC61970::Base::Domain::Float &rop)
{
	value = std::to_string(rop);
	return *this;
}



Decimal::operator IEC61970::Base::Domain::String()
{
	return value;
}



Decimal::operator IEC61970::Base::Domain::Integer()
{
	return std::stoi(value);
}



Decimal::operator IEC61970::Base::Domain::Float()
{
	return std::stod(value);
}


namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			std::istream& operator>>(std::istream& lop, Decimal& rop)
			{
				lop >> rop.value;
				return lop;
			}
		}
	}
}
