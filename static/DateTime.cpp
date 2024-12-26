#include "DateTime.hpp"

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

DateTime& DateTime::operator=(const std::string& rop)
{
	value = rop;
	initialized = true;
	return *this;
}

DateTime::operator std::string() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char DateTime::debugName[] = "DateTime";
const char* DateTime::debugString()
{
	return DateTime::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, DateTime& rop)
	{
		lop >> rop.value;
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const DateTime& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
