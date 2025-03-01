/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GenericNonLinearLoadModelKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

GenericNonLinearLoadModelKind& GenericNonLinearLoadModelKind::operator=(GenericNonLinearLoadModelKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

GenericNonLinearLoadModelKind::operator GenericNonLinearLoadModelKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char GenericNonLinearLoadModelKind::debugName[] = "GenericNonLinearLoadModelKind";
const char* GenericNonLinearLoadModelKind::debugString() const
{
	return GenericNonLinearLoadModelKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, GenericNonLinearLoadModelKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "GenericNonLinearLoadModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "exponentialRecovery")
		{
			rop = GenericNonLinearLoadModelKind::exponentialRecovery;
			return lop;
		}
		if (EnumSymbol == "loadAdaptive")
		{
			rop = GenericNonLinearLoadModelKind::loadAdaptive;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const GenericNonLinearLoadModelKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == GenericNonLinearLoadModelKind::exponentialRecovery)
			{
				EnumSymbol = "exponentialRecovery";
			}
			if (obj.value == GenericNonLinearLoadModelKind::loadAdaptive)
			{
				EnumSymbol = "loadAdaptive";
			}

			if (!EnumSymbol.empty())
			{
				os << "GenericNonLinearLoadModelKind." << EnumSymbol;
			}
		}
		return os;
	}
}
