#include <sstream>
#include <iostream>
#include "RotorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::RotorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "RotorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "roundRotor")
		{
			rop = RotorKind::roundRotor;
			return lop;
		}
		if(EnumSymbol == "salientPole")
		{
			rop = RotorKind::salientPole;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

