/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Conductance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Conductance& Conductance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Conductance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Conductance::debugName[] = "Conductance";
const char* Conductance::debugString() const
{
	return Conductance::debugName;
}

Conductance& Conductance::operator+=(const Conductance& rhs)
{
	value += rhs.value;
	return *this;
}

Conductance& Conductance::operator-=(const Conductance& rhs)
{
	value -= rhs.value;
	return *this;
}

Conductance& Conductance::operator*=(const Conductance& rhs)
{
	value *= rhs.value;
	return *this;
}

Conductance& Conductance::operator/=(const Conductance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Conductance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Conductance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
