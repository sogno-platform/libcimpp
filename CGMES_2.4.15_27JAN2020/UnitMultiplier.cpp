#include <sstream>
#include <iostream>
#include "UnitMultiplier.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::UnitMultiplier& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "UnitMultiplier")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "p")
		{
			rop = UnitMultiplier::p;
			return lop;
		}
		if(EnumSymbol == "n")
		{
			rop = UnitMultiplier::n;
			return lop;
		}
		if(EnumSymbol == "micro")
		{
			rop = UnitMultiplier::micro;
			return lop;
		}
		if(EnumSymbol == "m")
		{
			rop = UnitMultiplier::m;
			return lop;
		}
		if(EnumSymbol == "c")
		{
			rop = UnitMultiplier::c;
			return lop;
		}
		if(EnumSymbol == "d")
		{
			rop = UnitMultiplier::d;
			return lop;
		}
		if(EnumSymbol == "k")
		{
			rop = UnitMultiplier::k;
			return lop;
		}
		if(EnumSymbol == "M")
		{
			rop = UnitMultiplier::M;
			return lop;
		}
		if(EnumSymbol == "G")
		{
			rop = UnitMultiplier::G;
			return lop;
		}
		if(EnumSymbol == "T")
		{
			rop = UnitMultiplier::T;
			return lop;
		}
		if(EnumSymbol == "none")
		{
			rop = UnitMultiplier::none;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

