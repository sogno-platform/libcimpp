#include <sstream>
#include <iostream>
#include "AsynchronousMachineKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::AsynchronousMachineKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "AsynchronousMachineKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "generator")
		{
			rop = AsynchronousMachineKind::generator;
			return lop;
		}
		if(EnumSymbol == "motor")
		{
			rop = AsynchronousMachineKind::motor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

