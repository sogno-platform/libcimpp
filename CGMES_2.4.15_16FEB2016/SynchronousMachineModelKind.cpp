/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineModelKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

SynchronousMachineModelKind& SynchronousMachineModelKind::operator=(SynchronousMachineModelKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

SynchronousMachineModelKind::operator SynchronousMachineModelKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char SynchronousMachineModelKind::debugName[] = "SynchronousMachineModelKind";
const char* SynchronousMachineModelKind::debugString() const
{
	return SynchronousMachineModelKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, SynchronousMachineModelKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "SynchronousMachineModelKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "subtransient")
		{
			rop = SynchronousMachineModelKind::subtransient;
			return lop;
		}
		if(EnumSymbol == "subtransientTypeF")
		{
			rop = SynchronousMachineModelKind::subtransientTypeF;
			return lop;
		}
		if(EnumSymbol == "subtransientTypeJ")
		{
			rop = SynchronousMachineModelKind::subtransientTypeJ;
			return lop;
		}
		if(EnumSymbol == "subtransientSimplified")
		{
			rop = SynchronousMachineModelKind::subtransientSimplified;
			return lop;
		}
		if(EnumSymbol == "subtransientSimplifiedDirectAxis")
		{
			rop = SynchronousMachineModelKind::subtransientSimplifiedDirectAxis;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const SynchronousMachineModelKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == SynchronousMachineModelKind::subtransient)
			{
				EnumSymbol = "subtransient";
			}
			if (obj.value == SynchronousMachineModelKind::subtransientTypeF)
			{
				EnumSymbol = "subtransientTypeF";
			}
			if (obj.value == SynchronousMachineModelKind::subtransientTypeJ)
			{
				EnumSymbol = "subtransientTypeJ";
			}
			if (obj.value == SynchronousMachineModelKind::subtransientSimplified)
			{
				EnumSymbol = "subtransientSimplified";
			}
			if (obj.value == SynchronousMachineModelKind::subtransientSimplifiedDirectAxis)
			{
				EnumSymbol = "subtransientSimplifiedDirectAxis";
			}

			if (!EnumSymbol.empty())
			{
				os << "SynchronousMachineModelKind." << EnumSymbol;
			}
		}
		return os;
	}
}
