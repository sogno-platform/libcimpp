/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeneratorControlSource.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

GeneratorControlSource& GeneratorControlSource::operator=(GeneratorControlSource_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

GeneratorControlSource::operator GeneratorControlSource_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char GeneratorControlSource::debugName[] = "GeneratorControlSource";
const char* GeneratorControlSource::debugString() const
{
	return GeneratorControlSource::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, GeneratorControlSource& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "GeneratorControlSource")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "unavailable")
		{
			rop = GeneratorControlSource::unavailable;
			return lop;
		}
		if (EnumSymbol == "offAGC")
		{
			rop = GeneratorControlSource::offAGC;
			return lop;
		}
		if (EnumSymbol == "onAGC")
		{
			rop = GeneratorControlSource::onAGC;
			return lop;
		}
		if (EnumSymbol == "plantControl")
		{
			rop = GeneratorControlSource::plantControl;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const GeneratorControlSource& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == GeneratorControlSource::unavailable)
			{
				EnumSymbol = "unavailable";
			}
			if (obj.value == GeneratorControlSource::offAGC)
			{
				EnumSymbol = "offAGC";
			}
			if (obj.value == GeneratorControlSource::onAGC)
			{
				EnumSymbol = "onAGC";
			}
			if (obj.value == GeneratorControlSource::plantControl)
			{
				EnumSymbol = "plantControl";
			}

			if (!EnumSymbol.empty())
			{
				os << "GeneratorControlSource." << EnumSymbol;
			}
		}
		return os;
	}
}
