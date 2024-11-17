#include <sstream>
#include <iostream>
#include "WindingConnection.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::WindingConnection& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindingConnection")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "D")
		{
			rop = WindingConnection::D;
			return lop;
		}
		if(EnumSymbol == "Y")
		{
			rop = WindingConnection::Y;
			return lop;
		}
		if(EnumSymbol == "Z")
		{
			rop = WindingConnection::Z;
			return lop;
		}
		if(EnumSymbol == "Yn")
		{
			rop = WindingConnection::Yn;
			return lop;
		}
		if(EnumSymbol == "Zn")
		{
			rop = WindingConnection::Zn;
			return lop;
		}
		if(EnumSymbol == "A")
		{
			rop = WindingConnection::A;
			return lop;
		}
		if(EnumSymbol == "I")
		{
			rop = WindingConnection::I;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
