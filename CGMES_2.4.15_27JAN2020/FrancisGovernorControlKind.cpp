#include <sstream>
#include <iostream>
#include "FrancisGovernorControlKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::FrancisGovernorControlKind& rop)
	{
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
}
