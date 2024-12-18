/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticLoadModelKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

StaticLoadModelKind& StaticLoadModelKind::operator=(StaticLoadModelKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

StaticLoadModelKind::operator StaticLoadModelKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char StaticLoadModelKind::debugName[] = "StaticLoadModelKind";
const char* StaticLoadModelKind::debugString() const
{
	return StaticLoadModelKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, StaticLoadModelKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "StaticLoadModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "exponential")
		{
			rop = StaticLoadModelKind::exponential;
			return lop;
		}
		if(EnumSymbol == "zIP1")
		{
			rop = StaticLoadModelKind::zIP1;
			return lop;
		}
		if(EnumSymbol == "zIP2")
		{
			rop = StaticLoadModelKind::zIP2;
			return lop;
		}
		if(EnumSymbol == "constantZ")
		{
			rop = StaticLoadModelKind::constantZ;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const StaticLoadModelKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == StaticLoadModelKind::exponential)
			{
				EnumSymbol = "exponential";
			}
			if (obj.value == StaticLoadModelKind::zIP1)
			{
				EnumSymbol = "zIP1";
			}
			if (obj.value == StaticLoadModelKind::zIP2)
			{
				EnumSymbol = "zIP2";
			}
			if (obj.value == StaticLoadModelKind::constantZ)
			{
				EnumSymbol = "constantZ";
			}

			if (!EnumSymbol.empty())
			{
				os << "StaticLoadModelKind." << EnumSymbol;
			}
		}
		return os;
	}
}
