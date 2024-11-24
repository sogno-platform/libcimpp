/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MonthDay.hpp"

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

MonthDay& MonthDay::operator=(const std::string& rop)
{
	value = rop;
	initialized = true;
	return *this;
}

MonthDay::operator std::string() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char MonthDay::debugName[] = "MonthDay";
const char* MonthDay::debugString() const
{
	return MonthDay::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, MonthDay& rop)
	{
		lop >> rop.value;
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const MonthDay& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
