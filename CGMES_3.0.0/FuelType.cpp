/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FuelType.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

FuelType& FuelType::operator=(FuelType_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

FuelType::operator FuelType_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char FuelType::debugName[] = "FuelType";
const char* FuelType::debugString() const
{
	return FuelType::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, FuelType& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "FuelType")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "coal")
		{
			rop = FuelType::coal;
			return lop;
		}
		if (EnumSymbol == "oil")
		{
			rop = FuelType::oil;
			return lop;
		}
		if (EnumSymbol == "gas")
		{
			rop = FuelType::gas;
			return lop;
		}
		if (EnumSymbol == "lignite")
		{
			rop = FuelType::lignite;
			return lop;
		}
		if (EnumSymbol == "hardCoal")
		{
			rop = FuelType::hardCoal;
			return lop;
		}
		if (EnumSymbol == "oilShale")
		{
			rop = FuelType::oilShale;
			return lop;
		}
		if (EnumSymbol == "brownCoalLignite")
		{
			rop = FuelType::brownCoalLignite;
			return lop;
		}
		if (EnumSymbol == "coalDerivedGas")
		{
			rop = FuelType::coalDerivedGas;
			return lop;
		}
		if (EnumSymbol == "peat")
		{
			rop = FuelType::peat;
			return lop;
		}
		if (EnumSymbol == "other")
		{
			rop = FuelType::other;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const FuelType& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == FuelType::coal)
			{
				EnumSymbol = "coal";
			}
			if (obj.value == FuelType::oil)
			{
				EnumSymbol = "oil";
			}
			if (obj.value == FuelType::gas)
			{
				EnumSymbol = "gas";
			}
			if (obj.value == FuelType::lignite)
			{
				EnumSymbol = "lignite";
			}
			if (obj.value == FuelType::hardCoal)
			{
				EnumSymbol = "hardCoal";
			}
			if (obj.value == FuelType::oilShale)
			{
				EnumSymbol = "oilShale";
			}
			if (obj.value == FuelType::brownCoalLignite)
			{
				EnumSymbol = "brownCoalLignite";
			}
			if (obj.value == FuelType::coalDerivedGas)
			{
				EnumSymbol = "coalDerivedGas";
			}
			if (obj.value == FuelType::peat)
			{
				EnumSymbol = "peat";
			}
			if (obj.value == FuelType::other)
			{
				EnumSymbol = "other";
			}

			if (!EnumSymbol.empty())
			{
				os << "FuelType." << EnumSymbol;
			}
		}
		return os;
	}
}
