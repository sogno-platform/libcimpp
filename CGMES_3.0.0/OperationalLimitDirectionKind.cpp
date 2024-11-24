/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitDirectionKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

OperationalLimitDirectionKind& OperationalLimitDirectionKind::operator=(OperationalLimitDirectionKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

OperationalLimitDirectionKind::operator OperationalLimitDirectionKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char OperationalLimitDirectionKind::debugName[] = "OperationalLimitDirectionKind";
const char* OperationalLimitDirectionKind::debugString() const
{
	return OperationalLimitDirectionKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, OperationalLimitDirectionKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "OperationalLimitDirectionKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "high")
		{
			rop = OperationalLimitDirectionKind::high;
			return lop;
		}
		if(EnumSymbol == "low")
		{
			rop = OperationalLimitDirectionKind::low;
			return lop;
		}
		if(EnumSymbol == "absoluteValue")
		{
			rop = OperationalLimitDirectionKind::absoluteValue;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const OperationalLimitDirectionKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == OperationalLimitDirectionKind::high)
			{
				EnumSymbol = "high";
			}
			if (obj.value == OperationalLimitDirectionKind::low)
			{
				EnumSymbol = "low";
			}
			if (obj.value == OperationalLimitDirectionKind::absoluteValue)
			{
				EnumSymbol = "absoluteValue";
			}

			if (!EnumSymbol.empty())
			{
				os << "OperationalLimitDirectionKind." << EnumSymbol;
			}
		}
		return os;
	}
}
