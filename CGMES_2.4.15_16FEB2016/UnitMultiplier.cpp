/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnitMultiplier.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

UnitMultiplier& UnitMultiplier::operator=(UnitMultiplier_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

UnitMultiplier::operator UnitMultiplier_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char UnitMultiplier::debugName[] = "UnitMultiplier";
const char* UnitMultiplier::debugString() const
{
	return UnitMultiplier::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, UnitMultiplier& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "UnitMultiplier")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "p")
		{
			rop = UnitMultiplier::p;
			return lop;
		}
		if (EnumSymbol == "n")
		{
			rop = UnitMultiplier::n;
			return lop;
		}
		if (EnumSymbol == "micro")
		{
			rop = UnitMultiplier::micro;
			return lop;
		}
		if (EnumSymbol == "m")
		{
			rop = UnitMultiplier::m;
			return lop;
		}
		if (EnumSymbol == "c")
		{
			rop = UnitMultiplier::c;
			return lop;
		}
		if (EnumSymbol == "d")
		{
			rop = UnitMultiplier::d;
			return lop;
		}
		if (EnumSymbol == "k")
		{
			rop = UnitMultiplier::k;
			return lop;
		}
		if (EnumSymbol == "M")
		{
			rop = UnitMultiplier::M;
			return lop;
		}
		if (EnumSymbol == "G")
		{
			rop = UnitMultiplier::G;
			return lop;
		}
		if (EnumSymbol == "T")
		{
			rop = UnitMultiplier::T;
			return lop;
		}
		if (EnumSymbol == "none")
		{
			rop = UnitMultiplier::none;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const UnitMultiplier& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == UnitMultiplier::p)
			{
				EnumSymbol = "p";
			}
			if (obj.value == UnitMultiplier::n)
			{
				EnumSymbol = "n";
			}
			if (obj.value == UnitMultiplier::micro)
			{
				EnumSymbol = "micro";
			}
			if (obj.value == UnitMultiplier::m)
			{
				EnumSymbol = "m";
			}
			if (obj.value == UnitMultiplier::c)
			{
				EnumSymbol = "c";
			}
			if (obj.value == UnitMultiplier::d)
			{
				EnumSymbol = "d";
			}
			if (obj.value == UnitMultiplier::k)
			{
				EnumSymbol = "k";
			}
			if (obj.value == UnitMultiplier::M)
			{
				EnumSymbol = "M";
			}
			if (obj.value == UnitMultiplier::G)
			{
				EnumSymbol = "G";
			}
			if (obj.value == UnitMultiplier::T)
			{
				EnumSymbol = "T";
			}
			if (obj.value == UnitMultiplier::none)
			{
				EnumSymbol = "none";
			}

			if (!EnumSymbol.empty())
			{
				os << "UnitMultiplier." << EnumSymbol;
			}
		}
		return os;
	}
}
