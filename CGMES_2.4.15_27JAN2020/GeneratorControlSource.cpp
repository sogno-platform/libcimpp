#include <sstream>
#include <iostream>
#include "GeneratorControlSource.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::GeneratorControlSource& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "GeneratorControlSource")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "unavailable")
		{
			rop = GeneratorControlSource::unavailable;
			return lop;
		}
		if(EnumSymbol == "offAGC")
		{
			rop = GeneratorControlSource::offAGC;
			return lop;
		}
		if(EnumSymbol == "onAGC")
		{
			rop = GeneratorControlSource::onAGC;
			return lop;
		}
		if(EnumSymbol == "plantControl")
		{
			rop = GeneratorControlSource::plantControl;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

