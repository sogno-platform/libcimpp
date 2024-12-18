/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlAreaTypeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ControlAreaTypeKind& ControlAreaTypeKind::operator=(ControlAreaTypeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ControlAreaTypeKind::operator ControlAreaTypeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ControlAreaTypeKind::debugName[] = "ControlAreaTypeKind";
const char* ControlAreaTypeKind::debugString() const
{
	return ControlAreaTypeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ControlAreaTypeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ControlAreaTypeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "AGC")
		{
			rop = ControlAreaTypeKind::AGC;
			return lop;
		}
		if(EnumSymbol == "Forecast")
		{
			rop = ControlAreaTypeKind::Forecast;
			return lop;
		}
		if(EnumSymbol == "Interchange")
		{
			rop = ControlAreaTypeKind::Interchange;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ControlAreaTypeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ControlAreaTypeKind::AGC)
			{
				EnumSymbol = "AGC";
			}
			if (obj.value == ControlAreaTypeKind::Forecast)
			{
				EnumSymbol = "Forecast";
			}
			if (obj.value == ControlAreaTypeKind::Interchange)
			{
				EnumSymbol = "Interchange";
			}

			if (!EnumSymbol.empty())
			{
				os << "ControlAreaTypeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
