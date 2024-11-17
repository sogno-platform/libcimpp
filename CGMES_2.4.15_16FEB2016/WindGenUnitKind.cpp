#include <sstream>
#include <iostream>
#include "WindGenUnitKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::WindGenUnitKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindGenUnitKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "offshore")
		{
			rop = WindGenUnitKind::offshore;
			return lop;
		}
		if(EnumSymbol == "onshore")
		{
			rop = WindGenUnitKind::onshore;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
