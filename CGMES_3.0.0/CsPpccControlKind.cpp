/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CsPpccControlKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CsPpccControlKind& CsPpccControlKind::operator=(CsPpccControlKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

CsPpccControlKind::operator CsPpccControlKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char CsPpccControlKind::debugName[] = "CsPpccControlKind";
const char* CsPpccControlKind::debugString() const
{
	return CsPpccControlKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, CsPpccControlKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CsPpccControlKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "activePower")
		{
			rop = CsPpccControlKind::activePower;
			return lop;
		}
		if(EnumSymbol == "dcVoltage")
		{
			rop = CsPpccControlKind::dcVoltage;
			return lop;
		}
		if(EnumSymbol == "dcCurrent")
		{
			rop = CsPpccControlKind::dcCurrent;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const CsPpccControlKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == CsPpccControlKind::activePower)
			{
				EnumSymbol = "activePower";
			}
			if (obj.value == CsPpccControlKind::dcVoltage)
			{
				EnumSymbol = "dcVoltage";
			}
			if (obj.value == CsPpccControlKind::dcCurrent)
			{
				EnumSymbol = "dcCurrent";
			}

			if (!EnumSymbol.empty())
			{
				os << "CsPpccControlKind." << EnumSymbol;
			}
		}
		return os;
	}
}
