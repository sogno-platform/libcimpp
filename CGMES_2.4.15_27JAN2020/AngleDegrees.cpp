/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AngleDegrees.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AngleDegrees& AngleDegrees::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

AngleDegrees::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char AngleDegrees::debugName[] = "AngleDegrees";
const char* AngleDegrees::debugString() const
{
	return AngleDegrees::debugName;
}

AngleDegrees& AngleDegrees::operator+=(const AngleDegrees& rhs)
{
	value += rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator-=(const AngleDegrees& rhs)
{
	value -= rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator*=(const AngleDegrees& rhs)
{
	value *= rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator/=(const AngleDegrees& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, AngleDegrees& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const AngleDegrees& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
