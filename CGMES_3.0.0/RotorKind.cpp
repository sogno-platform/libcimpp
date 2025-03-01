/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RotorKind& RotorKind::operator=(RotorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RotorKind::operator RotorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RotorKind::debugName[] = "RotorKind";
const char* RotorKind::debugString() const
{
	return RotorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RotorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "RotorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "roundRotor")
		{
			rop = RotorKind::roundRotor;
			return lop;
		}
		if (EnumSymbol == "salientPole")
		{
			rop = RotorKind::salientPole;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RotorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == RotorKind::roundRotor)
			{
				EnumSymbol = "roundRotor";
			}
			if (obj.value == RotorKind::salientPole)
			{
				EnumSymbol = "salientPole";
			}

			if (!EnumSymbol.empty())
			{
				os << "RotorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
