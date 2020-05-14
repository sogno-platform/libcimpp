#include <sstream>
#include <iostream>
#include "ControlAreaTypeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ControlAreaTypeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ControlAreaTypeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "AGC")
		{
			rop = ControlAreaTypeKind::AGC;
			return lop;
		}
		if(EnumSymbol == "Forecast")
		{
			rop = ControlAreaTypeKind::Forecast;
			return lop;
		}
		if(EnumSymbol == "Interchange")
		{
			rop = ControlAreaTypeKind::Interchange;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

