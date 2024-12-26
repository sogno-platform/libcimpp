/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindingConnection.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

WindingConnection& WindingConnection::operator=(WindingConnection_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

WindingConnection::operator WindingConnection_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char WindingConnection::debugName[] = "WindingConnection";
const char* WindingConnection::debugString() const
{
	return WindingConnection::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, WindingConnection& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "WindingConnection")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "D")
		{
			rop = WindingConnection::D;
			return lop;
		}
		if(EnumSymbol == "Y")
		{
			rop = WindingConnection::Y;
			return lop;
		}
		if(EnumSymbol == "Z")
		{
			rop = WindingConnection::Z;
			return lop;
		}
		if(EnumSymbol == "Yn")
		{
			rop = WindingConnection::Yn;
			return lop;
		}
		if(EnumSymbol == "Zn")
		{
			rop = WindingConnection::Zn;
			return lop;
		}
		if(EnumSymbol == "A")
		{
			rop = WindingConnection::A;
			return lop;
		}
		if(EnumSymbol == "I")
		{
			rop = WindingConnection::I;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const WindingConnection& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == WindingConnection::D)
			{
				EnumSymbol = "D";
			}
			if (obj.value == WindingConnection::Y)
			{
				EnumSymbol = "Y";
			}
			if (obj.value == WindingConnection::Z)
			{
				EnumSymbol = "Z";
			}
			if (obj.value == WindingConnection::Yn)
			{
				EnumSymbol = "Yn";
			}
			if (obj.value == WindingConnection::Zn)
			{
				EnumSymbol = "Zn";
			}
			if (obj.value == WindingConnection::A)
			{
				EnumSymbol = "A";
			}
			if (obj.value == WindingConnection::I)
			{
				EnumSymbol = "I";
			}

			if (!EnumSymbol.empty())
			{
				os << "WindingConnection." << EnumSymbol;
			}
		}
		return os;
	}
}
