/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Money.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Money& Money::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Money::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Money::debugName[] = "Money";
const char* Money::debugString() const
{
	return Money::debugName;
}

Money& Money::operator+=(const Money& rhs)
{
	value += rhs.value;
	return *this;
}

Money& Money::operator-=(const Money& rhs)
{
	value -= rhs.value;
	return *this;
}

Money& Money::operator*=(const Money& rhs)
{
	value *= rhs.value;
	return *this;
}

Money& Money::operator/=(const Money& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Money& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Money& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
