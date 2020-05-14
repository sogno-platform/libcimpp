#include <sstream>
#include <iostream>
#include "CurveStyle.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::CurveStyle& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CurveStyle")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "constantYValue")
		{
			rop = CurveStyle::constantYValue;
			return lop;
		}
		if(EnumSymbol == "straightLineYValues")
		{
			rop = CurveStyle::straightLineYValues;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

