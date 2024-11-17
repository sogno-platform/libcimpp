#include <sstream>
#include <iostream>
#include "IfdBaseKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::IfdBaseKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "IfdBaseKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "ifag")
		{
			rop = IfdBaseKind::ifag;
			return lop;
		}
		if(EnumSymbol == "ifnl")
		{
			rop = IfdBaseKind::ifnl;
			return lop;
		}
		if(EnumSymbol == "iffl")
		{
			rop = IfdBaseKind::iffl;
			return lop;
		}
		if(EnumSymbol == "other")
		{
			rop = IfdBaseKind::other;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
