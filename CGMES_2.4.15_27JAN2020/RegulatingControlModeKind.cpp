/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulatingControlModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RegulatingControlModeKind& RegulatingControlModeKind::operator=(RegulatingControlModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RegulatingControlModeKind::operator RegulatingControlModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RegulatingControlModeKind::debugName[] = "RegulatingControlModeKind";
const char* RegulatingControlModeKind::debugString() const
{
	return RegulatingControlModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RegulatingControlModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "RegulatingControlModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "voltage")
		{
			rop = RegulatingControlModeKind::voltage;
			return lop;
		}
		if(EnumSymbol == "activePower")
		{
			rop = RegulatingControlModeKind::activePower;
			return lop;
		}
		if(EnumSymbol == "reactivePower")
		{
			rop = RegulatingControlModeKind::reactivePower;
			return lop;
		}
		if(EnumSymbol == "currentFlow")
		{
			rop = RegulatingControlModeKind::currentFlow;
			return lop;
		}
		if(EnumSymbol == "admittance")
		{
			rop = RegulatingControlModeKind::admittance;
			return lop;
		}
		if(EnumSymbol == "timeScheduled")
		{
			rop = RegulatingControlModeKind::timeScheduled;
			return lop;
		}
		if(EnumSymbol == "temperature")
		{
			rop = RegulatingControlModeKind::temperature;
			return lop;
		}
		if(EnumSymbol == "powerFactor")
		{
			rop = RegulatingControlModeKind::powerFactor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RegulatingControlModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == RegulatingControlModeKind::voltage)
			{
				EnumSymbol = "voltage";
			}
			if (obj.value == RegulatingControlModeKind::activePower)
			{
				EnumSymbol = "activePower";
			}
			if (obj.value == RegulatingControlModeKind::reactivePower)
			{
				EnumSymbol = "reactivePower";
			}
			if (obj.value == RegulatingControlModeKind::currentFlow)
			{
				EnumSymbol = "currentFlow";
			}
			if (obj.value == RegulatingControlModeKind::admittance)
			{
				EnumSymbol = "admittance";
			}
			if (obj.value == RegulatingControlModeKind::timeScheduled)
			{
				EnumSymbol = "timeScheduled";
			}
			if (obj.value == RegulatingControlModeKind::temperature)
			{
				EnumSymbol = "temperature";
			}
			if (obj.value == RegulatingControlModeKind::powerFactor)
			{
				EnumSymbol = "powerFactor";
			}

			if (!EnumSymbol.empty())
			{
				os << "RegulatingControlModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
