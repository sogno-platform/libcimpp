#include <sstream>
#include <iostream>
#include "VsQpccControlKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::VsQpccControlKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "VsQpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "reactivePcc")
		{
			rop = VsQpccControlKind::reactivePcc;
			return lop;
		}
		if(EnumSymbol == "voltagePcc")
		{
			rop = VsQpccControlKind::voltagePcc;
			return lop;
		}
		if(EnumSymbol == "powerFactorPcc")
		{
			rop = VsQpccControlKind::powerFactorPcc;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

