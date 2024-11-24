#include <sstream>
#include <iostream>
#include "GenericNonLinearLoadModelKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::GenericNonLinearLoadModelKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "GenericNonLinearLoadModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "exponentialRecovery")
		{
			rop = GenericNonLinearLoadModelKind::exponentialRecovery;
			return lop;
		}
		if(EnumSymbol == "loadAdaptive")
		{
			rop = GenericNonLinearLoadModelKind::loadAdaptive;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
