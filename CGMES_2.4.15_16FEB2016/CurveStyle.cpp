/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurveStyle.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CurveStyle& CurveStyle::operator=(CurveStyle_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

CurveStyle::operator CurveStyle_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char CurveStyle::debugName[] = "CurveStyle";
const char* CurveStyle::debugString() const
{
	return CurveStyle::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, CurveStyle& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "CurveStyle")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "constantYValue")
		{
			rop = CurveStyle::constantYValue;
			return lop;
		}
		if(EnumSymbol == "straightLineYValues")
		{
			rop = CurveStyle::straightLineYValues;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const CurveStyle& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == CurveStyle::constantYValue)
			{
				EnumSymbol = "constantYValue";
			}
			if (obj.value == CurveStyle::straightLineYValues)
			{
				EnumSymbol = "straightLineYValues";
			}

			if (!EnumSymbol.empty())
			{
				os << "CurveStyle." << EnumSymbol;
			}
		}
		return os;
	}
}
