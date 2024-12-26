#include <sstream>
#include <iostream>
#include "RegulatingControlModeKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::RegulatingControlModeKind& rop)
	{
		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "RegulatingControlModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "voltage")
		{
			rop = RegulatingControlModeKind::voltage;
			return lop;
		}
		if(EnumSymbol == "activePower")
		{
			rop = RegulatingControlModeKind::activePower;
			return lop;
		}
		if(EnumSymbol == "reactivePower")
		{
			rop = RegulatingControlModeKind::reactivePower;
			return lop;
		}
		if(EnumSymbol == "currentFlow")
		{
			rop = RegulatingControlModeKind::currentFlow;
			return lop;
		}
		if(EnumSymbol == "admittance")
		{
			rop = RegulatingControlModeKind::admittance;
			return lop;
		}
		if(EnumSymbol == "timeScheduled")
		{
			rop = RegulatingControlModeKind::timeScheduled;
			return lop;
		}
		if(EnumSymbol == "temperature")
		{
			rop = RegulatingControlModeKind::temperature;
			return lop;
		}
		if(EnumSymbol == "powerFactor")
		{
			rop = RegulatingControlModeKind::powerFactor;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}
}
