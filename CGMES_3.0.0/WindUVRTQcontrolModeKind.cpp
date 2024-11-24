/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindUVRTQcontrolModeKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindUVRTQcontrolModeKind& WindUVRTQcontrolModeKind::operator=(WindUVRTQcontrolModeKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindUVRTQcontrolModeKind::operator WindUVRTQcontrolModeKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindUVRTQcontrolModeKind::debugName[] = "WindUVRTQcontrolModeKind";
const char* WindUVRTQcontrolModeKind::debugString() const
{
	return WindUVRTQcontrolModeKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindUVRTQcontrolModeKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindUVRTQcontrolModeKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "mode0")
		{
			rop = WindUVRTQcontrolModeKind::mode0;
			return lop;
		}
		if(EnumSymbol == "mode1")
		{
			rop = WindUVRTQcontrolModeKind::mode1;
			return lop;
		}
		if(EnumSymbol == "mode2")
		{
			rop = WindUVRTQcontrolModeKind::mode2;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindUVRTQcontrolModeKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindUVRTQcontrolModeKind::mode0)
			{
				EnumSymbol = "mode0";
			}
			if (obj.value == WindUVRTQcontrolModeKind::mode1)
			{
				EnumSymbol = "mode1";
			}
			if (obj.value == WindUVRTQcontrolModeKind::mode2)
			{
				EnumSymbol = "mode2";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindUVRTQcontrolModeKind." << EnumSymbol;
			}
		}
		return os;
	}
}
