/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "String.hpp"

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

String& String::operator=(const std::string& rop)
{
	value = rop;
	initialized = true;
	return *this;
}

String::operator std::string() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char String::debugName[] = "String";
const char* String::debugString() const
{
	return String::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, String& rop)
	{
		lop >> rop.value;
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const String& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
