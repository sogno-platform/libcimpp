#include <sstream>
#include <iostream>
#include "DroopSignalFeedbackKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::DroopSignalFeedbackKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DroopSignalFeedbackKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "electricalPower")
		{
			rop = DroopSignalFeedbackKind::electricalPower;
			return lop;
		}
		if(EnumSymbol == "none")
		{
			rop = DroopSignalFeedbackKind::none;
			return lop;
		}
		if(EnumSymbol == "fuelValveStroke")
		{
			rop = DroopSignalFeedbackKind::fuelValveStroke;
			return lop;
		}
		if(EnumSymbol == "governorOutput")
		{
			rop = DroopSignalFeedbackKind::governorOutput;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

