#include <sstream>
#include <iostream>
#include "OrientationKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::OrientationKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "OrientationKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "negative")
		{
			rop = OrientationKind::negative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
