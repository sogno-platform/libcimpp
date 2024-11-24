/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Area.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Area& Area::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Area::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Area::debugName[] = "Area";
const char* Area::debugString() const
{
	return Area::debugName;
}

Area& Area::operator+=(const Area& rhs)
{
	value += rhs.value;
	return *this;
}

Area& Area::operator-=(const Area& rhs)
{
	value -= rhs.value;
	return *this;
}

Area& Area::operator*=(const Area& rhs)
{
	value *= rhs.value;
	return *this;
}

Area& Area::operator/=(const Area& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Area& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Area& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
