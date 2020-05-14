#include <sstream>
#include <iostream>
#include "PetersenCoilModeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::PetersenCoilModeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "PetersenCoilModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "fixed")
		{
			rop = PetersenCoilModeKind::fixed;
			return lop;
		}
		if(EnumSymbol == "manual")
		{
			rop = PetersenCoilModeKind::manual;
			return lop;
		}
		if(EnumSymbol == "automaticPositioning")
		{
			rop = PetersenCoilModeKind::automaticPositioning;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

