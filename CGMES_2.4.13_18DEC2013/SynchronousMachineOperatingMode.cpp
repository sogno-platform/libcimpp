#include <sstream>
#include <iostream>
#include "SynchronousMachineOperatingMode.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineOperatingMode& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SynchronousMachineOperatingMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "generator")
		{
			rop = SynchronousMachineOperatingMode::generator;
			return lop;
		}
		if(EnumSymbol == "condenser")
		{
			rop = SynchronousMachineOperatingMode::condenser;
			return lop;
		}
		if(EnumSymbol == "motor")
		{
			rop = SynchronousMachineOperatingMode::motor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

