#include <sstream>
#include <iostream>
#include "SynchronousMachineModelKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineModelKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SynchronousMachineModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "subtransient")
		{
			rop = SynchronousMachineModelKind::subtransient;
			return lop;
		}
		if(EnumSymbol == "subtransientTypeF")
		{
			rop = SynchronousMachineModelKind::subtransientTypeF;
			return lop;
		}
		if(EnumSymbol == "subtransientTypeJ")
		{
			rop = SynchronousMachineModelKind::subtransientTypeJ;
			return lop;
		}
		if(EnumSymbol == "subtransientSimplified")
		{
			rop = SynchronousMachineModelKind::subtransientSimplified;
			return lop;
		}
		if(EnumSymbol == "subtransientSimplifiedDirectAxis")
		{
			rop = SynchronousMachineModelKind::subtransientSimplifiedDirectAxis;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

