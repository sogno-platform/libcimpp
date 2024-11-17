#include <sstream>
#include <iostream>
#include "Source.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::Source& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Source")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "PROCESS")
		{
			rop = Source::PROCESS;
			return lop;
		}
		if(EnumSymbol == "DEFAULTED")
		{
			rop = Source::DEFAULTED;
			return lop;
		}
		if(EnumSymbol == "SUBSTITUTED")
		{
			rop = Source::SUBSTITUTED;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
