/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Float.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Float& Float::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Float::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Float::debugName[] = "Float";
const char* Float::debugString() const
{
	return Float::debugName;
}

Float& Float::operator+=(const Float& rhs)
{
	value += rhs.value;
	return *this;
}

Float& Float::operator-=(const Float& rhs)
{
	value -= rhs.value;
	return *this;
}

Float& Float::operator*=(const Float& rhs)
{
	value *= rhs.value;
	return *this;
}

Float& Float::operator/=(const Float& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Float& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Float& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
