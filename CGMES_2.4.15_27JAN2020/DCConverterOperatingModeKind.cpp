#include <sstream>
#include <iostream>
#include "DCConverterOperatingModeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::DCConverterOperatingModeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DCConverterOperatingModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "bipolar")
		{
			rop = DCConverterOperatingModeKind::bipolar;
			return lop;
		}
		if(EnumSymbol == "monopolarMetallicReturn")
		{
			rop = DCConverterOperatingModeKind::monopolarMetallicReturn;
			return lop;
		}
		if(EnumSymbol == "monopolarGroundReturn")
		{
			rop = DCConverterOperatingModeKind::monopolarGroundReturn;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

