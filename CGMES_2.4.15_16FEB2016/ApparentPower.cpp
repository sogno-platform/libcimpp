/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ApparentPower.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ApparentPower& ApparentPower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ApparentPower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ApparentPower::debugName[] = "ApparentPower";
const char* ApparentPower::debugString() const
{
	return ApparentPower::debugName;
}

ApparentPower& ApparentPower::operator+=(const ApparentPower& rhs)
{
	value += rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator-=(const ApparentPower& rhs)
{
	value -= rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator*=(const ApparentPower& rhs)
{
	value *= rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator/=(const ApparentPower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ApparentPower& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ApparentPower& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
