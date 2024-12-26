/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ShortCircuitRotorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ShortCircuitRotorKind& ShortCircuitRotorKind::operator=(ShortCircuitRotorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ShortCircuitRotorKind::operator ShortCircuitRotorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ShortCircuitRotorKind::debugName[] = "ShortCircuitRotorKind";
const char* ShortCircuitRotorKind::debugString() const
{
	return ShortCircuitRotorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ShortCircuitRotorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ShortCircuitRotorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "salientPole1")
		{
			rop = ShortCircuitRotorKind::salientPole1;
			return lop;
		}
		if(EnumSymbol == "salientPole2")
		{
			rop = ShortCircuitRotorKind::salientPole2;
			return lop;
		}
		if(EnumSymbol == "turboSeries1")
		{
			rop = ShortCircuitRotorKind::turboSeries1;
			return lop;
		}
		if(EnumSymbol == "turboSeries2")
		{
			rop = ShortCircuitRotorKind::turboSeries2;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ShortCircuitRotorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ShortCircuitRotorKind::salientPole1)
			{
				EnumSymbol = "salientPole1";
			}
			if (obj.value == ShortCircuitRotorKind::salientPole2)
			{
				EnumSymbol = "salientPole2";
			}
			if (obj.value == ShortCircuitRotorKind::turboSeries1)
			{
				EnumSymbol = "turboSeries1";
			}
			if (obj.value == ShortCircuitRotorKind::turboSeries2)
			{
				EnumSymbol = "turboSeries2";
			}

			if (!EnumSymbol.empty())
			{
				os << "ShortCircuitRotorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
