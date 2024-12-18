/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OrientationKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

OrientationKind& OrientationKind::operator=(OrientationKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

OrientationKind::operator OrientationKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char OrientationKind::debugName[] = "OrientationKind";
const char* OrientationKind::debugString() const
{
	return OrientationKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, OrientationKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "OrientationKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "negative")
		{
			rop = OrientationKind::negative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const OrientationKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == OrientationKind::negative)
			{
				EnumSymbol = "negative";
			}

			if (!EnumSymbol.empty())
			{
				os << "OrientationKind." << EnumSymbol;
			}
		}
		return os;
	}
}
