#include <sstream>
#include <iostream>
#include "ShortCircuitRotorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ShortCircuitRotorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ShortCircuitRotorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "salientPole1")
		{
			rop = ShortCircuitRotorKind::salientPole1;
			return lop;
		}
		if(EnumSymbol == "salientPole2")
		{
			rop = ShortCircuitRotorKind::salientPole2;
			return lop;
		}
		if(EnumSymbol == "turboSeries1")
		{
			rop = ShortCircuitRotorKind::turboSeries1;
			return lop;
		}
		if(EnumSymbol == "turboSeries2")
		{
			rop = ShortCircuitRotorKind::turboSeries2;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

