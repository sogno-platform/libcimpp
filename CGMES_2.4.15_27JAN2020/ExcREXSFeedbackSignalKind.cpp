/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcREXSFeedbackSignalKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ExcREXSFeedbackSignalKind& ExcREXSFeedbackSignalKind::operator=(ExcREXSFeedbackSignalKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ExcREXSFeedbackSignalKind::operator ExcREXSFeedbackSignalKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ExcREXSFeedbackSignalKind::debugName[] = "ExcREXSFeedbackSignalKind";
const char* ExcREXSFeedbackSignalKind::debugString() const
{
	return ExcREXSFeedbackSignalKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ExcREXSFeedbackSignalKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcREXSFeedbackSignalKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "fieldVoltage")
		{
			rop = ExcREXSFeedbackSignalKind::fieldVoltage;
			return lop;
		}
		if(EnumSymbol == "fieldCurrent")
		{
			rop = ExcREXSFeedbackSignalKind::fieldCurrent;
			return lop;
		}
		if(EnumSymbol == "outputVoltage")
		{
			rop = ExcREXSFeedbackSignalKind::outputVoltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ExcREXSFeedbackSignalKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ExcREXSFeedbackSignalKind::fieldVoltage)
			{
				EnumSymbol = "fieldVoltage";
			}
			if (obj.value == ExcREXSFeedbackSignalKind::fieldCurrent)
			{
				EnumSymbol = "fieldCurrent";
			}
			if (obj.value == ExcREXSFeedbackSignalKind::outputVoltage)
			{
				EnumSymbol = "outputVoltage";
			}

			if (!EnumSymbol.empty())
			{
				os << "ExcREXSFeedbackSignalKind." << EnumSymbol;
			}
		}
		return os;
	}
}
