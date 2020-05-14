#include <sstream>
#include <iostream>
#include "SVCControlMode.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::SVCControlMode& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SVCControlMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "reactivePower")
		{
			rop = SVCControlMode::reactivePower;
			return lop;
		}
		if(EnumSymbol == "voltage")
		{
			rop = SVCControlMode::voltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

