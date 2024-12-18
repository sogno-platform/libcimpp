/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Resistance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Resistance& Resistance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Resistance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Resistance::debugName[] = "Resistance";
const char* Resistance::debugString() const
{
	return Resistance::debugName;
}

Resistance& Resistance::operator+=(const Resistance& rhs)
{
	value += rhs.value;
	return *this;
}

Resistance& Resistance::operator-=(const Resistance& rhs)
{
	value -= rhs.value;
	return *this;
}

Resistance& Resistance::operator*=(const Resistance& rhs)
{
	value *= rhs.value;
	return *this;
}

Resistance& Resistance::operator/=(const Resistance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Resistance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Resistance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
