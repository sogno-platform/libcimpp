#include <sstream>
#include <iostream>
#include "ExcIEEEST1AUELselectorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ExcIEEEST1AUELselectorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcIEEEST1AUELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "ignoreUELsignal")
		{
			rop = ExcIEEEST1AUELselectorKind::ignoreUELsignal;
			return lop;
		}
		if(EnumSymbol == "inputHVgateVoltageOutput")
		{
			rop = ExcIEEEST1AUELselectorKind::inputHVgateVoltageOutput;
			return lop;
		}
		if(EnumSymbol == "inputHVgateErrorSignal")
		{
			rop = ExcIEEEST1AUELselectorKind::inputHVgateErrorSignal;
			return lop;
		}
		if(EnumSymbol == "inputAddedToErrorSignal")
		{
			rop = ExcIEEEST1AUELselectorKind::inputAddedToErrorSignal;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
