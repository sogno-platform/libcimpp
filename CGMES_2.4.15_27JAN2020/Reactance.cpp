/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Reactance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Reactance& Reactance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Reactance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Reactance::debugName[] = "Reactance";
const char* Reactance::debugString() const
{
	return Reactance::debugName;
}

Reactance& Reactance::operator+=(const Reactance& rhs)
{
	value += rhs.value;
	return *this;
}

Reactance& Reactance::operator-=(const Reactance& rhs)
{
	value -= rhs.value;
	return *this;
}

Reactance& Reactance::operator*=(const Reactance& rhs)
{
	value *= rhs.value;
	return *this;
}

Reactance& Reactance::operator/=(const Reactance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Reactance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Reactance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
