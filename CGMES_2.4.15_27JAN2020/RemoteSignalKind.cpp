#include <sstream>
#include <iostream>
#include "RemoteSignalKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::RemoteSignalKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "RemoteSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "remoteBusVoltageFrequency")
		{
			rop = RemoteSignalKind::remoteBusVoltageFrequency;
			return lop;
		}
		if(EnumSymbol == "remoteBusVoltageFrequencyDeviation")
		{
			rop = RemoteSignalKind::remoteBusVoltageFrequencyDeviation;
			return lop;
		}
		if(EnumSymbol == "remoteBusFrequency")
		{
			rop = RemoteSignalKind::remoteBusFrequency;
			return lop;
		}
		if(EnumSymbol == "remoteBusFrequencyDeviation")
		{
			rop = RemoteSignalKind::remoteBusFrequencyDeviation;
			return lop;
		}
		if(EnumSymbol == "remoteBusVoltageAmplitude")
		{
			rop = RemoteSignalKind::remoteBusVoltageAmplitude;
			return lop;
		}
		if(EnumSymbol == "remoteBusVoltage")
		{
			rop = RemoteSignalKind::remoteBusVoltage;
			return lop;
		}
		if(EnumSymbol == "remoteBranchCurrentAmplitude")
		{
			rop = RemoteSignalKind::remoteBranchCurrentAmplitude;
			return lop;
		}
		if(EnumSymbol == "remoteBusVoltageAmplitudeDerivative")
		{
			rop = RemoteSignalKind::remoteBusVoltageAmplitudeDerivative;
			return lop;
		}
		if(EnumSymbol == "remotePuBusVoltageDerivative")
		{
			rop = RemoteSignalKind::remotePuBusVoltageDerivative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}

