/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LimitTypeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

LimitTypeKind& LimitTypeKind::operator=(LimitTypeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

LimitTypeKind::operator LimitTypeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char LimitTypeKind::debugName[] = "LimitTypeKind";
const char* LimitTypeKind::debugString() const
{
	return LimitTypeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, LimitTypeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "LimitTypeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "patl")
		{
			rop = LimitTypeKind::patl;
			return lop;
		}
		if(EnumSymbol == "patlt")
		{
			rop = LimitTypeKind::patlt;
			return lop;
		}
		if(EnumSymbol == "tatl")
		{
			rop = LimitTypeKind::tatl;
			return lop;
		}
		if(EnumSymbol == "tc")
		{
			rop = LimitTypeKind::tc;
			return lop;
		}
		if(EnumSymbol == "tct")
		{
			rop = LimitTypeKind::tct;
			return lop;
		}
		if(EnumSymbol == "highVoltage")
		{
			rop = LimitTypeKind::highVoltage;
			return lop;
		}
		if(EnumSymbol == "lowVoltage")
		{
			rop = LimitTypeKind::lowVoltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const LimitTypeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == LimitTypeKind::patl)
			{
				EnumSymbol = "patl";
			}
			if (obj.value == LimitTypeKind::patlt)
			{
				EnumSymbol = "patlt";
			}
			if (obj.value == LimitTypeKind::tatl)
			{
				EnumSymbol = "tatl";
			}
			if (obj.value == LimitTypeKind::tc)
			{
				EnumSymbol = "tc";
			}
			if (obj.value == LimitTypeKind::tct)
			{
				EnumSymbol = "tct";
			}
			if (obj.value == LimitTypeKind::highVoltage)
			{
				EnumSymbol = "highVoltage";
			}
			if (obj.value == LimitTypeKind::lowVoltage)
			{
				EnumSymbol = "lowVoltage";
			}

			if (!EnumSymbol.empty())
			{
				os << "LimitTypeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
