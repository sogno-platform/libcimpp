#include <sstream>
#include <iostream>
#include "FuelType.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::FuelType& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "FuelType")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "coal")
		{
			rop = FuelType::coal;
			return lop;
		}
		if(EnumSymbol == "oil")
		{
			rop = FuelType::oil;
			return lop;
		}
		if(EnumSymbol == "gas")
		{
			rop = FuelType::gas;
			return lop;
		}
		if(EnumSymbol == "lignite")
		{
			rop = FuelType::lignite;
			return lop;
		}
		if(EnumSymbol == "hardCoal")
		{
			rop = FuelType::hardCoal;
			return lop;
		}
		if(EnumSymbol == "oilShale")
		{
			rop = FuelType::oilShale;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
