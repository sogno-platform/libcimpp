/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindQcontrolModesKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindQcontrolModesKind& WindQcontrolModesKind::operator=(WindQcontrolModesKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindQcontrolModesKind::operator WindQcontrolModesKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindQcontrolModesKind::debugName[] = "WindQcontrolModesKind";
const char* WindQcontrolModesKind::debugString() const
{
	return WindQcontrolModesKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindQcontrolModesKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "WindQcontrolModesKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "voltage")
		{
			rop = WindQcontrolModesKind::voltage;
			return lop;
		}
		if (EnumSymbol == "reactivePower")
		{
			rop = WindQcontrolModesKind::reactivePower;
			return lop;
		}
		if (EnumSymbol == "openLoopReactivePower")
		{
			rop = WindQcontrolModesKind::openLoopReactivePower;
			return lop;
		}
		if (EnumSymbol == "powerFactor")
		{
			rop = WindQcontrolModesKind::powerFactor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindQcontrolModesKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindQcontrolModesKind::voltage)
			{
				EnumSymbol = "voltage";
			}
			if (obj.value == WindQcontrolModesKind::reactivePower)
			{
				EnumSymbol = "reactivePower";
			}
			if (obj.value == WindQcontrolModesKind::openLoopReactivePower)
			{
				EnumSymbol = "openLoopReactivePower";
			}
			if (obj.value == WindQcontrolModesKind::powerFactor)
			{
				EnumSymbol = "powerFactor";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindQcontrolModesKind." << EnumSymbol;
			}
		}
		return os;
	}
}
