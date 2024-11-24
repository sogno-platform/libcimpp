/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BatteryStateKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

BatteryStateKind& BatteryStateKind::operator=(BatteryStateKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

BatteryStateKind::operator BatteryStateKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char BatteryStateKind::debugName[] = "BatteryStateKind";
const char* BatteryStateKind::debugString() const
{
	return BatteryStateKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, BatteryStateKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "BatteryStateKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "discharging")
		{
			rop = BatteryStateKind::discharging;
			return lop;
		}
		if(EnumSymbol == "full")
		{
			rop = BatteryStateKind::full;
			return lop;
		}
		if(EnumSymbol == "waiting")
		{
			rop = BatteryStateKind::waiting;
			return lop;
		}
		if(EnumSymbol == "charging")
		{
			rop = BatteryStateKind::charging;
			return lop;
		}
		if(EnumSymbol == "empty")
		{
			rop = BatteryStateKind::empty;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const BatteryStateKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == BatteryStateKind::discharging)
			{
				EnumSymbol = "discharging";
			}
			if (obj.value == BatteryStateKind::full)
			{
				EnumSymbol = "full";
			}
			if (obj.value == BatteryStateKind::waiting)
			{
				EnumSymbol = "waiting";
			}
			if (obj.value == BatteryStateKind::charging)
			{
				EnumSymbol = "charging";
			}
			if (obj.value == BatteryStateKind::empty)
			{
				EnumSymbol = "empty";
			}

			if (!EnumSymbol.empty())
			{
				os << "BatteryStateKind." << EnumSymbol;
			}
		}
		return os;
	}
}
