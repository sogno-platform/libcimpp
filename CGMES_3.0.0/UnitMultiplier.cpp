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

		if (EnumSymbol == "y")
		{
			rop = UnitMultiplier::y;
			return lop;
		}
		if (EnumSymbol == "z")
		{
			rop = UnitMultiplier::z;
			return lop;
		}
		if (EnumSymbol == "a")
		{
			rop = UnitMultiplier::a;
			return lop;
		}
		if (EnumSymbol == "f")
		{
			rop = UnitMultiplier::f;
			return lop;
		}
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
		if (EnumSymbol == "none")
		{
			rop = UnitMultiplier::none;
			return lop;
		}
		if (EnumSymbol == "da")
		{
			rop = UnitMultiplier::da;
			return lop;
		}
		if (EnumSymbol == "h")
		{
			rop = UnitMultiplier::h;
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
		if (EnumSymbol == "P")
		{
			rop = UnitMultiplier::P;
			return lop;
		}
		if (EnumSymbol == "E")
		{
			rop = UnitMultiplier::E;
			return lop;
		}
		if (EnumSymbol == "Z")
		{
			rop = UnitMultiplier::Z;
			return lop;
		}
		if (EnumSymbol == "Y")
		{
			rop = UnitMultiplier::Y;
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

			if (obj.value == UnitMultiplier::y)
			{
				EnumSymbol = "y";
			}
			if (obj.value == UnitMultiplier::z)
			{
				EnumSymbol = "z";
			}
			if (obj.value == UnitMultiplier::a)
			{
				EnumSymbol = "a";
			}
			if (obj.value == UnitMultiplier::f)
			{
				EnumSymbol = "f";
			}
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
			if (obj.value == UnitMultiplier::none)
			{
				EnumSymbol = "none";
			}
			if (obj.value == UnitMultiplier::da)
			{
				EnumSymbol = "da";
			}
			if (obj.value == UnitMultiplier::h)
			{
				EnumSymbol = "h";
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
			if (obj.value == UnitMultiplier::P)
			{
				EnumSymbol = "P";
			}
			if (obj.value == UnitMultiplier::E)
			{
				EnumSymbol = "E";
			}
			if (obj.value == UnitMultiplier::Z)
			{
				EnumSymbol = "Z";
			}
			if (obj.value == UnitMultiplier::Y)
			{
				EnumSymbol = "Y";
			}

			if (!EnumSymbol.empty())
			{
				os << "UnitMultiplier." << EnumSymbol;
			}
		}
		return os;
	}
}
