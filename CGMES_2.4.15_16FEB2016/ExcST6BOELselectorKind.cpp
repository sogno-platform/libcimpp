/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST6BOELselectorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ExcST6BOELselectorKind& ExcST6BOELselectorKind::operator=(ExcST6BOELselectorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ExcST6BOELselectorKind::operator ExcST6BOELselectorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ExcST6BOELselectorKind::debugName[] = "ExcST6BOELselectorKind";
const char* ExcST6BOELselectorKind::debugString() const
{
	return ExcST6BOELselectorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ExcST6BOELselectorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcST6BOELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "noOELinput")
		{
			rop = ExcST6BOELselectorKind::noOELinput;
			return lop;
		}
		if(EnumSymbol == "beforeUEL")
		{
			rop = ExcST6BOELselectorKind::beforeUEL;
			return lop;
		}
		if(EnumSymbol == "afterUEL")
		{
			rop = ExcST6BOELselectorKind::afterUEL;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ExcST6BOELselectorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ExcST6BOELselectorKind::noOELinput)
			{
				EnumSymbol = "noOELinput";
			}
			if (obj.value == ExcST6BOELselectorKind::beforeUEL)
			{
				EnumSymbol = "beforeUEL";
			}
			if (obj.value == ExcST6BOELselectorKind::afterUEL)
			{
				EnumSymbol = "afterUEL";
			}

			if (!EnumSymbol.empty())
			{
				os << "ExcST6BOELselectorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
