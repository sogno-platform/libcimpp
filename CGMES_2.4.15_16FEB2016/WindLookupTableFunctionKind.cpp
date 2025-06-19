/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindLookupTableFunctionKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindLookupTableFunctionKind& WindLookupTableFunctionKind::operator=(WindLookupTableFunctionKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindLookupTableFunctionKind::operator WindLookupTableFunctionKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindLookupTableFunctionKind::debugName[] = "WindLookupTableFunctionKind";
const char* WindLookupTableFunctionKind::debugString() const
{
	return WindLookupTableFunctionKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindLookupTableFunctionKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "WindLookupTableFunctionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "fpslip")
		{
			rop = WindLookupTableFunctionKind::fpslip;
			return lop;
		}
		if (EnumSymbol == "fpomega")
		{
			rop = WindLookupTableFunctionKind::fpomega;
			return lop;
		}
		if (EnumSymbol == "ipvdl")
		{
			rop = WindLookupTableFunctionKind::ipvdl;
			return lop;
		}
		if (EnumSymbol == "iqvdl")
		{
			rop = WindLookupTableFunctionKind::iqvdl;
			return lop;
		}
		if (EnumSymbol == "fdpf")
		{
			rop = WindLookupTableFunctionKind::fdpf;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindLookupTableFunctionKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindLookupTableFunctionKind::fpslip)
			{
				EnumSymbol = "fpslip";
			}
			if (obj.value == WindLookupTableFunctionKind::fpomega)
			{
				EnumSymbol = "fpomega";
			}
			if (obj.value == WindLookupTableFunctionKind::ipvdl)
			{
				EnumSymbol = "ipvdl";
			}
			if (obj.value == WindLookupTableFunctionKind::iqvdl)
			{
				EnumSymbol = "iqvdl";
			}
			if (obj.value == WindLookupTableFunctionKind::fdpf)
			{
				EnumSymbol = "fdpf";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindLookupTableFunctionKind." << EnumSymbol;
			}
		}
		return os;
	}
}
