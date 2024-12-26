/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST1AUELselectorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ExcIEEEST1AUELselectorKind& ExcIEEEST1AUELselectorKind::operator=(ExcIEEEST1AUELselectorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ExcIEEEST1AUELselectorKind::operator ExcIEEEST1AUELselectorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ExcIEEEST1AUELselectorKind::debugName[] = "ExcIEEEST1AUELselectorKind";
const char* ExcIEEEST1AUELselectorKind::debugString() const
{
	return ExcIEEEST1AUELselectorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ExcIEEEST1AUELselectorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcIEEEST1AUELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "ignoreUELsignal")
		{
			rop = ExcIEEEST1AUELselectorKind::ignoreUELsignal;
			return lop;
		}
		if(EnumSymbol == "inputHVgateVoltageOutput")
		{
			rop = ExcIEEEST1AUELselectorKind::inputHVgateVoltageOutput;
			return lop;
		}
		if(EnumSymbol == "inputHVgateErrorSignal")
		{
			rop = ExcIEEEST1AUELselectorKind::inputHVgateErrorSignal;
			return lop;
		}
		if(EnumSymbol == "inputAddedToErrorSignal")
		{
			rop = ExcIEEEST1AUELselectorKind::inputAddedToErrorSignal;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ExcIEEEST1AUELselectorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ExcIEEEST1AUELselectorKind::ignoreUELsignal)
			{
				EnumSymbol = "ignoreUELsignal";
			}
			if (obj.value == ExcIEEEST1AUELselectorKind::inputHVgateVoltageOutput)
			{
				EnumSymbol = "inputHVgateVoltageOutput";
			}
			if (obj.value == ExcIEEEST1AUELselectorKind::inputHVgateErrorSignal)
			{
				EnumSymbol = "inputHVgateErrorSignal";
			}
			if (obj.value == ExcIEEEST1AUELselectorKind::inputAddedToErrorSignal)
			{
				EnumSymbol = "inputAddedToErrorSignal";
			}

			if (!EnumSymbol.empty())
			{
				os << "ExcIEEEST1AUELselectorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
