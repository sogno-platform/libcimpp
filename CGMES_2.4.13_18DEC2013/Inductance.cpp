/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Inductance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Inductance& Inductance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Inductance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Inductance::debugName[] = "Inductance";
const char* Inductance::debugString() const
{
	return Inductance::debugName;
}

Inductance& Inductance::operator+=(const Inductance& rhs)
{
	value += rhs.value;
	return *this;
}

Inductance& Inductance::operator-=(const Inductance& rhs)
{
	value -= rhs.value;
	return *this;
}

Inductance& Inductance::operator*=(const Inductance& rhs)
{
	value *= rhs.value;
	return *this;
}

Inductance& Inductance::operator/=(const Inductance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Inductance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Inductance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
