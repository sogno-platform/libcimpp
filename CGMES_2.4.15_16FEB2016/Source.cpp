/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Source.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Source& Source::operator=(Source_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Source::operator Source_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Source::debugName[] = "Source";
const char* Source::debugString() const
{
	return Source::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Source& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Source")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "PROCESS")
		{
			rop = Source::PROCESS;
			return lop;
		}
		if(EnumSymbol == "DEFAULTED")
		{
			rop = Source::DEFAULTED;
			return lop;
		}
		if(EnumSymbol == "SUBSTITUTED")
		{
			rop = Source::SUBSTITUTED;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Source& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == Source::PROCESS)
			{
				EnumSymbol = "PROCESS";
			}
			if (obj.value == Source::DEFAULTED)
			{
				EnumSymbol = "DEFAULTED";
			}
			if (obj.value == Source::SUBSTITUTED)
			{
				EnumSymbol = "SUBSTITUTED";
			}

			if (!EnumSymbol.empty())
			{
				os << "Source." << EnumSymbol;
			}
		}
		return os;
	}
}
