/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenUnitKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindGenUnitKind& WindGenUnitKind::operator=(WindGenUnitKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindGenUnitKind::operator WindGenUnitKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindGenUnitKind::debugName[] = "WindGenUnitKind";
const char* WindGenUnitKind::debugString() const
{
	return WindGenUnitKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindGenUnitKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "WindGenUnitKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "offshore")
		{
			rop = WindGenUnitKind::offshore;
			return lop;
		}
		if (EnumSymbol == "onshore")
		{
			rop = WindGenUnitKind::onshore;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindGenUnitKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindGenUnitKind::offshore)
			{
				EnumSymbol = "offshore";
			}
			if (obj.value == WindGenUnitKind::onshore)
			{
				EnumSymbol = "onshore";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindGenUnitKind." << EnumSymbol;
			}
		}
		return os;
	}
}
