/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Susceptance.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Susceptance& Susceptance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Susceptance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Susceptance::debugName[] = "Susceptance";
const char* Susceptance::debugString() const
{
	return Susceptance::debugName;
}

Susceptance& Susceptance::operator+=(const Susceptance& rhs)
{
	value += rhs.value;
	return *this;
}

Susceptance& Susceptance::operator-=(const Susceptance& rhs)
{
	value -= rhs.value;
	return *this;
}

Susceptance& Susceptance::operator*=(const Susceptance& rhs)
{
	value *= rhs.value;
	return *this;
}

Susceptance& Susceptance::operator/=(const Susceptance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Susceptance& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Susceptance& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
