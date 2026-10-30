#include "Integer.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Integer& Integer::operator=(long int rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Integer::operator long int()
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Integer::debugName[] = "Integer";
const char* Integer::debugString() const
{
	return Integer::debugName;
}

Integer& Integer::operator+=(const Integer& rhs)
{
	value += rhs.value;
	return *this;
}

Integer& Integer::operator-=(const Integer& rhs)
{
	value -= rhs.value;
	return *this;
}

Integer& Integer::operator*=(const Integer& rhs)
{
	value *= rhs.value;
	return *this;
}

Integer& Integer::operator/=(const Integer& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Integer& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stol(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Integer& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
