/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PU.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PU& PU::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

PU::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char PU::debugName[] = "PU";
const char* PU::debugString() const
{
	return PU::debugName;
}

PU& PU::operator+=(const PU& rhs)
{
	value += rhs.value;
	return *this;
}

PU& PU::operator-=(const PU& rhs)
{
	value -= rhs.value;
	return *this;
}

PU& PU::operator*=(const PU& rhs)
{
	value *= rhs.value;
	return *this;
}

PU& PU::operator/=(const PU& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, PU& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const PU& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
