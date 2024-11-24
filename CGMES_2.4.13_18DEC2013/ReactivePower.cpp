/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ReactivePower.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ReactivePower& ReactivePower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ReactivePower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ReactivePower::debugName[] = "ReactivePower";
const char* ReactivePower::debugString() const
{
	return ReactivePower::debugName;
}

ReactivePower& ReactivePower::operator+=(const ReactivePower& rhs)
{
	value += rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator-=(const ReactivePower& rhs)
{
	value -= rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator*=(const ReactivePower& rhs)
{
	value *= rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator/=(const ReactivePower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ReactivePower& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ReactivePower& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
