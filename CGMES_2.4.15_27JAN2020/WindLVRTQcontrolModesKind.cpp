/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindLVRTQcontrolModesKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindLVRTQcontrolModesKind& WindLVRTQcontrolModesKind::operator=(WindLVRTQcontrolModesKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindLVRTQcontrolModesKind::operator WindLVRTQcontrolModesKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindLVRTQcontrolModesKind::debugName[] = "WindLVRTQcontrolModesKind";
const char* WindLVRTQcontrolModesKind::debugString() const
{
	return WindLVRTQcontrolModesKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindLVRTQcontrolModesKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "WindLVRTQcontrolModesKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "mode1")
		{
			rop = WindLVRTQcontrolModesKind::mode1;
			return lop;
		}
		if (EnumSymbol == "mode2")
		{
			rop = WindLVRTQcontrolModesKind::mode2;
			return lop;
		}
		if (EnumSymbol == "mode3")
		{
			rop = WindLVRTQcontrolModesKind::mode3;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindLVRTQcontrolModesKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindLVRTQcontrolModesKind::mode1)
			{
				EnumSymbol = "mode1";
			}
			if (obj.value == WindLVRTQcontrolModesKind::mode2)
			{
				EnumSymbol = "mode2";
			}
			if (obj.value == WindLVRTQcontrolModesKind::mode3)
			{
				EnumSymbol = "mode3";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindLVRTQcontrolModesKind." << EnumSymbol;
			}
		}
		return os;
	}
}
