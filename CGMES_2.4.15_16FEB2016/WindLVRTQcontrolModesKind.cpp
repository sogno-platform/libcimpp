#include <sstream>
#include <iostream>
#include "WindLVRTQcontrolModesKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::WindLVRTQcontrolModesKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindLVRTQcontrolModesKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "mode1")
		{
			rop = WindLVRTQcontrolModesKind::mode1;
			return lop;
		}
		if(EnumSymbol == "mode2")
		{
			rop = WindLVRTQcontrolModesKind::mode2;
			return lop;
		}
		if(EnumSymbol == "mode3")
		{
			rop = WindLVRTQcontrolModesKind::mode3;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
