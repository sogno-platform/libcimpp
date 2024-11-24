/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePowerPerFrequency.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePowerPerFrequency& ActivePowerPerFrequency::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ActivePowerPerFrequency::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ActivePowerPerFrequency::debugName[] = "ActivePowerPerFrequency";
const char* ActivePowerPerFrequency::debugString() const
{
	return ActivePowerPerFrequency::debugName;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator+=(const ActivePowerPerFrequency& rhs)
{
	value += rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator-=(const ActivePowerPerFrequency& rhs)
{
	value -= rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator*=(const ActivePowerPerFrequency& rhs)
{
	value *= rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator/=(const ActivePowerPerFrequency& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ActivePowerPerFrequency& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ActivePowerPerFrequency& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
