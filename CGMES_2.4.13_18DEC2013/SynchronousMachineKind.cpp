/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

SynchronousMachineKind& SynchronousMachineKind::operator=(SynchronousMachineKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

SynchronousMachineKind::operator SynchronousMachineKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char SynchronousMachineKind::debugName[] = "SynchronousMachineKind";
const char* SynchronousMachineKind::debugString() const
{
	return SynchronousMachineKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, SynchronousMachineKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "SynchronousMachineKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "generator")
		{
			rop = SynchronousMachineKind::generator;
			return lop;
		}
		if (EnumSymbol == "condenser")
		{
			rop = SynchronousMachineKind::condenser;
			return lop;
		}
		if (EnumSymbol == "generatorOrCondenser")
		{
			rop = SynchronousMachineKind::generatorOrCondenser;
			return lop;
		}
		if (EnumSymbol == "motor")
		{
			rop = SynchronousMachineKind::motor;
			return lop;
		}
		if (EnumSymbol == "generatorOrMotor")
		{
			rop = SynchronousMachineKind::generatorOrMotor;
			return lop;
		}
		if (EnumSymbol == "motorOrCondenser")
		{
			rop = SynchronousMachineKind::motorOrCondenser;
			return lop;
		}
		if (EnumSymbol == "generatorOrCondenserOrMotor")
		{
			rop = SynchronousMachineKind::generatorOrCondenserOrMotor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const SynchronousMachineKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == SynchronousMachineKind::generator)
			{
				EnumSymbol = "generator";
			}
			if (obj.value == SynchronousMachineKind::condenser)
			{
				EnumSymbol = "condenser";
			}
			if (obj.value == SynchronousMachineKind::generatorOrCondenser)
			{
				EnumSymbol = "generatorOrCondenser";
			}
			if (obj.value == SynchronousMachineKind::motor)
			{
				EnumSymbol = "motor";
			}
			if (obj.value == SynchronousMachineKind::generatorOrMotor)
			{
				EnumSymbol = "generatorOrMotor";
			}
			if (obj.value == SynchronousMachineKind::motorOrCondenser)
			{
				EnumSymbol = "motorOrCondenser";
			}
			if (obj.value == SynchronousMachineKind::generatorOrCondenserOrMotor)
			{
				EnumSymbol = "generatorOrCondenserOrMotor";
			}

			if (!EnumSymbol.empty())
			{
				os << "SynchronousMachineKind." << EnumSymbol;
			}
		}
		return os;
	}
}
