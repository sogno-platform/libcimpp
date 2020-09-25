#include <sstream>
#include <iostream>
#include "LimitTypeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::LimitTypeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "LimitTypeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "patl")
		{
			rop = LimitTypeKind::patl;
			return lop;
		}
		if(EnumSymbol == "patlt")
		{
			rop = LimitTypeKind::patlt;
			return lop;
		}
		if(EnumSymbol == "tatl")
		{
			rop = LimitTypeKind::tatl;
			return lop;
		}
		if(EnumSymbol == "tc")
		{
			rop = LimitTypeKind::tc;
			return lop;
		}
		if(EnumSymbol == "tct")
		{
			rop = LimitTypeKind::tct;
			return lop;
		}
		if(EnumSymbol == "highVoltage")
		{
			rop = LimitTypeKind::highVoltage;
			return lop;
		}
		if(EnumSymbol == "lowVoltage")
		{
			rop = LimitTypeKind::lowVoltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

