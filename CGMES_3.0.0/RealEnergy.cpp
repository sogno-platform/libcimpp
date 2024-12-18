/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RealEnergy.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RealEnergy& RealEnergy::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RealEnergy::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RealEnergy::debugName[] = "RealEnergy";
const char* RealEnergy::debugString() const
{
	return RealEnergy::debugName;
}

RealEnergy& RealEnergy::operator+=(const RealEnergy& rhs)
{
	value += rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator-=(const RealEnergy& rhs)
{
	value -= rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator*=(const RealEnergy& rhs)
{
	value *= rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator/=(const RealEnergy& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RealEnergy& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RealEnergy& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
