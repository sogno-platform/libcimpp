/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePowerPerCurrentFlow.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ActivePowerPerCurrentFlow::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ActivePowerPerCurrentFlow::debugName[] = "ActivePowerPerCurrentFlow";
const char* ActivePowerPerCurrentFlow::debugString() const
{
	return ActivePowerPerCurrentFlow::debugName;
}

ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator+=(const ActivePowerPerCurrentFlow& rhs)
{
	value += rhs.value;
	return *this;
}

ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator-=(const ActivePowerPerCurrentFlow& rhs)
{
	value -= rhs.value;
	return *this;
}

ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator*=(const ActivePowerPerCurrentFlow& rhs)
{
	value *= rhs.value;
	return *this;
}

ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator/=(const ActivePowerPerCurrentFlow& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ActivePowerPerCurrentFlow& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ActivePowerPerCurrentFlow& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
