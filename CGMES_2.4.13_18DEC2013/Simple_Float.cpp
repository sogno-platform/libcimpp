/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Simple_Float.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Simple_Float& Simple_Float::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Simple_Float::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Simple_Float::debugName[] = "Simple_Float";
const char* Simple_Float::debugString() const
{
	return Simple_Float::debugName;
}

Simple_Float& Simple_Float::operator+=(const Simple_Float& rhs)
{
	value += rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator-=(const Simple_Float& rhs)
{
	value -= rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator*=(const Simple_Float& rhs)
{
	value *= rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator/=(const Simple_Float& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Simple_Float& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Simple_Float& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
