/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RemoteSignalKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RemoteSignalKind& RemoteSignalKind::operator=(RemoteSignalKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RemoteSignalKind::operator RemoteSignalKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RemoteSignalKind::debugName[] = "RemoteSignalKind";
const char* RemoteSignalKind::debugString() const
{
	return RemoteSignalKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RemoteSignalKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "RemoteSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "remoteBusVoltageFrequency")
		{
			rop = RemoteSignalKind::remoteBusVoltageFrequency;
			return lop;
		}
		if (EnumSymbol == "remoteBusVoltageFrequencyDeviation")
		{
			rop = RemoteSignalKind::remoteBusVoltageFrequencyDeviation;
			return lop;
		}
		if (EnumSymbol == "remoteBusFrequency")
		{
			rop = RemoteSignalKind::remoteBusFrequency;
			return lop;
		}
		if (EnumSymbol == "remoteBusFrequencyDeviation")
		{
			rop = RemoteSignalKind::remoteBusFrequencyDeviation;
			return lop;
		}
		if (EnumSymbol == "remoteBusVoltageAmplitude")
		{
			rop = RemoteSignalKind::remoteBusVoltageAmplitude;
			return lop;
		}
		if (EnumSymbol == "remoteBusVoltage")
		{
			rop = RemoteSignalKind::remoteBusVoltage;
			return lop;
		}
		if (EnumSymbol == "remoteBranchCurrentAmplitude")
		{
			rop = RemoteSignalKind::remoteBranchCurrentAmplitude;
			return lop;
		}
		if (EnumSymbol == "remoteBusVoltageAmplitudeDerivative")
		{
			rop = RemoteSignalKind::remoteBusVoltageAmplitudeDerivative;
			return lop;
		}
		if (EnumSymbol == "remotePuBusVoltageDerivative")
		{
			rop = RemoteSignalKind::remotePuBusVoltageDerivative;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RemoteSignalKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == RemoteSignalKind::remoteBusVoltageFrequency)
			{
				EnumSymbol = "remoteBusVoltageFrequency";
			}
			if (obj.value == RemoteSignalKind::remoteBusVoltageFrequencyDeviation)
			{
				EnumSymbol = "remoteBusVoltageFrequencyDeviation";
			}
			if (obj.value == RemoteSignalKind::remoteBusFrequency)
			{
				EnumSymbol = "remoteBusFrequency";
			}
			if (obj.value == RemoteSignalKind::remoteBusFrequencyDeviation)
			{
				EnumSymbol = "remoteBusFrequencyDeviation";
			}
			if (obj.value == RemoteSignalKind::remoteBusVoltageAmplitude)
			{
				EnumSymbol = "remoteBusVoltageAmplitude";
			}
			if (obj.value == RemoteSignalKind::remoteBusVoltage)
			{
				EnumSymbol = "remoteBusVoltage";
			}
			if (obj.value == RemoteSignalKind::remoteBranchCurrentAmplitude)
			{
				EnumSymbol = "remoteBranchCurrentAmplitude";
			}
			if (obj.value == RemoteSignalKind::remoteBusVoltageAmplitudeDerivative)
			{
				EnumSymbol = "remoteBusVoltageAmplitudeDerivative";
			}
			if (obj.value == RemoteSignalKind::remotePuBusVoltageDerivative)
			{
				EnumSymbol = "remotePuBusVoltageDerivative";
			}

			if (!EnumSymbol.empty())
			{
				os << "RemoteSignalKind." << EnumSymbol;
			}
		}
		return os;
	}
}
