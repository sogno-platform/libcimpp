#include <sstream>
#include <iostream>
#include "WindQcontrolModesKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::WindQcontrolModesKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindQcontrolModesKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "voltage")
		{
			rop = WindQcontrolModesKind::voltage;
			return lop;
		}
		if(EnumSymbol == "reactivePower")
		{
			rop = WindQcontrolModesKind::reactivePower;
			return lop;
		}
		if(EnumSymbol == "openLoopReactivePower")
		{
			rop = WindQcontrolModesKind::openLoopReactivePower;
			return lop;
		}
		if(EnumSymbol == "powerFactor")
		{
			rop = WindQcontrolModesKind::powerFactor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

