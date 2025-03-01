/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SVCControlMode.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

SVCControlMode& SVCControlMode::operator=(SVCControlMode_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

SVCControlMode::operator SVCControlMode_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char SVCControlMode::debugName[] = "SVCControlMode";
const char* SVCControlMode::debugString() const
{
	return SVCControlMode::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, SVCControlMode& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "SVCControlMode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "reactivePower")
		{
			rop = SVCControlMode::reactivePower;
			return lop;
		}
		if (EnumSymbol == "voltage")
		{
			rop = SVCControlMode::voltage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const SVCControlMode& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == SVCControlMode::reactivePower)
			{
				EnumSymbol = "reactivePower";
			}
			if (obj.value == SVCControlMode::voltage)
			{
				EnumSymbol = "voltage";
			}

			if (!EnumSymbol.empty())
			{
				os << "SVCControlMode." << EnumSymbol;
			}
		}
		return os;
	}
}
