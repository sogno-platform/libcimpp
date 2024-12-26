#include <sstream>
#include <iostream>
#include "DCPolarityKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::DCPolarityKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DCPolarityKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "positive")
		{
			rop = DCPolarityKind::positive;
			return lop;
		}
		if(EnumSymbol == "middle")
		{
			rop = DCPolarityKind::middle;
			return lop;
		}
		if(EnumSymbol == "negative")
		{
			rop = DCPolarityKind::negative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
