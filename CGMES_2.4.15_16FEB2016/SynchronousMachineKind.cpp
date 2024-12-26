#include <sstream>
#include <iostream>
#include "SynchronousMachineKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SynchronousMachineKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "generator")
		{
			rop = SynchronousMachineKind::generator;
			return lop;
		}
		if(EnumSymbol == "condenser")
		{
			rop = SynchronousMachineKind::condenser;
			return lop;
		}
		if(EnumSymbol == "generatorOrCondenser")
		{
			rop = SynchronousMachineKind::generatorOrCondenser;
			return lop;
		}
		if(EnumSymbol == "motor")
		{
			rop = SynchronousMachineKind::motor;
			return lop;
		}
		if(EnumSymbol == "generatorOrMotor")
		{
			rop = SynchronousMachineKind::generatorOrMotor;
			return lop;
		}
		if(EnumSymbol == "motorOrCondenser")
		{
			rop = SynchronousMachineKind::motorOrCondenser;
			return lop;
		}
		if(EnumSymbol == "generatorOrCondenserOrMotor")
		{
			rop = SynchronousMachineKind::generatorOrCondenserOrMotor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
