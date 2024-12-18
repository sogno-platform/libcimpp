/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro4ModelKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

GovHydro4ModelKind& GovHydro4ModelKind::operator=(GovHydro4ModelKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

GovHydro4ModelKind::operator GovHydro4ModelKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char GovHydro4ModelKind::debugName[] = "GovHydro4ModelKind";
const char* GovHydro4ModelKind::debugString() const
{
	return GovHydro4ModelKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, GovHydro4ModelKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "GovHydro4ModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "simple")
		{
			rop = GovHydro4ModelKind::simple;
			return lop;
		}
		if(EnumSymbol == "francisPelton")
		{
			rop = GovHydro4ModelKind::francisPelton;
			return lop;
		}
		if(EnumSymbol == "kaplan")
		{
			rop = GovHydro4ModelKind::kaplan;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const GovHydro4ModelKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == GovHydro4ModelKind::simple)
			{
				EnumSymbol = "simple";
			}
			if (obj.value == GovHydro4ModelKind::francisPelton)
			{
				EnumSymbol = "francisPelton";
			}
			if (obj.value == GovHydro4ModelKind::kaplan)
			{
				EnumSymbol = "kaplan";
			}

			if (!EnumSymbol.empty())
			{
				os << "GovHydro4ModelKind." << EnumSymbol;
			}
		}
		return os;
	}
}
