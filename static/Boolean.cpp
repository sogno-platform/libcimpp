#include "Boolean.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Boolean& Boolean::operator=(bool rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Boolean::operator bool()
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Boolean::debugName[] = "Boolean";
const char* Boolean::debugString() const
{
	return Boolean::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Boolean& rop)
	{
		rop.initialized = false;

		std::string tmp;
		lop >> tmp;

		if (tmp == "true" || tmp == "True" || tmp == "TRUE")
		{
			rop.value = true;
			rop.initialized = true;
			return lop;
		}
		if (tmp == "false" || tmp == "False" || tmp == "FALSE")
		{
			rop.value = false;
			rop.initialized = true;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Boolean& obj)
	{
		if (obj.initialized)
		{
			if (obj.value)
			{
				os << "true";
			}
			else
			{
				os << "false";
			}
		}
		return os;
	}
}
