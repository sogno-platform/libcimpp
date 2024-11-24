/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotationSpeed.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RotationSpeed& RotationSpeed::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RotationSpeed::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RotationSpeed::debugName[] = "RotationSpeed";
const char* RotationSpeed::debugString() const
{
	return RotationSpeed::debugName;
}

RotationSpeed& RotationSpeed::operator+=(const RotationSpeed& rhs)
{
	value += rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator-=(const RotationSpeed& rhs)
{
	value -= rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator*=(const RotationSpeed& rhs)
{
	value *= rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator/=(const RotationSpeed& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RotationSpeed& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RotationSpeed& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
