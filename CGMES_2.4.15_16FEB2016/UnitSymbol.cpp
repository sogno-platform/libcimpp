#include <sstream>
#include <iostream>
#include "UnitSymbol.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::UnitSymbol& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "UnitSymbol")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "VA")
		{
			rop = UnitSymbol::VA;
			return lop;
		}
		if(EnumSymbol == "W")
		{
			rop = UnitSymbol::W;
			return lop;
		}
		if(EnumSymbol == "VAr")
		{
			rop = UnitSymbol::VAr;
			return lop;
		}
		if(EnumSymbol == "VAh")
		{
			rop = UnitSymbol::VAh;
			return lop;
		}
		if(EnumSymbol == "Wh")
		{
			rop = UnitSymbol::Wh;
			return lop;
		}
		if(EnumSymbol == "VArh")
		{
			rop = UnitSymbol::VArh;
			return lop;
		}
		if(EnumSymbol == "V")
		{
			rop = UnitSymbol::V;
			return lop;
		}
		if(EnumSymbol == "ohm")
		{
			rop = UnitSymbol::ohm;
			return lop;
		}
		if(EnumSymbol == "A")
		{
			rop = UnitSymbol::A;
			return lop;
		}
		if(EnumSymbol == "F")
		{
			rop = UnitSymbol::F;
			return lop;
		}
		if(EnumSymbol == "H")
		{
			rop = UnitSymbol::H;
			return lop;
		}
		if(EnumSymbol == "degC")
		{
			rop = UnitSymbol::degC;
			return lop;
		}
		if(EnumSymbol == "s")
		{
			rop = UnitSymbol::s;
			return lop;
		}
		if(EnumSymbol == "min")
		{
			rop = UnitSymbol::min;
			return lop;
		}
		if(EnumSymbol == "h")
		{
			rop = UnitSymbol::h;
			return lop;
		}
		if(EnumSymbol == "deg")
		{
			rop = UnitSymbol::deg;
			return lop;
		}
		if(EnumSymbol == "rad")
		{
			rop = UnitSymbol::rad;
			return lop;
		}
		if(EnumSymbol == "J")
		{
			rop = UnitSymbol::J;
			return lop;
		}
		if(EnumSymbol == "N")
		{
			rop = UnitSymbol::N;
			return lop;
		}
		if(EnumSymbol == "S")
		{
			rop = UnitSymbol::S;
			return lop;
		}
		if(EnumSymbol == "none")
		{
			rop = UnitSymbol::none;
			return lop;
		}
		if(EnumSymbol == "Hz")
		{
			rop = UnitSymbol::Hz;
			return lop;
		}
		if(EnumSymbol == "g")
		{
			rop = UnitSymbol::g;
			return lop;
		}
		if(EnumSymbol == "Pa")
		{
			rop = UnitSymbol::Pa;
			return lop;
		}
		if(EnumSymbol == "m")
		{
			rop = UnitSymbol::m;
			return lop;
		}
		if(EnumSymbol == "m2")
		{
			rop = UnitSymbol::m2;
			return lop;
		}
		if(EnumSymbol == "m3")
		{
			rop = UnitSymbol::m3;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
