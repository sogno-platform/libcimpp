/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AngleRadians.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AngleRadians& AngleRadians::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

AngleRadians::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char AngleRadians::debugName[] = "AngleRadians";
const char* AngleRadians::debugString() const
{
	return AngleRadians::debugName;
}

AngleRadians& AngleRadians::operator+=(const AngleRadians& rhs)
{
	value += rhs.value;
	return *this;
}

AngleRadians& AngleRadians::operator-=(const AngleRadians& rhs)
{
	value -= rhs.value;
	return *this;
}

AngleRadians& AngleRadians::operator*=(const AngleRadians& rhs)
{
	value *= rhs.value;
	return *this;
}

AngleRadians& AngleRadians::operator/=(const AngleRadians& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, AngleRadians& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const AngleRadians& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
