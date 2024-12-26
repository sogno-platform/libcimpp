/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DroopSignalFeedbackKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

DroopSignalFeedbackKind& DroopSignalFeedbackKind::operator=(DroopSignalFeedbackKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

DroopSignalFeedbackKind::operator DroopSignalFeedbackKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char DroopSignalFeedbackKind::debugName[] = "DroopSignalFeedbackKind";
const char* DroopSignalFeedbackKind::debugString() const
{
	return DroopSignalFeedbackKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, DroopSignalFeedbackKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "DroopSignalFeedbackKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "electricalPower")
		{
			rop = DroopSignalFeedbackKind::electricalPower;
			return lop;
		}
		if(EnumSymbol == "none")
		{
			rop = DroopSignalFeedbackKind::none;
			return lop;
		}
		if(EnumSymbol == "fuelValveStroke")
		{
			rop = DroopSignalFeedbackKind::fuelValveStroke;
			return lop;
		}
		if(EnumSymbol == "governorOutput")
		{
			rop = DroopSignalFeedbackKind::governorOutput;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const DroopSignalFeedbackKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == DroopSignalFeedbackKind::electricalPower)
			{
				EnumSymbol = "electricalPower";
			}
			if (obj.value == DroopSignalFeedbackKind::none)
			{
				EnumSymbol = "none";
			}
			if (obj.value == DroopSignalFeedbackKind::fuelValveStroke)
			{
				EnumSymbol = "fuelValveStroke";
			}
			if (obj.value == DroopSignalFeedbackKind::governorOutput)
			{
				EnumSymbol = "governorOutput";
			}

			if (!EnumSymbol.empty())
			{
				os << "DroopSignalFeedbackKind." << EnumSymbol;
			}
		}
		return os;
	}
}
