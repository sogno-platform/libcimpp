#include <sstream>
#include <iostream>
#include "VsPpccControlKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::VsPpccControlKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "VsPpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "pPcc")
		{
			rop = VsPpccControlKind::pPcc;
			return lop;
		}
		if(EnumSymbol == "udc")
		{
			rop = VsPpccControlKind::udc;
			return lop;
		}
		if(EnumSymbol == "pPccAndUdcDroop")
		{
			rop = VsPpccControlKind::pPccAndUdcDroop;
			return lop;
		}
		if(EnumSymbol == "pPccAndUdcDroopWithCompensation")
		{
			rop = VsPpccControlKind::pPccAndUdcDroopWithCompensation;
			return lop;
		}
		if(EnumSymbol == "pPccAndUdcDroopPilot")
		{
			rop = VsPpccControlKind::pPccAndUdcDroopPilot;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

