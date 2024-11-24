/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Length.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Length& Length::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Length::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Length::debugName[] = "Length";
const char* Length::debugString() const
{
	return Length::debugName;
}

Length& Length::operator+=(const Length& rhs)
{
	value += rhs.value;
	return *this;
}

Length& Length::operator-=(const Length& rhs)
{
	value -= rhs.value;
	return *this;
}

Length& Length::operator*=(const Length& rhs)
{
	value *= rhs.value;
	return *this;
}

Length& Length::operator/=(const Length& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Length& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Length& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
