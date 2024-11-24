/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Validity.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Validity& Validity::operator=(Validity_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Validity::operator Validity_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Validity::debugName[] = "Validity";
const char* Validity::debugString() const
{
	return Validity::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Validity& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Validity")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "GOOD")
		{
			rop = Validity::GOOD;
			return lop;
		}
		if(EnumSymbol == "QUESTIONABLE")
		{
			rop = Validity::QUESTIONABLE;
			return lop;
		}
		if(EnumSymbol == "INVALID")
		{
			rop = Validity::INVALID;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Validity& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == Validity::GOOD)
			{
				EnumSymbol = "GOOD";
			}
			if (obj.value == Validity::QUESTIONABLE)
			{
				EnumSymbol = "QUESTIONABLE";
			}
			if (obj.value == Validity::INVALID)
			{
				EnumSymbol = "INVALID";
			}

			if (!EnumSymbol.empty())
			{
				os << "Validity." << EnumSymbol;
			}
		}
		return os;
	}
}
