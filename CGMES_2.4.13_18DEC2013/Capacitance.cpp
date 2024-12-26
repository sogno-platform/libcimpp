/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Capacitance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Capacitance& Capacitance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Capacitance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Capacitance::debugName[] = "Capacitance";
const char* Capacitance::debugString() const
{
	return Capacitance::debugName;
}

Capacitance& Capacitance::operator+=(const Capacitance& rhs)
{
	value += rhs.value;
	return *this;
}

Capacitance& Capacitance::operator-=(const Capacitance& rhs)
{
	value -= rhs.value;
	return *this;
}

Capacitance& Capacitance::operator*=(const Capacitance& rhs)
{
	value *= rhs.value;
	return *this;
}

Capacitance& Capacitance::operator/=(const Capacitance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Capacitance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Capacitance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
