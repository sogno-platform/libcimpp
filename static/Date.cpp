#include "Date.hpp"

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Date& Date::operator=(const std::string& rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Date::operator std::string() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Date::debugName[] = "Date";
const char* Date::debugString()
{
	return Date::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Date& rop)
	{
		lop >> rop.value;
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Date& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
