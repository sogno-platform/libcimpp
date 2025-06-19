/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroEnergyConversionKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

HydroEnergyConversionKind& HydroEnergyConversionKind::operator=(HydroEnergyConversionKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

HydroEnergyConversionKind::operator HydroEnergyConversionKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char HydroEnergyConversionKind::debugName[] = "HydroEnergyConversionKind";
const char* HydroEnergyConversionKind::debugString() const
{
	return HydroEnergyConversionKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, HydroEnergyConversionKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "HydroEnergyConversionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "generator")
		{
			rop = HydroEnergyConversionKind::generator;
			return lop;
		}
		if (EnumSymbol == "pumpAndGenerator")
		{
			rop = HydroEnergyConversionKind::pumpAndGenerator;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const HydroEnergyConversionKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == HydroEnergyConversionKind::generator)
			{
				EnumSymbol = "generator";
			}
			if (obj.value == HydroEnergyConversionKind::pumpAndGenerator)
			{
				EnumSymbol = "pumpAndGenerator";
			}

			if (!EnumSymbol.empty())
			{
				os << "HydroEnergyConversionKind." << EnumSymbol;
			}
		}
		return os;
	}
}
