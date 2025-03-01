/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PetersenCoilModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PetersenCoilModeKind& PetersenCoilModeKind::operator=(PetersenCoilModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

PetersenCoilModeKind::operator PetersenCoilModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char PetersenCoilModeKind::debugName[] = "PetersenCoilModeKind";
const char* PetersenCoilModeKind::debugString() const
{
	return PetersenCoilModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, PetersenCoilModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "PetersenCoilModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "fixed")
		{
			rop = PetersenCoilModeKind::fixed;
			return lop;
		}
		if (EnumSymbol == "manual")
		{
			rop = PetersenCoilModeKind::manual;
			return lop;
		}
		if (EnumSymbol == "automaticPositioning")
		{
			rop = PetersenCoilModeKind::automaticPositioning;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const PetersenCoilModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == PetersenCoilModeKind::fixed)
			{
				EnumSymbol = "fixed";
			}
			if (obj.value == PetersenCoilModeKind::manual)
			{
				EnumSymbol = "manual";
			}
			if (obj.value == PetersenCoilModeKind::automaticPositioning)
			{
				EnumSymbol = "automaticPositioning";
			}

			if (!EnumSymbol.empty())
			{
				os << "PetersenCoilModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
