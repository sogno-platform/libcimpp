#include <sstream>
#include <iostream>
#include "CsOperatingModeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::CsOperatingModeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CsOperatingModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "inverter")
		{
			rop = CsOperatingModeKind::inverter;
			return lop;
		}
		if(EnumSymbol == "rectifier")
		{
			rop = CsOperatingModeKind::rectifier;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

