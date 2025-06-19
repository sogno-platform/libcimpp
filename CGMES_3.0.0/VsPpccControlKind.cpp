/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsPpccControlKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VsPpccControlKind& VsPpccControlKind::operator=(VsPpccControlKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

VsPpccControlKind::operator VsPpccControlKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char VsPpccControlKind::debugName[] = "VsPpccControlKind";
const char* VsPpccControlKind::debugString() const
{
	return VsPpccControlKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, VsPpccControlKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "VsPpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "pPcc")
		{
			rop = VsPpccControlKind::pPcc;
			return lop;
		}
		if (EnumSymbol == "udc")
		{
			rop = VsPpccControlKind::udc;
			return lop;
		}
		if (EnumSymbol == "pPccAndUdcDroop")
		{
			rop = VsPpccControlKind::pPccAndUdcDroop;
			return lop;
		}
		if (EnumSymbol == "pPccAndUdcDroopWithCompensation")
		{
			rop = VsPpccControlKind::pPccAndUdcDroopWithCompensation;
			return lop;
		}
		if (EnumSymbol == "pPccAndUdcDroopPilot")
		{
			rop = VsPpccControlKind::pPccAndUdcDroopPilot;
			return lop;
		}
		if (EnumSymbol == "phasePcc")
		{
			rop = VsPpccControlKind::phasePcc;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const VsPpccControlKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == VsPpccControlKind::pPcc)
			{
				EnumSymbol = "pPcc";
			}
			if (obj.value == VsPpccControlKind::udc)
			{
				EnumSymbol = "udc";
			}
			if (obj.value == VsPpccControlKind::pPccAndUdcDroop)
			{
				EnumSymbol = "pPccAndUdcDroop";
			}
			if (obj.value == VsPpccControlKind::pPccAndUdcDroopWithCompensation)
			{
				EnumSymbol = "pPccAndUdcDroopWithCompensation";
			}
			if (obj.value == VsPpccControlKind::pPccAndUdcDroopPilot)
			{
				EnumSymbol = "pPccAndUdcDroopPilot";
			}
			if (obj.value == VsPpccControlKind::phasePcc)
			{
				EnumSymbol = "phasePcc";
			}

			if (!EnumSymbol.empty())
			{
				os << "VsPpccControlKind." << EnumSymbol;
			}
		}
		return os;
	}
}
