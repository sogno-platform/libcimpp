/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "IfdBaseKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

IfdBaseKind& IfdBaseKind::operator=(IfdBaseKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

IfdBaseKind::operator IfdBaseKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char IfdBaseKind::debugName[] = "IfdBaseKind";
const char* IfdBaseKind::debugString() const
{
	return IfdBaseKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, IfdBaseKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "IfdBaseKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "ifag")
		{
			rop = IfdBaseKind::ifag;
			return lop;
		}
		if(EnumSymbol == "ifnl")
		{
			rop = IfdBaseKind::ifnl;
			return lop;
		}
		if(EnumSymbol == "iffl")
		{
			rop = IfdBaseKind::iffl;
			return lop;
		}
		if(EnumSymbol == "other")
		{
			rop = IfdBaseKind::other;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const IfdBaseKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == IfdBaseKind::ifag)
			{
				EnumSymbol = "ifag";
			}
			if (obj.value == IfdBaseKind::ifnl)
			{
				EnumSymbol = "ifnl";
			}
			if (obj.value == IfdBaseKind::iffl)
			{
				EnumSymbol = "iffl";
			}
			if (obj.value == IfdBaseKind::other)
			{
				EnumSymbol = "other";
			}

			if (!EnumSymbol.empty())
			{
				os << "IfdBaseKind." << EnumSymbol;
			}
		}
		return os;
	}
}
