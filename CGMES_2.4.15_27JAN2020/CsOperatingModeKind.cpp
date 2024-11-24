/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CsOperatingModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CsOperatingModeKind& CsOperatingModeKind::operator=(CsOperatingModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

CsOperatingModeKind::operator CsOperatingModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char CsOperatingModeKind::debugName[] = "CsOperatingModeKind";
const char* CsOperatingModeKind::debugString() const
{
	return CsOperatingModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, CsOperatingModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CsOperatingModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "inverter")
		{
			rop = CsOperatingModeKind::inverter;
			return lop;
		}
		if(EnumSymbol == "rectifier")
		{
			rop = CsOperatingModeKind::rectifier;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const CsOperatingModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == CsOperatingModeKind::inverter)
			{
				EnumSymbol = "inverter";
			}
			if (obj.value == CsOperatingModeKind::rectifier)
			{
				EnumSymbol = "rectifier";
			}

			if (!EnumSymbol.empty())
			{
				os << "CsOperatingModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
