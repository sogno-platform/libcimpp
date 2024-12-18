/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineOperatingMode.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

SynchronousMachineOperatingMode& SynchronousMachineOperatingMode::operator=(SynchronousMachineOperatingMode_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

SynchronousMachineOperatingMode::operator SynchronousMachineOperatingMode_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char SynchronousMachineOperatingMode::debugName[] = "SynchronousMachineOperatingMode";
const char* SynchronousMachineOperatingMode::debugString() const
{
	return SynchronousMachineOperatingMode::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, SynchronousMachineOperatingMode& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SynchronousMachineOperatingMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "generator")
		{
			rop = SynchronousMachineOperatingMode::generator;
			return lop;
		}
		if(EnumSymbol == "condenser")
		{
			rop = SynchronousMachineOperatingMode::condenser;
			return lop;
		}
		if(EnumSymbol == "motor")
		{
			rop = SynchronousMachineOperatingMode::motor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const SynchronousMachineOperatingMode& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == SynchronousMachineOperatingMode::generator)
			{
				EnumSymbol = "generator";
			}
			if (obj.value == SynchronousMachineOperatingMode::condenser)
			{
				EnumSymbol = "condenser";
			}
			if (obj.value == SynchronousMachineOperatingMode::motor)
			{
				EnumSymbol = "motor";
			}

			if (!EnumSymbol.empty())
			{
				os << "SynchronousMachineOperatingMode." << EnumSymbol;
			}
		}
		return os;
	}
}
