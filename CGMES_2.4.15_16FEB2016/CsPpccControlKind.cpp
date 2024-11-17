#include <sstream>
#include <iostream>
#include "CsPpccControlKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::CsPpccControlKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CsPpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "activePower")
		{
			rop = CsPpccControlKind::activePower;
			return lop;
		}
		if(EnumSymbol == "dcVoltage")
		{
			rop = CsPpccControlKind::dcVoltage;
			return lop;
		}
		if(EnumSymbol == "dcCurrent")
		{
			rop = CsPpccControlKind::dcCurrent;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
