/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LimitKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

LimitKind& LimitKind::operator=(LimitKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

LimitKind::operator LimitKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char LimitKind::debugName[] = "LimitKind";
const char* LimitKind::debugString() const
{
	return LimitKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, LimitKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "LimitKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "patl")
		{
			rop = LimitKind::patl;
			return lop;
		}
		if (EnumSymbol == "patlt")
		{
			rop = LimitKind::patlt;
			return lop;
		}
		if (EnumSymbol == "tatl")
		{
			rop = LimitKind::tatl;
			return lop;
		}
		if (EnumSymbol == "tc")
		{
			rop = LimitKind::tc;
			return lop;
		}
		if (EnumSymbol == "tct")
		{
			rop = LimitKind::tct;
			return lop;
		}
		if (EnumSymbol == "highVoltage")
		{
			rop = LimitKind::highVoltage;
			return lop;
		}
		if (EnumSymbol == "lowVoltage")
		{
			rop = LimitKind::lowVoltage;
			return lop;
		}
		if (EnumSymbol == "operationalVoltageLimit")
		{
			rop = LimitKind::operationalVoltageLimit;
			return lop;
		}
		if (EnumSymbol == "alarmVoltage")
		{
			rop = LimitKind::alarmVoltage;
			return lop;
		}
		if (EnumSymbol == "warningVoltage")
		{
			rop = LimitKind::warningVoltage;
			return lop;
		}
		if (EnumSymbol == "stability")
		{
			rop = LimitKind::stability;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const LimitKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == LimitKind::patl)
			{
				EnumSymbol = "patl";
			}
			if (obj.value == LimitKind::patlt)
			{
				EnumSymbol = "patlt";
			}
			if (obj.value == LimitKind::tatl)
			{
				EnumSymbol = "tatl";
			}
			if (obj.value == LimitKind::tc)
			{
				EnumSymbol = "tc";
			}
			if (obj.value == LimitKind::tct)
			{
				EnumSymbol = "tct";
			}
			if (obj.value == LimitKind::highVoltage)
			{
				EnumSymbol = "highVoltage";
			}
			if (obj.value == LimitKind::lowVoltage)
			{
				EnumSymbol = "lowVoltage";
			}
			if (obj.value == LimitKind::operationalVoltageLimit)
			{
				EnumSymbol = "operationalVoltageLimit";
			}
			if (obj.value == LimitKind::alarmVoltage)
			{
				EnumSymbol = "alarmVoltage";
			}
			if (obj.value == LimitKind::warningVoltage)
			{
				EnumSymbol = "warningVoltage";
			}
			if (obj.value == LimitKind::stability)
			{
				EnumSymbol = "stability";
			}

			if (!EnumSymbol.empty())
			{
				os << "LimitKind." << EnumSymbol;
			}
		}
		return os;
	}
}
