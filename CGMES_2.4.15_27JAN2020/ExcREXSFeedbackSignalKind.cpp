#include <sstream>
#include <iostream>
#include "ExcREXSFeedbackSignalKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ExcREXSFeedbackSignalKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcREXSFeedbackSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "fieldVoltage")
		{
			rop = ExcREXSFeedbackSignalKind::fieldVoltage;
			return lop;
		}
		if(EnumSymbol == "fieldCurrent")
		{
			rop = ExcREXSFeedbackSignalKind::fieldCurrent;
			return lop;
		}
		if(EnumSymbol == "outputVoltage")
		{
			rop = ExcREXSFeedbackSignalKind::outputVoltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
