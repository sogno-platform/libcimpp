/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ResistancePerLength.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ResistancePerLength& ResistancePerLength::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ResistancePerLength::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ResistancePerLength::debugName[] = "ResistancePerLength";
const char* ResistancePerLength::debugString() const
{
	return ResistancePerLength::debugName;
}

ResistancePerLength& ResistancePerLength::operator+=(const ResistancePerLength& rhs)
{
	value += rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator-=(const ResistancePerLength& rhs)
{
	value -= rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator*=(const ResistancePerLength& rhs)
{
	value *= rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator/=(const ResistancePerLength& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ResistancePerLength& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ResistancePerLength& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
