#include <sstream>
#include <iostream>
#include "PhaseCode.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::PhaseCode& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "PhaseCode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "ABCN")
		{
			rop = PhaseCode::ABCN;
			return lop;
		}
		if(EnumSymbol == "ABC")
		{
			rop = PhaseCode::ABC;
			return lop;
		}
		if(EnumSymbol == "ABN")
		{
			rop = PhaseCode::ABN;
			return lop;
		}
		if(EnumSymbol == "ACN")
		{
			rop = PhaseCode::ACN;
			return lop;
		}
		if(EnumSymbol == "BCN")
		{
			rop = PhaseCode::BCN;
			return lop;
		}
		if(EnumSymbol == "AB")
		{
			rop = PhaseCode::AB;
			return lop;
		}
		if(EnumSymbol == "AC")
		{
			rop = PhaseCode::AC;
			return lop;
		}
		if(EnumSymbol == "BC")
		{
			rop = PhaseCode::BC;
			return lop;
		}
		if(EnumSymbol == "AN")
		{
			rop = PhaseCode::AN;
			return lop;
		}
		if(EnumSymbol == "BN")
		{
			rop = PhaseCode::BN;
			return lop;
		}
		if(EnumSymbol == "CN")
		{
			rop = PhaseCode::CN;
			return lop;
		}
		if(EnumSymbol == "A")
		{
			rop = PhaseCode::A;
			return lop;
		}
		if(EnumSymbol == "B")
		{
			rop = PhaseCode::B;
			return lop;
		}
		if(EnumSymbol == "C")
		{
			rop = PhaseCode::C;
			return lop;
		}
		if(EnumSymbol == "N")
		{
			rop = PhaseCode::N;
			return lop;
		}
		if(EnumSymbol == "s1N")
		{
			rop = PhaseCode::s1N;
			return lop;
		}
		if(EnumSymbol == "s2N")
		{
			rop = PhaseCode::s2N;
			return lop;
		}
		if(EnumSymbol == "s12N")
		{
			rop = PhaseCode::s12N;
			return lop;
		}
		if(EnumSymbol == "s1")
		{
			rop = PhaseCode::s1;
			return lop;
		}
		if(EnumSymbol == "s2")
		{
			rop = PhaseCode::s2;
			return lop;
		}
		if(EnumSymbol == "s12")
		{
			rop = PhaseCode::s12;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
