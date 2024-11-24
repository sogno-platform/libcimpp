/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantQcontrolModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindPlantQcontrolModeKind& WindPlantQcontrolModeKind::operator=(WindPlantQcontrolModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindPlantQcontrolModeKind::operator WindPlantQcontrolModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindPlantQcontrolModeKind::debugName[] = "WindPlantQcontrolModeKind";
const char* WindPlantQcontrolModeKind::debugString() const
{
	return WindPlantQcontrolModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindPlantQcontrolModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindPlantQcontrolModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "reactivePower")
		{
			rop = WindPlantQcontrolModeKind::reactivePower;
			return lop;
		}
		if(EnumSymbol == "powerFactor")
		{
			rop = WindPlantQcontrolModeKind::powerFactor;
			return lop;
		}
		if(EnumSymbol == "uqStatic")
		{
			rop = WindPlantQcontrolModeKind::uqStatic;
			return lop;
		}
		if(EnumSymbol == "voltageControl")
		{
			rop = WindPlantQcontrolModeKind::voltageControl;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindPlantQcontrolModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindPlantQcontrolModeKind::reactivePower)
			{
				EnumSymbol = "reactivePower";
			}
			if (obj.value == WindPlantQcontrolModeKind::powerFactor)
			{
				EnumSymbol = "powerFactor";
			}
			if (obj.value == WindPlantQcontrolModeKind::uqStatic)
			{
				EnumSymbol = "uqStatic";
			}
			if (obj.value == WindPlantQcontrolModeKind::voltageControl)
			{
				EnumSymbol = "voltageControl";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindPlantQcontrolModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
