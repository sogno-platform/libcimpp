#include <sstream>
#include <iostream>
#include "ExcST7BUELselectorKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST7BUELselectorKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcST7BUELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "noUELinput")
		{
			rop = ExcST7BUELselectorKind::noUELinput;
			return lop;
		}
		if(EnumSymbol == "addVref")
		{
			rop = ExcST7BUELselectorKind::addVref;
			return lop;
		}
		if(EnumSymbol == "inputHVgate")
		{
			rop = ExcST7BUELselectorKind::inputHVgate;
			return lop;
		}
		if(EnumSymbol == "outputHVgate")
		{
			rop = ExcST7BUELselectorKind::outputHVgate;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

