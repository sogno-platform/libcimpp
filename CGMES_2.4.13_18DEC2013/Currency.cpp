/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Currency.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Currency& Currency::operator=(Currency_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Currency::operator Currency_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Currency::debugName[] = "Currency";
const char* Currency::debugString() const
{
	return Currency::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Currency& rop)
	{
		rop.initialized = false;

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

	std::ostream& operator<<(std::ostream& os, const Currency& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == Currency::USD)
			{
				EnumSymbol = "USD";
			}
			if (obj.value == Currency::EUR)
			{
				EnumSymbol = "EUR";
			}
			if (obj.value == Currency::AUD)
			{
				EnumSymbol = "AUD";
			}
			if (obj.value == Currency::CAD)
			{
				EnumSymbol = "CAD";
			}
			if (obj.value == Currency::CHF)
			{
				EnumSymbol = "CHF";
			}
			if (obj.value == Currency::CNY)
			{
				EnumSymbol = "CNY";
			}
			if (obj.value == Currency::DKK)
			{
				EnumSymbol = "DKK";
			}
			if (obj.value == Currency::GBP)
			{
				EnumSymbol = "GBP";
			}
			if (obj.value == Currency::JPY)
			{
				EnumSymbol = "JPY";
			}
			if (obj.value == Currency::NOK)
			{
				EnumSymbol = "NOK";
			}
			if (obj.value == Currency::RUR)
			{
				EnumSymbol = "RUR";
			}
			if (obj.value == Currency::SEK)
			{
				EnumSymbol = "SEK";
			}
			if (obj.value == Currency::INR)
			{
				EnumSymbol = "INR";
			}
			if (obj.value == Currency::other)
			{
				EnumSymbol = "other";
			}

			if (!EnumSymbol.empty())
			{
				os << "Currency." << EnumSymbol;
			}
		}
		return os;
	}
}
