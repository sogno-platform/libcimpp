#include <sstream>
#include <iostream>
#include "StaticLoadModelKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::StaticLoadModelKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "StaticLoadModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "exponential")
		{
			rop = StaticLoadModelKind::exponential;
			return lop;
		}
		if(EnumSymbol == "zIP1")
		{
			rop = StaticLoadModelKind::zIP1;
			return lop;
		}
		if(EnumSymbol == "zIP2")
		{
			rop = StaticLoadModelKind::zIP2;
			return lop;
		}
		if(EnumSymbol == "constantZ")
		{
			rop = StaticLoadModelKind::constantZ;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

