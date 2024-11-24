/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "InductancePerLength.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

InductancePerLength& InductancePerLength::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

InductancePerLength::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char InductancePerLength::debugName[] = "InductancePerLength";
const char* InductancePerLength::debugString() const
{
	return InductancePerLength::debugName;
}

InductancePerLength& InductancePerLength::operator+=(const InductancePerLength& rhs)
{
	value += rhs.value;
	return *this;
}

InductancePerLength& InductancePerLength::operator-=(const InductancePerLength& rhs)
{
	value -= rhs.value;
	return *this;
}

InductancePerLength& InductancePerLength::operator*=(const InductancePerLength& rhs)
{
	value *= rhs.value;
	return *this;
}

InductancePerLength& InductancePerLength::operator/=(const InductancePerLength& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, InductancePerLength& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const InductancePerLength& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
