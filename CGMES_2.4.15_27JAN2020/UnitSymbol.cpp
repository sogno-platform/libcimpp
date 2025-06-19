/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnitSymbol.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

UnitSymbol& UnitSymbol::operator=(UnitSymbol_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

UnitSymbol::operator UnitSymbol_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char UnitSymbol::debugName[] = "UnitSymbol";
const char* UnitSymbol::debugString() const
{
	return UnitSymbol::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, UnitSymbol& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "UnitSymbol")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "VA")
		{
			rop = UnitSymbol::VA;
			return lop;
		}
		if (EnumSymbol == "W")
		{
			rop = UnitSymbol::W;
			return lop;
		}
		if (EnumSymbol == "VAr")
		{
			rop = UnitSymbol::VAr;
			return lop;
		}
		if (EnumSymbol == "VAh")
		{
			rop = UnitSymbol::VAh;
			return lop;
		}
		if (EnumSymbol == "Wh")
		{
			rop = UnitSymbol::Wh;
			return lop;
		}
		if (EnumSymbol == "VArh")
		{
			rop = UnitSymbol::VArh;
			return lop;
		}
		if (EnumSymbol == "V")
		{
			rop = UnitSymbol::V;
			return lop;
		}
		if (EnumSymbol == "ohm")
		{
			rop = UnitSymbol::ohm;
			return lop;
		}
		if (EnumSymbol == "A")
		{
			rop = UnitSymbol::A;
			return lop;
		}
		if (EnumSymbol == "F")
		{
			rop = UnitSymbol::F;
			return lop;
		}
		if (EnumSymbol == "H")
		{
			rop = UnitSymbol::H;
			return lop;
		}
		if (EnumSymbol == "degC")
		{
			rop = UnitSymbol::degC;
			return lop;
		}
		if (EnumSymbol == "s")
		{
			rop = UnitSymbol::s;
			return lop;
		}
		if (EnumSymbol == "min")
		{
			rop = UnitSymbol::min;
			return lop;
		}
		if (EnumSymbol == "h")
		{
			rop = UnitSymbol::h;
			return lop;
		}
		if (EnumSymbol == "deg")
		{
			rop = UnitSymbol::deg;
			return lop;
		}
		if (EnumSymbol == "rad")
		{
			rop = UnitSymbol::rad;
			return lop;
		}
		if (EnumSymbol == "J")
		{
			rop = UnitSymbol::J;
			return lop;
		}
		if (EnumSymbol == "N")
		{
			rop = UnitSymbol::N;
			return lop;
		}
		if (EnumSymbol == "S")
		{
			rop = UnitSymbol::S;
			return lop;
		}
		if (EnumSymbol == "none")
		{
			rop = UnitSymbol::none;
			return lop;
		}
		if (EnumSymbol == "Hz")
		{
			rop = UnitSymbol::Hz;
			return lop;
		}
		if (EnumSymbol == "g")
		{
			rop = UnitSymbol::g;
			return lop;
		}
		if (EnumSymbol == "Pa")
		{
			rop = UnitSymbol::Pa;
			return lop;
		}
		if (EnumSymbol == "m")
		{
			rop = UnitSymbol::m;
			return lop;
		}
		if (EnumSymbol == "m2")
		{
			rop = UnitSymbol::m2;
			return lop;
		}
		if (EnumSymbol == "m3")
		{
			rop = UnitSymbol::m3;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const UnitSymbol& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == UnitSymbol::VA)
			{
				EnumSymbol = "VA";
			}
			if (obj.value == UnitSymbol::W)
			{
				EnumSymbol = "W";
			}
			if (obj.value == UnitSymbol::VAr)
			{
				EnumSymbol = "VAr";
			}
			if (obj.value == UnitSymbol::VAh)
			{
				EnumSymbol = "VAh";
			}
			if (obj.value == UnitSymbol::Wh)
			{
				EnumSymbol = "Wh";
			}
			if (obj.value == UnitSymbol::VArh)
			{
				EnumSymbol = "VArh";
			}
			if (obj.value == UnitSymbol::V)
			{
				EnumSymbol = "V";
			}
			if (obj.value == UnitSymbol::ohm)
			{
				EnumSymbol = "ohm";
			}
			if (obj.value == UnitSymbol::A)
			{
				EnumSymbol = "A";
			}
			if (obj.value == UnitSymbol::F)
			{
				EnumSymbol = "F";
			}
			if (obj.value == UnitSymbol::H)
			{
				EnumSymbol = "H";
			}
			if (obj.value == UnitSymbol::degC)
			{
				EnumSymbol = "degC";
			}
			if (obj.value == UnitSymbol::s)
			{
				EnumSymbol = "s";
			}
			if (obj.value == UnitSymbol::min)
			{
				EnumSymbol = "min";
			}
			if (obj.value == UnitSymbol::h)
			{
				EnumSymbol = "h";
			}
			if (obj.value == UnitSymbol::deg)
			{
				EnumSymbol = "deg";
			}
			if (obj.value == UnitSymbol::rad)
			{
				EnumSymbol = "rad";
			}
			if (obj.value == UnitSymbol::J)
			{
				EnumSymbol = "J";
			}
			if (obj.value == UnitSymbol::N)
			{
				EnumSymbol = "N";
			}
			if (obj.value == UnitSymbol::S)
			{
				EnumSymbol = "S";
			}
			if (obj.value == UnitSymbol::none)
			{
				EnumSymbol = "none";
			}
			if (obj.value == UnitSymbol::Hz)
			{
				EnumSymbol = "Hz";
			}
			if (obj.value == UnitSymbol::g)
			{
				EnumSymbol = "g";
			}
			if (obj.value == UnitSymbol::Pa)
			{
				EnumSymbol = "Pa";
			}
			if (obj.value == UnitSymbol::m)
			{
				EnumSymbol = "m";
			}
			if (obj.value == UnitSymbol::m2)
			{
				EnumSymbol = "m2";
			}
			if (obj.value == UnitSymbol::m3)
			{
				EnumSymbol = "m3";
			}

			if (!EnumSymbol.empty())
			{
				os << "UnitSymbol." << EnumSymbol;
			}
		}
		return os;
	}
}
