/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "InputSignalKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

InputSignalKind& InputSignalKind::operator=(InputSignalKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

InputSignalKind::operator InputSignalKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char InputSignalKind::debugName[] = "InputSignalKind";
const char* InputSignalKind::debugString() const
{
	return InputSignalKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, InputSignalKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "InputSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "rotorSpeed")
		{
			rop = InputSignalKind::rotorSpeed;
			return lop;
		}
		if (EnumSymbol == "rotorAngularFrequencyDeviation")
		{
			rop = InputSignalKind::rotorAngularFrequencyDeviation;
			return lop;
		}
		if (EnumSymbol == "busFrequency")
		{
			rop = InputSignalKind::busFrequency;
			return lop;
		}
		if (EnumSymbol == "busFrequencyDeviation")
		{
			rop = InputSignalKind::busFrequencyDeviation;
			return lop;
		}
		if (EnumSymbol == "generatorElectricalPower")
		{
			rop = InputSignalKind::generatorElectricalPower;
			return lop;
		}
		if (EnumSymbol == "generatorAcceleratingPower")
		{
			rop = InputSignalKind::generatorAcceleratingPower;
			return lop;
		}
		if (EnumSymbol == "busVoltage")
		{
			rop = InputSignalKind::busVoltage;
			return lop;
		}
		if (EnumSymbol == "busVoltageDerivative")
		{
			rop = InputSignalKind::busVoltageDerivative;
			return lop;
		}
		if (EnumSymbol == "branchCurrent")
		{
			rop = InputSignalKind::branchCurrent;
			return lop;
		}
		if (EnumSymbol == "fieldCurrent")
		{
			rop = InputSignalKind::fieldCurrent;
			return lop;
		}
		if (EnumSymbol == "generatorMechanicalPower")
		{
			rop = InputSignalKind::generatorMechanicalPower;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const InputSignalKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == InputSignalKind::rotorSpeed)
			{
				EnumSymbol = "rotorSpeed";
			}
			if (obj.value == InputSignalKind::rotorAngularFrequencyDeviation)
			{
				EnumSymbol = "rotorAngularFrequencyDeviation";
			}
			if (obj.value == InputSignalKind::busFrequency)
			{
				EnumSymbol = "busFrequency";
			}
			if (obj.value == InputSignalKind::busFrequencyDeviation)
			{
				EnumSymbol = "busFrequencyDeviation";
			}
			if (obj.value == InputSignalKind::generatorElectricalPower)
			{
				EnumSymbol = "generatorElectricalPower";
			}
			if (obj.value == InputSignalKind::generatorAcceleratingPower)
			{
				EnumSymbol = "generatorAcceleratingPower";
			}
			if (obj.value == InputSignalKind::busVoltage)
			{
				EnumSymbol = "busVoltage";
			}
			if (obj.value == InputSignalKind::busVoltageDerivative)
			{
				EnumSymbol = "busVoltageDerivative";
			}
			if (obj.value == InputSignalKind::branchCurrent)
			{
				EnumSymbol = "branchCurrent";
			}
			if (obj.value == InputSignalKind::fieldCurrent)
			{
				EnumSymbol = "fieldCurrent";
			}
			if (obj.value == InputSignalKind::generatorMechanicalPower)
			{
				EnumSymbol = "generatorMechanicalPower";
			}

			if (!EnumSymbol.empty())
			{
				os << "InputSignalKind." << EnumSymbol;
			}
		}
		return os;
	}
}
