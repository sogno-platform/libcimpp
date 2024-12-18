/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCPolarityKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

DCPolarityKind& DCPolarityKind::operator=(DCPolarityKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

DCPolarityKind::operator DCPolarityKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char DCPolarityKind::debugName[] = "DCPolarityKind";
const char* DCPolarityKind::debugString() const
{
	return DCPolarityKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, DCPolarityKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DCPolarityKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "positive")
		{
			rop = DCPolarityKind::positive;
			return lop;
		}
		if(EnumSymbol == "middle")
		{
			rop = DCPolarityKind::middle;
			return lop;
		}
		if(EnumSymbol == "negative")
		{
			rop = DCPolarityKind::negative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const DCPolarityKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == DCPolarityKind::positive)
			{
				EnumSymbol = "positive";
			}
			if (obj.value == DCPolarityKind::middle)
			{
				EnumSymbol = "middle";
			}
			if (obj.value == DCPolarityKind::negative)
			{
				EnumSymbol = "negative";
			}

			if (!EnumSymbol.empty())
			{
				os << "DCPolarityKind." << EnumSymbol;
			}
		}
		return os;
	}
}
