/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Seconds.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Seconds& Seconds::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Seconds::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Seconds::debugName[] = "Seconds";
const char* Seconds::debugString() const
{
	return Seconds::debugName;
}

Seconds& Seconds::operator+=(const Seconds& rhs)
{
	value += rhs.value;
	return *this;
}

Seconds& Seconds::operator-=(const Seconds& rhs)
{
	value -= rhs.value;
	return *this;
}

Seconds& Seconds::operator*=(const Seconds& rhs)
{
	value *= rhs.value;
	return *this;
}

Seconds& Seconds::operator/=(const Seconds& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Seconds& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Seconds& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
