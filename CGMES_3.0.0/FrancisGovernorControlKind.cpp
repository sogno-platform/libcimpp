/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FrancisGovernorControlKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

FrancisGovernorControlKind& FrancisGovernorControlKind::operator=(FrancisGovernorControlKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

FrancisGovernorControlKind::operator FrancisGovernorControlKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char FrancisGovernorControlKind::debugName[] = "FrancisGovernorControlKind";
const char* FrancisGovernorControlKind::debugString() const
{
	return FrancisGovernorControlKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, FrancisGovernorControlKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "FrancisGovernorControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "mechanicHydrolicTachoAccelerator")
		{
			rop = FrancisGovernorControlKind::mechanicHydrolicTachoAccelerator;
			return lop;
		}
		if(EnumSymbol == "mechanicHydraulicTransientFeedback")
		{
			rop = FrancisGovernorControlKind::mechanicHydraulicTransientFeedback;
			return lop;
		}
		if(EnumSymbol == "electromechanicalElectrohydraulic")
		{
			rop = FrancisGovernorControlKind::electromechanicalElectrohydraulic;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const FrancisGovernorControlKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == FrancisGovernorControlKind::mechanicHydrolicTachoAccelerator)
			{
				EnumSymbol = "mechanicHydrolicTachoAccelerator";
			}
			if (obj.value == FrancisGovernorControlKind::mechanicHydraulicTransientFeedback)
			{
				EnumSymbol = "mechanicHydraulicTransientFeedback";
			}
			if (obj.value == FrancisGovernorControlKind::electromechanicalElectrohydraulic)
			{
				EnumSymbol = "electromechanicalElectrohydraulic";
			}

			if (!EnumSymbol.empty())
			{
				os << "FrancisGovernorControlKind." << EnumSymbol;
			}
		}
		return os;
	}
}
