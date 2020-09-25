#include <sstream>
#include <iostream>
#include "TransformerControlMode.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::TransformerControlMode& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "TransformerControlMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "volt")
		{
			rop = TransformerControlMode::volt;
			return lop;
		}
		if(EnumSymbol == "reactive")
		{
			rop = TransformerControlMode::reactive;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

