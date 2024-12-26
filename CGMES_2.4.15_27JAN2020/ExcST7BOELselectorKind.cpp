#include <sstream>
#include <iostream>
#include "ExcST7BOELselectorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST7BOELselectorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcST7BOELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "noOELinput")
		{
			rop = ExcST7BOELselectorKind::noOELinput;
			return lop;
		}
		if(EnumSymbol == "addVref")
		{
			rop = ExcST7BOELselectorKind::addVref;
			return lop;
		}
		if(EnumSymbol == "inputLVgate")
		{
			rop = ExcST7BOELselectorKind::inputLVgate;
			return lop;
		}
		if(EnumSymbol == "outputLVgate")
		{
			rop = ExcST7BOELselectorKind::outputLVgate;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
