/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Voltage.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Voltage& Voltage::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Voltage::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Voltage::debugName[] = "Voltage";
const char* Voltage::debugString() const
{
	return Voltage::debugName;
}

Voltage& Voltage::operator+=(const Voltage& rhs)
{
	value += rhs.value;
	return *this;
}

Voltage& Voltage::operator-=(const Voltage& rhs)
{
	value -= rhs.value;
	return *this;
}

Voltage& Voltage::operator*=(const Voltage& rhs)
{
	value *= rhs.value;
	return *this;
}

Voltage& Voltage::operator/=(const Voltage& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Voltage& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Voltage& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
