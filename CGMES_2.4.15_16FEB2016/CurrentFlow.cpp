/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentFlow.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CurrentFlow& CurrentFlow::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

CurrentFlow::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char CurrentFlow::debugName[] = "CurrentFlow";
const char* CurrentFlow::debugString() const
{
	return CurrentFlow::debugName;
}

CurrentFlow& CurrentFlow::operator+=(const CurrentFlow& rhs)
{
	value += rhs.value;
	return *this;
}

CurrentFlow& CurrentFlow::operator-=(const CurrentFlow& rhs)
{
	value -= rhs.value;
	return *this;
}

CurrentFlow& CurrentFlow::operator*=(const CurrentFlow& rhs)
{
	value *= rhs.value;
	return *this;
}

CurrentFlow& CurrentFlow::operator/=(const CurrentFlow& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, CurrentFlow& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const CurrentFlow& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
