/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseCode.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PhaseCode& PhaseCode::operator=(PhaseCode_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

PhaseCode::operator PhaseCode_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char PhaseCode::debugName[] = "PhaseCode";
const char* PhaseCode::debugString() const
{
	return PhaseCode::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, PhaseCode& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if (EnumSymbol.substr(0, pos) != "PhaseCode")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if (EnumSymbol == "ABCN")
		{
			rop = PhaseCode::ABCN;
			return lop;
		}
		if (EnumSymbol == "ABC")
		{
			rop = PhaseCode::ABC;
			return lop;
		}
		if (EnumSymbol == "ABN")
		{
			rop = PhaseCode::ABN;
			return lop;
		}
		if (EnumSymbol == "ACN")
		{
			rop = PhaseCode::ACN;
			return lop;
		}
		if (EnumSymbol == "BCN")
		{
			rop = PhaseCode::BCN;
			return lop;
		}
		if (EnumSymbol == "AB")
		{
			rop = PhaseCode::AB;
			return lop;
		}
		if (EnumSymbol == "AC")
		{
			rop = PhaseCode::AC;
			return lop;
		}
		if (EnumSymbol == "BC")
		{
			rop = PhaseCode::BC;
			return lop;
		}
		if (EnumSymbol == "AN")
		{
			rop = PhaseCode::AN;
			return lop;
		}
		if (EnumSymbol == "BN")
		{
			rop = PhaseCode::BN;
			return lop;
		}
		if (EnumSymbol == "CN")
		{
			rop = PhaseCode::CN;
			return lop;
		}
		if (EnumSymbol == "A")
		{
			rop = PhaseCode::A;
			return lop;
		}
		if (EnumSymbol == "B")
		{
			rop = PhaseCode::B;
			return lop;
		}
		if (EnumSymbol == "C")
		{
			rop = PhaseCode::C;
			return lop;
		}
		if (EnumSymbol == "N")
		{
			rop = PhaseCode::N;
			return lop;
		}
		if (EnumSymbol == "s1N")
		{
			rop = PhaseCode::s1N;
			return lop;
		}
		if (EnumSymbol == "s2N")
		{
			rop = PhaseCode::s2N;
			return lop;
		}
		if (EnumSymbol == "s12N")
		{
			rop = PhaseCode::s12N;
			return lop;
		}
		if (EnumSymbol == "s1")
		{
			rop = PhaseCode::s1;
			return lop;
		}
		if (EnumSymbol == "s2")
		{
			rop = PhaseCode::s2;
			return lop;
		}
		if (EnumSymbol == "s12")
		{
			rop = PhaseCode::s12;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const PhaseCode& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == PhaseCode::ABCN)
			{
				EnumSymbol = "ABCN";
			}
			if (obj.value == PhaseCode::ABC)
			{
				EnumSymbol = "ABC";
			}
			if (obj.value == PhaseCode::ABN)
			{
				EnumSymbol = "ABN";
			}
			if (obj.value == PhaseCode::ACN)
			{
				EnumSymbol = "ACN";
			}
			if (obj.value == PhaseCode::BCN)
			{
				EnumSymbol = "BCN";
			}
			if (obj.value == PhaseCode::AB)
			{
				EnumSymbol = "AB";
			}
			if (obj.value == PhaseCode::AC)
			{
				EnumSymbol = "AC";
			}
			if (obj.value == PhaseCode::BC)
			{
				EnumSymbol = "BC";
			}
			if (obj.value == PhaseCode::AN)
			{
				EnumSymbol = "AN";
			}
			if (obj.value == PhaseCode::BN)
			{
				EnumSymbol = "BN";
			}
			if (obj.value == PhaseCode::CN)
			{
				EnumSymbol = "CN";
			}
			if (obj.value == PhaseCode::A)
			{
				EnumSymbol = "A";
			}
			if (obj.value == PhaseCode::B)
			{
				EnumSymbol = "B";
			}
			if (obj.value == PhaseCode::C)
			{
				EnumSymbol = "C";
			}
			if (obj.value == PhaseCode::N)
			{
				EnumSymbol = "N";
			}
			if (obj.value == PhaseCode::s1N)
			{
				EnumSymbol = "s1N";
			}
			if (obj.value == PhaseCode::s2N)
			{
				EnumSymbol = "s2N";
			}
			if (obj.value == PhaseCode::s12N)
			{
				EnumSymbol = "s12N";
			}
			if (obj.value == PhaseCode::s1)
			{
				EnumSymbol = "s1";
			}
			if (obj.value == PhaseCode::s2)
			{
				EnumSymbol = "s2";
			}
			if (obj.value == PhaseCode::s12)
			{
				EnumSymbol = "s12";
			}

			if (!EnumSymbol.empty())
			{
				os << "PhaseCode." << EnumSymbol;
			}
		}
		return os;
	}
}
