#include <sstream>
#include <iostream>
#include "HydroEnergyConversionKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::HydroEnergyConversionKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "HydroEnergyConversionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "generator")
		{
			rop = HydroEnergyConversionKind::generator;
			return lop;
		}
		if(EnumSymbol == "pumpAndGenerator")
		{
			rop = HydroEnergyConversionKind::pumpAndGenerator;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

