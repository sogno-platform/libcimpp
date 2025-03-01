/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TransformerControlMode.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

TransformerControlMode& TransformerControlMode::operator=(TransformerControlMode_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

TransformerControlMode::operator TransformerControlMode_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char TransformerControlMode::debugName[] = "TransformerControlMode";
const char* TransformerControlMode::debugString() const
{
	return TransformerControlMode::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, TransformerControlMode& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "TransformerControlMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "volt")
		{
			rop = TransformerControlMode::volt;
			return lop;
		}
		if (EnumSymbol == "reactive")
		{
			rop = TransformerControlMode::reactive;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const TransformerControlMode& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == TransformerControlMode::volt)
			{
				EnumSymbol = "volt";
			}
			if (obj.value == TransformerControlMode::reactive)
			{
				EnumSymbol = "reactive";
			}

			if (!EnumSymbol.empty())
			{
				os << "TransformerControlMode." << EnumSymbol;
			}
		}
		return os;
	}
}
