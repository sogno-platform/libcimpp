#include <sstream>
#include <iostream>
#include "ExcST6BOELselectorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST6BOELselectorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcST6BOELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "noOELinput")
		{
			rop = ExcST6BOELselectorKind::noOELinput;
			return lop;
		}
		if(EnumSymbol == "beforeUEL")
		{
			rop = ExcST6BOELselectorKind::beforeUEL;
			return lop;
		}
		if(EnumSymbol == "afterUEL")
		{
			rop = ExcST6BOELselectorKind::afterUEL;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
