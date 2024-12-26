#include <sstream>
#include <iostream>
#include "InputSignalKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::InputSignalKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "InputSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "rotorSpeed")
		{
			rop = InputSignalKind::rotorSpeed;
			return lop;
		}
		if(EnumSymbol == "rotorAngularFrequencyDeviation")
		{
			rop = InputSignalKind::rotorAngularFrequencyDeviation;
			return lop;
		}
		if(EnumSymbol == "busFrequency")
		{
			rop = InputSignalKind::busFrequency;
			return lop;
		}
		if(EnumSymbol == "busFrequencyDeviation")
		{
			rop = InputSignalKind::busFrequencyDeviation;
			return lop;
		}
		if(EnumSymbol == "generatorElectricalPower")
		{
			rop = InputSignalKind::generatorElectricalPower;
			return lop;
		}
		if(EnumSymbol == "generatorAcceleratingPower")
		{
			rop = InputSignalKind::generatorAcceleratingPower;
			return lop;
		}
		if(EnumSymbol == "busVoltage")
		{
			rop = InputSignalKind::busVoltage;
			return lop;
		}
		if(EnumSymbol == "busVoltageDerivative")
		{
			rop = InputSignalKind::busVoltageDerivative;
			return lop;
		}
		if(EnumSymbol == "branchCurrent")
		{
			rop = InputSignalKind::branchCurrent;
			return lop;
		}
		if(EnumSymbol == "fieldCurrent")
		{
			rop = InputSignalKind::fieldCurrent;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
