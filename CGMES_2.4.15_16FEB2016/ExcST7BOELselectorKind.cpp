/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST7BOELselectorKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ExcST7BOELselectorKind& ExcST7BOELselectorKind::operator=(ExcST7BOELselectorKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ExcST7BOELselectorKind::operator ExcST7BOELselectorKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ExcST7BOELselectorKind::debugName[] = "ExcST7BOELselectorKind";
const char* ExcST7BOELselectorKind::debugString() const
{
	return ExcST7BOELselectorKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ExcST7BOELselectorKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "ExcST7BOELselectorKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "noOELinput")
		{
			rop = ExcST7BOELselectorKind::noOELinput;
			return lop;
		}
		if (EnumSymbol == "addVref")
		{
			rop = ExcST7BOELselectorKind::addVref;
			return lop;
		}
		if (EnumSymbol == "inputLVgate")
		{
			rop = ExcST7BOELselectorKind::inputLVgate;
			return lop;
		}
		if (EnumSymbol == "outputLVgate")
		{
			rop = ExcST7BOELselectorKind::outputLVgate;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ExcST7BOELselectorKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == ExcST7BOELselectorKind::noOELinput)
			{
				EnumSymbol = "noOELinput";
			}
			if (obj.value == ExcST7BOELselectorKind::addVref)
			{
				EnumSymbol = "addVref";
			}
			if (obj.value == ExcST7BOELselectorKind::inputLVgate)
			{
				EnumSymbol = "inputLVgate";
			}
			if (obj.value == ExcST7BOELselectorKind::outputLVgate)
			{
				EnumSymbol = "outputLVgate";
			}

			if (!EnumSymbol.empty())
			{
				os << "ExcST7BOELselectorKind." << EnumSymbol;
			}
		}
		return os;
	}
}
