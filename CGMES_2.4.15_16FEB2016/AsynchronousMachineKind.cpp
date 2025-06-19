/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AsynchronousMachineKind& AsynchronousMachineKind::operator=(AsynchronousMachineKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

AsynchronousMachineKind::operator AsynchronousMachineKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char AsynchronousMachineKind::debugName[] = "AsynchronousMachineKind";
const char* AsynchronousMachineKind::debugString() const
{
	return AsynchronousMachineKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, AsynchronousMachineKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "AsynchronousMachineKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "generator")
		{
			rop = AsynchronousMachineKind::generator;
			return lop;
		}
		if (EnumSymbol == "motor")
		{
			rop = AsynchronousMachineKind::motor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const AsynchronousMachineKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == AsynchronousMachineKind::generator)
			{
				EnumSymbol = "generator";
			}
			if (obj.value == AsynchronousMachineKind::motor)
			{
				EnumSymbol = "motor";
			}

			if (!EnumSymbol.empty())
			{
				os << "AsynchronousMachineKind." << EnumSymbol;
			}
		}
		return os;
	}
}
