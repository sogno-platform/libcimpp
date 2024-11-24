#include <sstream>
#include <iostream>
#include "WindLookupTableFunctionKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::WindLookupTableFunctionKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindLookupTableFunctionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "fpslip")
		{
			rop = WindLookupTableFunctionKind::fpslip;
			return lop;
		}
		if(EnumSymbol == "fpomega")
		{
			rop = WindLookupTableFunctionKind::fpomega;
			return lop;
		}
		if(EnumSymbol == "ipvdl")
		{
			rop = WindLookupTableFunctionKind::ipvdl;
			return lop;
		}
		if(EnumSymbol == "iqvdl")
		{
			rop = WindLookupTableFunctionKind::iqvdl;
			return lop;
		}
		if(EnumSymbol == "fdpf")
		{
			rop = WindLookupTableFunctionKind::fdpf;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
