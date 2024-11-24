/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CapacitancePerLength.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CapacitancePerLength& CapacitancePerLength::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

CapacitancePerLength::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char CapacitancePerLength::debugName[] = "CapacitancePerLength";
const char* CapacitancePerLength::debugString() const
{
	return CapacitancePerLength::debugName;
}

CapacitancePerLength& CapacitancePerLength::operator+=(const CapacitancePerLength& rhs)
{
	value += rhs.value;
	return *this;
}

CapacitancePerLength& CapacitancePerLength::operator-=(const CapacitancePerLength& rhs)
{
	value -= rhs.value;
	return *this;
}

CapacitancePerLength& CapacitancePerLength::operator*=(const CapacitancePerLength& rhs)
{
	value *= rhs.value;
	return *this;
}

CapacitancePerLength& CapacitancePerLength::operator/=(const CapacitancePerLength& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, CapacitancePerLength& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const CapacitancePerLength& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
