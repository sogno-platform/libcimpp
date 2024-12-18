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
		if(EnumSymbol.substr(0, pos) != "WindLookupTableFunctionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "prr")
		{
			rop = WindLookupTableFunctionKind::prr;
			return lop;
		}
		if(EnumSymbol == "omegap")
		{
			rop = WindLookupTableFunctionKind::omegap;
			return lop;
		}
		if(EnumSymbol == "ipmax")
		{
			rop = WindLookupTableFunctionKind::ipmax;
			return lop;
		}
		if(EnumSymbol == "iqmax")
		{
			rop = WindLookupTableFunctionKind::iqmax;
			return lop;
		}
		if(EnumSymbol == "pwp")
		{
			rop = WindLookupTableFunctionKind::pwp;
			return lop;
		}
		if(EnumSymbol == "tcwdu")
		{
			rop = WindLookupTableFunctionKind::tcwdu;
			return lop;
		}
		if(EnumSymbol == "tduwt")
		{
			rop = WindLookupTableFunctionKind::tduwt;
			return lop;
		}
		if(EnumSymbol == "qmaxp")
		{
			rop = WindLookupTableFunctionKind::qmaxp;
			return lop;
		}
		if(EnumSymbol == "qminp")
		{
			rop = WindLookupTableFunctionKind::qminp;
			return lop;
		}
		if(EnumSymbol == "qmaxu")
		{
			rop = WindLookupTableFunctionKind::qmaxu;
			return lop;
		}
		if(EnumSymbol == "qminu")
		{
			rop = WindLookupTableFunctionKind::qminu;
			return lop;
		}
		if(EnumSymbol == "tuover")
		{
			rop = WindLookupTableFunctionKind::tuover;
			return lop;
		}
		if(EnumSymbol == "tuunder")
		{
			rop = WindLookupTableFunctionKind::tuunder;
			return lop;
		}
		if(EnumSymbol == "tfover")
		{
			rop = WindLookupTableFunctionKind::tfover;
			return lop;
		}
		if(EnumSymbol == "tfunder")
		{
			rop = WindLookupTableFunctionKind::tfunder;
			return lop;
		}
		if(EnumSymbol == "qwp")
		{
			rop = WindLookupTableFunctionKind::qwp;
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

			if (obj.value == WindLookupTableFunctionKind::prr)
			{
				EnumSymbol = "prr";
			}
			if (obj.value == WindLookupTableFunctionKind::omegap)
			{
				EnumSymbol = "omegap";
			}
			if (obj.value == WindLookupTableFunctionKind::ipmax)
			{
				EnumSymbol = "ipmax";
			}
			if (obj.value == WindLookupTableFunctionKind::iqmax)
			{
				EnumSymbol = "iqmax";
			}
			if (obj.value == WindLookupTableFunctionKind::pwp)
			{
				EnumSymbol = "pwp";
			}
			if (obj.value == WindLookupTableFunctionKind::tcwdu)
			{
				EnumSymbol = "tcwdu";
			}
			if (obj.value == WindLookupTableFunctionKind::tduwt)
			{
				EnumSymbol = "tduwt";
			}
			if (obj.value == WindLookupTableFunctionKind::qmaxp)
			{
				EnumSymbol = "qmaxp";
			}
			if (obj.value == WindLookupTableFunctionKind::qminp)
			{
				EnumSymbol = "qminp";
			}
			if (obj.value == WindLookupTableFunctionKind::qmaxu)
			{
				EnumSymbol = "qmaxu";
			}
			if (obj.value == WindLookupTableFunctionKind::qminu)
			{
				EnumSymbol = "qminu";
			}
			if (obj.value == WindLookupTableFunctionKind::tuover)
			{
				EnumSymbol = "tuover";
			}
			if (obj.value == WindLookupTableFunctionKind::tuunder)
			{
				EnumSymbol = "tuunder";
			}
			if (obj.value == WindLookupTableFunctionKind::tfover)
			{
				EnumSymbol = "tfover";
			}
			if (obj.value == WindLookupTableFunctionKind::tfunder)
			{
				EnumSymbol = "tfunder";
			}
			if (obj.value == WindLookupTableFunctionKind::qwp)
			{
				EnumSymbol = "qwp";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindLookupTableFunctionKind." << EnumSymbol;
			}
		}
		return os;
	}
}
