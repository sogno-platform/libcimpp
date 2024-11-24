/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST7BUELselectorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ExcST7BUELselectorKind& ExcST7BUELselectorKind::operator=(ExcST7BUELselectorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ExcST7BUELselectorKind::operator ExcST7BUELselectorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ExcST7BUELselectorKind::debugName[] = "ExcST7BUELselectorKind";
const char* ExcST7BUELselectorKind::debugString() const
{
	return ExcST7BUELselectorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ExcST7BUELselectorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "ExcST7BUELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "noUELinput")
		{
			rop = ExcST7BUELselectorKind::noUELinput;
			return lop;
		}
		if(EnumSymbol == "addVref")
		{
			rop = ExcST7BUELselectorKind::addVref;
			return lop;
		}
		if(EnumSymbol == "inputHVgate")
		{
			rop = ExcST7BUELselectorKind::inputHVgate;
			return lop;
		}
		if(EnumSymbol == "outputHVgate")
		{
			rop = ExcST7BUELselectorKind::outputHVgate;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ExcST7BUELselectorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ExcST7BUELselectorKind::noUELinput)
			{
				EnumSymbol = "noUELinput";
			}
			if (obj.value == ExcST7BUELselectorKind::addVref)
			{
				EnumSymbol = "addVref";
			}
			if (obj.value == ExcST7BUELselectorKind::inputHVgate)
			{
				EnumSymbol = "inputHVgate";
			}
			if (obj.value == ExcST7BUELselectorKind::outputHVgate)
			{
				EnumSymbol = "outputHVgate";
			}

			if (!EnumSymbol.empty())
			{
				os << "ExcST7BUELselectorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
