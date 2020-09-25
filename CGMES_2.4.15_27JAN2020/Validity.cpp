#include <sstream>
#include <iostream>
#include "Validity.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::Validity& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Validity")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "GOOD")
		{
			rop = Validity::GOOD;
			return lop;
		}
		if(EnumSymbol == "QUESTIONABLE")
		{
			rop = Validity::QUESTIONABLE;
			return lop;
		}
		if(EnumSymbol == "INVALID")
		{
			rop = Validity::INVALID;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

