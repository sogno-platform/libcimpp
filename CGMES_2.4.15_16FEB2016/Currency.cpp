#include <sstream>
#include <iostream>
#include "Currency.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::Currency& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Currency")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "USD")
		{
			rop = Currency::USD;
			return lop;
		}
		if(EnumSymbol == "EUR")
		{
			rop = Currency::EUR;
			return lop;
		}
		if(EnumSymbol == "AUD")
		{
			rop = Currency::AUD;
			return lop;
		}
		if(EnumSymbol == "CAD")
		{
			rop = Currency::CAD;
			return lop;
		}
		if(EnumSymbol == "CHF")
		{
			rop = Currency::CHF;
			return lop;
		}
		if(EnumSymbol == "CNY")
		{
			rop = Currency::CNY;
			return lop;
		}
		if(EnumSymbol == "DKK")
		{
			rop = Currency::DKK;
			return lop;
		}
		if(EnumSymbol == "GBP")
		{
			rop = Currency::GBP;
			return lop;
		}
		if(EnumSymbol == "JPY")
		{
			rop = Currency::JPY;
			return lop;
		}
		if(EnumSymbol == "NOK")
		{
			rop = Currency::NOK;
			return lop;
		}
		if(EnumSymbol == "RUR")
		{
			rop = Currency::RUR;
			return lop;
		}
		if(EnumSymbol == "SEK")
		{
			rop = Currency::SEK;
			return lop;
		}
		if(EnumSymbol == "INR")
		{
			rop = Currency::INR;
			return lop;
		}
		if(EnumSymbol == "other")
		{
			rop = Currency::other;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

