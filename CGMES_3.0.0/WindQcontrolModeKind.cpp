/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindQcontrolModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindQcontrolModeKind& WindQcontrolModeKind::operator=(WindQcontrolModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindQcontrolModeKind::operator WindQcontrolModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindQcontrolModeKind::debugName[] = "WindQcontrolModeKind";
const char* WindQcontrolModeKind::debugString() const
{
	return WindQcontrolModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindQcontrolModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "WindQcontrolModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "voltage")
		{
			rop = WindQcontrolModeKind::voltage;
			return lop;
		}
		if (EnumSymbol == "reactivePower")
		{
			rop = WindQcontrolModeKind::reactivePower;
			return lop;
		}
		if (EnumSymbol == "openLoopReactivePower")
		{
			rop = WindQcontrolModeKind::openLoopReactivePower;
			return lop;
		}
		if (EnumSymbol == "powerFactor")
		{
			rop = WindQcontrolModeKind::powerFactor;
			return lop;
		}
		if (EnumSymbol == "openLooppowerFactor")
		{
			rop = WindQcontrolModeKind::openLooppowerFactor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindQcontrolModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindQcontrolModeKind::voltage)
			{
				EnumSymbol = "voltage";
			}
			if (obj.value == WindQcontrolModeKind::reactivePower)
			{
				EnumSymbol = "reactivePower";
			}
			if (obj.value == WindQcontrolModeKind::openLoopReactivePower)
			{
				EnumSymbol = "openLoopReactivePower";
			}
			if (obj.value == WindQcontrolModeKind::powerFactor)
			{
				EnumSymbol = "powerFactor";
			}
			if (obj.value == WindQcontrolModeKind::openLooppowerFactor)
			{
				EnumSymbol = "openLooppowerFactor";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindQcontrolModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
