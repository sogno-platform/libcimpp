/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsQpccControlKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VsQpccControlKind& VsQpccControlKind::operator=(VsQpccControlKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

VsQpccControlKind::operator VsQpccControlKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char VsQpccControlKind::debugName[] = "VsQpccControlKind";
const char* VsQpccControlKind::debugString() const
{
	return VsQpccControlKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, VsQpccControlKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "VsQpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "reactivePcc")
		{
			rop = VsQpccControlKind::reactivePcc;
			return lop;
		}
		if (EnumSymbol == "voltagePcc")
		{
			rop = VsQpccControlKind::voltagePcc;
			return lop;
		}
		if (EnumSymbol == "powerFactorPcc")
		{
			rop = VsQpccControlKind::powerFactorPcc;
			return lop;
		}
		if (EnumSymbol == "pulseWidthModulation")
		{
			rop = VsQpccControlKind::pulseWidthModulation;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const VsQpccControlKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == VsQpccControlKind::reactivePcc)
			{
				EnumSymbol = "reactivePcc";
			}
			if (obj.value == VsQpccControlKind::voltagePcc)
			{
				EnumSymbol = "voltagePcc";
			}
			if (obj.value == VsQpccControlKind::powerFactorPcc)
			{
				EnumSymbol = "powerFactorPcc";
			}
			if (obj.value == VsQpccControlKind::pulseWidthModulation)
			{
				EnumSymbol = "pulseWidthModulation";
			}

			if (!EnumSymbol.empty())
			{
				os << "VsQpccControlKind." << EnumSymbol;
			}
		}
		return os;
	}
}
