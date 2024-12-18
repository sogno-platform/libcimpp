/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroTurbineKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

HydroTurbineKind& HydroTurbineKind::operator=(HydroTurbineKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

HydroTurbineKind::operator HydroTurbineKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char HydroTurbineKind::debugName[] = "HydroTurbineKind";
const char* HydroTurbineKind::debugString() const
{
	return HydroTurbineKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, HydroTurbineKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "HydroTurbineKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "francis")
		{
			rop = HydroTurbineKind::francis;
			return lop;
		}
		if(EnumSymbol == "pelton")
		{
			rop = HydroTurbineKind::pelton;
			return lop;
		}
		if(EnumSymbol == "kaplan")
		{
			rop = HydroTurbineKind::kaplan;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const HydroTurbineKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == HydroTurbineKind::francis)
			{
				EnumSymbol = "francis";
			}
			if (obj.value == HydroTurbineKind::pelton)
			{
				EnumSymbol = "pelton";
			}
			if (obj.value == HydroTurbineKind::kaplan)
			{
				EnumSymbol = "kaplan";
			}

			if (!EnumSymbol.empty())
			{
				os << "HydroTurbineKind." << EnumSymbol;
			}
		}
		return os;
	}
}
