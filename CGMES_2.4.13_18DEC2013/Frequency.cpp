/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Frequency.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Frequency& Frequency::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Frequency::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Frequency::debugName[] = "Frequency";
const char* Frequency::debugString() const
{
	return Frequency::debugName;
}

Frequency& Frequency::operator+=(const Frequency& rhs)
{
	value += rhs.value;
	return *this;
}

Frequency& Frequency::operator-=(const Frequency& rhs)
{
	value -= rhs.value;
	return *this;
}

Frequency& Frequency::operator*=(const Frequency& rhs)
{
	value *= rhs.value;
	return *this;
}

Frequency& Frequency::operator/=(const Frequency& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Frequency& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Frequency& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
