#include <sstream>
#include <iostream>
#include "OperationalLimitDirectionKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::OperationalLimitDirectionKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "OperationalLimitDirectionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "high")
		{
			rop = OperationalLimitDirectionKind::high;
			return lop;
		}
		if(EnumSymbol == "low")
		{
			rop = OperationalLimitDirectionKind::low;
			return lop;
		}
		if(EnumSymbol == "absoluteValue")
		{
			rop = OperationalLimitDirectionKind::absoluteValue;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
