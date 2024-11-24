/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCConverterOperatingModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

DCConverterOperatingModeKind& DCConverterOperatingModeKind::operator=(DCConverterOperatingModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

DCConverterOperatingModeKind::operator DCConverterOperatingModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char DCConverterOperatingModeKind::debugName[] = "DCConverterOperatingModeKind";
const char* DCConverterOperatingModeKind::debugString() const
{
	return DCConverterOperatingModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, DCConverterOperatingModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DCConverterOperatingModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "bipolar")
		{
			rop = DCConverterOperatingModeKind::bipolar;
			return lop;
		}
		if(EnumSymbol == "monopolarMetallicReturn")
		{
			rop = DCConverterOperatingModeKind::monopolarMetallicReturn;
			return lop;
		}
		if(EnumSymbol == "monopolarGroundReturn")
		{
			rop = DCConverterOperatingModeKind::monopolarGroundReturn;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const DCConverterOperatingModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == DCConverterOperatingModeKind::bipolar)
			{
				EnumSymbol = "bipolar";
			}
			if (obj.value == DCConverterOperatingModeKind::monopolarMetallicReturn)
			{
				EnumSymbol = "monopolarMetallicReturn";
			}
			if (obj.value == DCConverterOperatingModeKind::monopolarGroundReturn)
			{
				EnumSymbol = "monopolarGroundReturn";
			}

			if (!EnumSymbol.empty())
			{
				os << "DCConverterOperatingModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
