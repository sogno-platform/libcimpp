/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnitSymbol.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

UnitSymbol& UnitSymbol::operator=(UnitSymbol_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

UnitSymbol::operator UnitSymbol_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char UnitSymbol::debugName[] = "UnitSymbol";
const char* UnitSymbol::debugString() const
{
	return UnitSymbol::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, UnitSymbol& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "UnitSymbol")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "none")
		{
			rop = UnitSymbol::none;
			return lop;
		}
		if(EnumSymbol == "m")
		{
			rop = UnitSymbol::m;
			return lop;
		}
		if(EnumSymbol == "kg")
		{
			rop = UnitSymbol::kg;
			return lop;
		}
		if(EnumSymbol == "s")
		{
			rop = UnitSymbol::s;
			return lop;
		}
		if(EnumSymbol == "A")
		{
			rop = UnitSymbol::A;
			return lop;
		}
		if(EnumSymbol == "K")
		{
			rop = UnitSymbol::K;
			return lop;
		}
		if(EnumSymbol == "mol")
		{
			rop = UnitSymbol::mol;
			return lop;
		}
		if(EnumSymbol == "cd")
		{
			rop = UnitSymbol::cd;
			return lop;
		}
		if(EnumSymbol == "deg")
		{
			rop = UnitSymbol::deg;
			return lop;
		}
		if(EnumSymbol == "rad")
		{
			rop = UnitSymbol::rad;
			return lop;
		}
		if(EnumSymbol == "sr")
		{
			rop = UnitSymbol::sr;
			return lop;
		}
		if(EnumSymbol == "Gy")
		{
			rop = UnitSymbol::Gy;
			return lop;
		}
		if(EnumSymbol == "Bq")
		{
			rop = UnitSymbol::Bq;
			return lop;
		}
		if(EnumSymbol == "degC")
		{
			rop = UnitSymbol::degC;
			return lop;
		}
		if(EnumSymbol == "Sv")
		{
			rop = UnitSymbol::Sv;
			return lop;
		}
		if(EnumSymbol == "F")
		{
			rop = UnitSymbol::F;
			return lop;
		}
		if(EnumSymbol == "C")
		{
			rop = UnitSymbol::C;
			return lop;
		}
		if(EnumSymbol == "S")
		{
			rop = UnitSymbol::S;
			return lop;
		}
		if(EnumSymbol == "H")
		{
			rop = UnitSymbol::H;
			return lop;
		}
		if(EnumSymbol == "V")
		{
			rop = UnitSymbol::V;
			return lop;
		}
		if(EnumSymbol == "ohm")
		{
			rop = UnitSymbol::ohm;
			return lop;
		}
		if(EnumSymbol == "J")
		{
			rop = UnitSymbol::J;
			return lop;
		}
		if(EnumSymbol == "N")
		{
			rop = UnitSymbol::N;
			return lop;
		}
		if(EnumSymbol == "Hz")
		{
			rop = UnitSymbol::Hz;
			return lop;
		}
		if(EnumSymbol == "lx")
		{
			rop = UnitSymbol::lx;
			return lop;
		}
		if(EnumSymbol == "lm")
		{
			rop = UnitSymbol::lm;
			return lop;
		}
		if(EnumSymbol == "Wb")
		{
			rop = UnitSymbol::Wb;
			return lop;
		}
		if(EnumSymbol == "T")
		{
			rop = UnitSymbol::T;
			return lop;
		}
		if(EnumSymbol == "W")
		{
			rop = UnitSymbol::W;
			return lop;
		}
		if(EnumSymbol == "Pa")
		{
			rop = UnitSymbol::Pa;
			return lop;
		}
		if(EnumSymbol == "m2")
		{
			rop = UnitSymbol::m2;
			return lop;
		}
		if(EnumSymbol == "m3")
		{
			rop = UnitSymbol::m3;
			return lop;
		}
		if(EnumSymbol == "mPers")
		{
			rop = UnitSymbol::mPers;
			return lop;
		}
		if(EnumSymbol == "mPers2")
		{
			rop = UnitSymbol::mPers2;
			return lop;
		}
		if(EnumSymbol == "m3Pers")
		{
			rop = UnitSymbol::m3Pers;
			return lop;
		}
		if(EnumSymbol == "mPerm3")
		{
			rop = UnitSymbol::mPerm3;
			return lop;
		}
		if(EnumSymbol == "kgm")
		{
			rop = UnitSymbol::kgm;
			return lop;
		}
		if(EnumSymbol == "kgPerm3")
		{
			rop = UnitSymbol::kgPerm3;
			return lop;
		}
		if(EnumSymbol == "m2Pers")
		{
			rop = UnitSymbol::m2Pers;
			return lop;
		}
		if(EnumSymbol == "WPermK")
		{
			rop = UnitSymbol::WPermK;
			return lop;
		}
		if(EnumSymbol == "JPerK")
		{
			rop = UnitSymbol::JPerK;
			return lop;
		}
		if(EnumSymbol == "ppm")
		{
			rop = UnitSymbol::ppm;
			return lop;
		}
		if(EnumSymbol == "rotPers")
		{
			rop = UnitSymbol::rotPers;
			return lop;
		}
		if(EnumSymbol == "radPers")
		{
			rop = UnitSymbol::radPers;
			return lop;
		}
		if(EnumSymbol == "WPerm2")
		{
			rop = UnitSymbol::WPerm2;
			return lop;
		}
		if(EnumSymbol == "JPerm2")
		{
			rop = UnitSymbol::JPerm2;
			return lop;
		}
		if(EnumSymbol == "SPerm")
		{
			rop = UnitSymbol::SPerm;
			return lop;
		}
		if(EnumSymbol == "KPers")
		{
			rop = UnitSymbol::KPers;
			return lop;
		}
		if(EnumSymbol == "PaPers")
		{
			rop = UnitSymbol::PaPers;
			return lop;
		}
		if(EnumSymbol == "JPerkgK")
		{
			rop = UnitSymbol::JPerkgK;
			return lop;
		}
		if(EnumSymbol == "VA")
		{
			rop = UnitSymbol::VA;
			return lop;
		}
		if(EnumSymbol == "VAr")
		{
			rop = UnitSymbol::VAr;
			return lop;
		}
		if(EnumSymbol == "cosPhi")
		{
			rop = UnitSymbol::cosPhi;
			return lop;
		}
		if(EnumSymbol == "Vs")
		{
			rop = UnitSymbol::Vs;
			return lop;
		}
		if(EnumSymbol == "V2")
		{
			rop = UnitSymbol::V2;
			return lop;
		}
		if(EnumSymbol == "As")
		{
			rop = UnitSymbol::As;
			return lop;
		}
		if(EnumSymbol == "A2")
		{
			rop = UnitSymbol::A2;
			return lop;
		}
		if(EnumSymbol == "A2s")
		{
			rop = UnitSymbol::A2s;
			return lop;
		}
		if(EnumSymbol == "VAh")
		{
			rop = UnitSymbol::VAh;
			return lop;
		}
		if(EnumSymbol == "Wh")
		{
			rop = UnitSymbol::Wh;
			return lop;
		}
		if(EnumSymbol == "VArh")
		{
			rop = UnitSymbol::VArh;
			return lop;
		}
		if(EnumSymbol == "VPerHz")
		{
			rop = UnitSymbol::VPerHz;
			return lop;
		}
		if(EnumSymbol == "HzPers")
		{
			rop = UnitSymbol::HzPers;
			return lop;
		}
		if(EnumSymbol == "character")
		{
			rop = UnitSymbol::character;
			return lop;
		}
		if(EnumSymbol == "charPers")
		{
			rop = UnitSymbol::charPers;
			return lop;
		}
		if(EnumSymbol == "kgm2")
		{
			rop = UnitSymbol::kgm2;
			return lop;
		}
		if(EnumSymbol == "dB")
		{
			rop = UnitSymbol::dB;
			return lop;
		}
		if(EnumSymbol == "WPers")
		{
			rop = UnitSymbol::WPers;
			return lop;
		}
		if(EnumSymbol == "lPers")
		{
			rop = UnitSymbol::lPers;
			return lop;
		}
		if(EnumSymbol == "dBm")
		{
			rop = UnitSymbol::dBm;
			return lop;
		}
		if(EnumSymbol == "h")
		{
			rop = UnitSymbol::h;
			return lop;
		}
		if(EnumSymbol == "min")
		{
			rop = UnitSymbol::min;
			return lop;
		}
		if(EnumSymbol == "Q")
		{
			rop = UnitSymbol::Q;
			return lop;
		}
		if(EnumSymbol == "Qh")
		{
			rop = UnitSymbol::Qh;
			return lop;
		}
		if(EnumSymbol == "ohmm")
		{
			rop = UnitSymbol::ohmm;
			return lop;
		}
		if(EnumSymbol == "APerm")
		{
			rop = UnitSymbol::APerm;
			return lop;
		}
		if(EnumSymbol == "V2h")
		{
			rop = UnitSymbol::V2h;
			return lop;
		}
		if(EnumSymbol == "A2h")
		{
			rop = UnitSymbol::A2h;
			return lop;
		}
		if(EnumSymbol == "Ah")
		{
			rop = UnitSymbol::Ah;
			return lop;
		}
		if(EnumSymbol == "count")
		{
			rop = UnitSymbol::count;
			return lop;
		}
		if(EnumSymbol == "ft3")
		{
			rop = UnitSymbol::ft3;
			return lop;
		}
		if(EnumSymbol == "m3Perh")
		{
			rop = UnitSymbol::m3Perh;
			return lop;
		}
		if(EnumSymbol == "gal")
		{
			rop = UnitSymbol::gal;
			return lop;
		}
		if(EnumSymbol == "Btu")
		{
			rop = UnitSymbol::Btu;
			return lop;
		}
		if(EnumSymbol == "l")
		{
			rop = UnitSymbol::l;
			return lop;
		}
		if(EnumSymbol == "lPerh")
		{
			rop = UnitSymbol::lPerh;
			return lop;
		}
		if(EnumSymbol == "lPerl")
		{
			rop = UnitSymbol::lPerl;
			return lop;
		}
		if(EnumSymbol == "gPerg")
		{
			rop = UnitSymbol::gPerg;
			return lop;
		}
		if(EnumSymbol == "molPerm3")
		{
			rop = UnitSymbol::molPerm3;
			return lop;
		}
		if(EnumSymbol == "molPermol")
		{
			rop = UnitSymbol::molPermol;
			return lop;
		}
		if(EnumSymbol == "molPerkg")
		{
			rop = UnitSymbol::molPerkg;
			return lop;
		}
		if(EnumSymbol == "sPers")
		{
			rop = UnitSymbol::sPers;
			return lop;
		}
		if(EnumSymbol == "HzPerHz")
		{
			rop = UnitSymbol::HzPerHz;
			return lop;
		}
		if(EnumSymbol == "VPerV")
		{
			rop = UnitSymbol::VPerV;
			return lop;
		}
		if(EnumSymbol == "APerA")
		{
			rop = UnitSymbol::APerA;
			return lop;
		}
		if(EnumSymbol == "VPerVA")
		{
			rop = UnitSymbol::VPerVA;
			return lop;
		}
		if(EnumSymbol == "rev")
		{
			rop = UnitSymbol::rev;
			return lop;
		}
		if(EnumSymbol == "kat")
		{
			rop = UnitSymbol::kat;
			return lop;
		}
		if(EnumSymbol == "JPerkg")
		{
			rop = UnitSymbol::JPerkg;
			return lop;
		}
		if(EnumSymbol == "m3Uncompensated")
		{
			rop = UnitSymbol::m3Uncompensated;
			return lop;
		}
		if(EnumSymbol == "m3Compensated")
		{
			rop = UnitSymbol::m3Compensated;
			return lop;
		}
		if(EnumSymbol == "WPerW")
		{
			rop = UnitSymbol::WPerW;
			return lop;
		}
		if(EnumSymbol == "therm")
		{
			rop = UnitSymbol::therm;
			return lop;
		}
		if(EnumSymbol == "onePerm")
		{
			rop = UnitSymbol::onePerm;
			return lop;
		}
		if(EnumSymbol == "m3Perkg")
		{
			rop = UnitSymbol::m3Perkg;
			return lop;
		}
		if(EnumSymbol == "Pas")
		{
			rop = UnitSymbol::Pas;
			return lop;
		}
		if(EnumSymbol == "Nm")
		{
			rop = UnitSymbol::Nm;
			return lop;
		}
		if(EnumSymbol == "NPerm")
		{
			rop = UnitSymbol::NPerm;
			return lop;
		}
		if(EnumSymbol == "radPers2")
		{
			rop = UnitSymbol::radPers2;
			return lop;
		}
		if(EnumSymbol == "JPerm3")
		{
			rop = UnitSymbol::JPerm3;
			return lop;
		}
		if(EnumSymbol == "VPerm")
		{
			rop = UnitSymbol::VPerm;
			return lop;
		}
		if(EnumSymbol == "CPerm3")
		{
			rop = UnitSymbol::CPerm3;
			return lop;
		}
		if(EnumSymbol == "CPerm2")
		{
			rop = UnitSymbol::CPerm2;
			return lop;
		}
		if(EnumSymbol == "FPerm")
		{
			rop = UnitSymbol::FPerm;
			return lop;
		}
		if(EnumSymbol == "HPerm")
		{
			rop = UnitSymbol::HPerm;
			return lop;
		}
		if(EnumSymbol == "JPermol")
		{
			rop = UnitSymbol::JPermol;
			return lop;
		}
		if(EnumSymbol == "JPermolK")
		{
			rop = UnitSymbol::JPermolK;
			return lop;
		}
		if(EnumSymbol == "CPerkg")
		{
			rop = UnitSymbol::CPerkg;
			return lop;
		}
		if(EnumSymbol == "GyPers")
		{
			rop = UnitSymbol::GyPers;
			return lop;
		}
		if(EnumSymbol == "WPersr")
		{
			rop = UnitSymbol::WPersr;
			return lop;
		}
		if(EnumSymbol == "WPerm2sr")
		{
			rop = UnitSymbol::WPerm2sr;
			return lop;
		}
		if(EnumSymbol == "katPerm3")
		{
			rop = UnitSymbol::katPerm3;
			return lop;
		}
		if(EnumSymbol == "d")
		{
			rop = UnitSymbol::d;
			return lop;
		}
		if(EnumSymbol == "anglemin")
		{
			rop = UnitSymbol::anglemin;
			return lop;
		}
		if(EnumSymbol == "anglesec")
		{
			rop = UnitSymbol::anglesec;
			return lop;
		}
		if(EnumSymbol == "ha")
		{
			rop = UnitSymbol::ha;
			return lop;
		}
		if(EnumSymbol == "tonne")
		{
			rop = UnitSymbol::tonne;
			return lop;
		}
		if(EnumSymbol == "bar")
		{
			rop = UnitSymbol::bar;
			return lop;
		}
		if(EnumSymbol == "mmHg")
		{
			rop = UnitSymbol::mmHg;
			return lop;
		}
		if(EnumSymbol == "M")
		{
			rop = UnitSymbol::M;
			return lop;
		}
		if(EnumSymbol == "kn")
		{
			rop = UnitSymbol::kn;
			return lop;
		}
		if(EnumSymbol == "Mx")
		{
			rop = UnitSymbol::Mx;
			return lop;
		}
		if(EnumSymbol == "G")
		{
			rop = UnitSymbol::G;
			return lop;
		}
		if(EnumSymbol == "Oe")
		{
			rop = UnitSymbol::Oe;
			return lop;
		}
		if(EnumSymbol == "Vh")
		{
			rop = UnitSymbol::Vh;
			return lop;
		}
		if(EnumSymbol == "WPerA")
		{
			rop = UnitSymbol::WPerA;
			return lop;
		}
		if(EnumSymbol == "onePerHz")
		{
			rop = UnitSymbol::onePerHz;
			return lop;
		}
		if(EnumSymbol == "VPerVAr")
		{
			rop = UnitSymbol::VPerVAr;
			return lop;
		}
		if(EnumSymbol == "ohmPerm")
		{
			rop = UnitSymbol::ohmPerm;
			return lop;
		}
		if(EnumSymbol == "kgPerJ")
		{
			rop = UnitSymbol::kgPerJ;
			return lop;
		}
		if(EnumSymbol == "JPers")
		{
			rop = UnitSymbol::JPers;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const UnitSymbol& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == UnitSymbol::none)
			{
				EnumSymbol = "none";
			}
			if (obj.value == UnitSymbol::m)
			{
				EnumSymbol = "m";
			}
			if (obj.value == UnitSymbol::kg)
			{
				EnumSymbol = "kg";
			}
			if (obj.value == UnitSymbol::s)
			{
				EnumSymbol = "s";
			}
			if (obj.value == UnitSymbol::A)
			{
				EnumSymbol = "A";
			}
			if (obj.value == UnitSymbol::K)
			{
				EnumSymbol = "K";
			}
			if (obj.value == UnitSymbol::mol)
			{
				EnumSymbol = "mol";
			}
			if (obj.value == UnitSymbol::cd)
			{
				EnumSymbol = "cd";
			}
			if (obj.value == UnitSymbol::deg)
			{
				EnumSymbol = "deg";
			}
			if (obj.value == UnitSymbol::rad)
			{
				EnumSymbol = "rad";
			}
			if (obj.value == UnitSymbol::sr)
			{
				EnumSymbol = "sr";
			}
			if (obj.value == UnitSymbol::Gy)
			{
				EnumSymbol = "Gy";
			}
			if (obj.value == UnitSymbol::Bq)
			{
				EnumSymbol = "Bq";
			}
			if (obj.value == UnitSymbol::degC)
			{
				EnumSymbol = "degC";
			}
			if (obj.value == UnitSymbol::Sv)
			{
				EnumSymbol = "Sv";
			}
			if (obj.value == UnitSymbol::F)
			{
				EnumSymbol = "F";
			}
			if (obj.value == UnitSymbol::C)
			{
				EnumSymbol = "C";
			}
			if (obj.value == UnitSymbol::S)
			{
				EnumSymbol = "S";
			}
			if (obj.value == UnitSymbol::H)
			{
				EnumSymbol = "H";
			}
			if (obj.value == UnitSymbol::V)
			{
				EnumSymbol = "V";
			}
			if (obj.value == UnitSymbol::ohm)
			{
				EnumSymbol = "ohm";
			}
			if (obj.value == UnitSymbol::J)
			{
				EnumSymbol = "J";
			}
			if (obj.value == UnitSymbol::N)
			{
				EnumSymbol = "N";
			}
			if (obj.value == UnitSymbol::Hz)
			{
				EnumSymbol = "Hz";
			}
			if (obj.value == UnitSymbol::lx)
			{
				EnumSymbol = "lx";
			}
			if (obj.value == UnitSymbol::lm)
			{
				EnumSymbol = "lm";
			}
			if (obj.value == UnitSymbol::Wb)
			{
				EnumSymbol = "Wb";
			}
			if (obj.value == UnitSymbol::T)
			{
				EnumSymbol = "T";
			}
			if (obj.value == UnitSymbol::W)
			{
				EnumSymbol = "W";
			}
			if (obj.value == UnitSymbol::Pa)
			{
				EnumSymbol = "Pa";
			}
			if (obj.value == UnitSymbol::m2)
			{
				EnumSymbol = "m2";
			}
			if (obj.value == UnitSymbol::m3)
			{
				EnumSymbol = "m3";
			}
			if (obj.value == UnitSymbol::mPers)
			{
				EnumSymbol = "mPers";
			}
			if (obj.value == UnitSymbol::mPers2)
			{
				EnumSymbol = "mPers2";
			}
			if (obj.value == UnitSymbol::m3Pers)
			{
				EnumSymbol = "m3Pers";
			}
			if (obj.value == UnitSymbol::mPerm3)
			{
				EnumSymbol = "mPerm3";
			}
			if (obj.value == UnitSymbol::kgm)
			{
				EnumSymbol = "kgm";
			}
			if (obj.value == UnitSymbol::kgPerm3)
			{
				EnumSymbol = "kgPerm3";
			}
			if (obj.value == UnitSymbol::m2Pers)
			{
				EnumSymbol = "m2Pers";
			}
			if (obj.value == UnitSymbol::WPermK)
			{
				EnumSymbol = "WPermK";
			}
			if (obj.value == UnitSymbol::JPerK)
			{
				EnumSymbol = "JPerK";
			}
			if (obj.value == UnitSymbol::ppm)
			{
				EnumSymbol = "ppm";
			}
			if (obj.value == UnitSymbol::rotPers)
			{
				EnumSymbol = "rotPers";
			}
			if (obj.value == UnitSymbol::radPers)
			{
				EnumSymbol = "radPers";
			}
			if (obj.value == UnitSymbol::WPerm2)
			{
				EnumSymbol = "WPerm2";
			}
			if (obj.value == UnitSymbol::JPerm2)
			{
				EnumSymbol = "JPerm2";
			}
			if (obj.value == UnitSymbol::SPerm)
			{
				EnumSymbol = "SPerm";
			}
			if (obj.value == UnitSymbol::KPers)
			{
				EnumSymbol = "KPers";
			}
			if (obj.value == UnitSymbol::PaPers)
			{
				EnumSymbol = "PaPers";
			}
			if (obj.value == UnitSymbol::JPerkgK)
			{
				EnumSymbol = "JPerkgK";
			}
			if (obj.value == UnitSymbol::VA)
			{
				EnumSymbol = "VA";
			}
			if (obj.value == UnitSymbol::VAr)
			{
				EnumSymbol = "VAr";
			}
			if (obj.value == UnitSymbol::cosPhi)
			{
				EnumSymbol = "cosPhi";
			}
			if (obj.value == UnitSymbol::Vs)
			{
				EnumSymbol = "Vs";
			}
			if (obj.value == UnitSymbol::V2)
			{
				EnumSymbol = "V2";
			}
			if (obj.value == UnitSymbol::As)
			{
				EnumSymbol = "As";
			}
			if (obj.value == UnitSymbol::A2)
			{
				EnumSymbol = "A2";
			}
			if (obj.value == UnitSymbol::A2s)
			{
				EnumSymbol = "A2s";
			}
			if (obj.value == UnitSymbol::VAh)
			{
				EnumSymbol = "VAh";
			}
			if (obj.value == UnitSymbol::Wh)
			{
				EnumSymbol = "Wh";
			}
			if (obj.value == UnitSymbol::VArh)
			{
				EnumSymbol = "VArh";
			}
			if (obj.value == UnitSymbol::VPerHz)
			{
				EnumSymbol = "VPerHz";
			}
			if (obj.value == UnitSymbol::HzPers)
			{
				EnumSymbol = "HzPers";
			}
			if (obj.value == UnitSymbol::character)
			{
				EnumSymbol = "character";
			}
			if (obj.value == UnitSymbol::charPers)
			{
				EnumSymbol = "charPers";
			}
			if (obj.value == UnitSymbol::kgm2)
			{
				EnumSymbol = "kgm2";
			}
			if (obj.value == UnitSymbol::dB)
			{
				EnumSymbol = "dB";
			}
			if (obj.value == UnitSymbol::WPers)
			{
				EnumSymbol = "WPers";
			}
			if (obj.value == UnitSymbol::lPers)
			{
				EnumSymbol = "lPers";
			}
			if (obj.value == UnitSymbol::dBm)
			{
				EnumSymbol = "dBm";
			}
			if (obj.value == UnitSymbol::h)
			{
				EnumSymbol = "h";
			}
			if (obj.value == UnitSymbol::min)
			{
				EnumSymbol = "min";
			}
			if (obj.value == UnitSymbol::Q)
			{
				EnumSymbol = "Q";
			}
			if (obj.value == UnitSymbol::Qh)
			{
				EnumSymbol = "Qh";
			}
			if (obj.value == UnitSymbol::ohmm)
			{
				EnumSymbol = "ohmm";
			}
			if (obj.value == UnitSymbol::APerm)
			{
				EnumSymbol = "APerm";
			}
			if (obj.value == UnitSymbol::V2h)
			{
				EnumSymbol = "V2h";
			}
			if (obj.value == UnitSymbol::A2h)
			{
				EnumSymbol = "A2h";
			}
			if (obj.value == UnitSymbol::Ah)
			{
				EnumSymbol = "Ah";
			}
			if (obj.value == UnitSymbol::count)
			{
				EnumSymbol = "count";
			}
			if (obj.value == UnitSymbol::ft3)
			{
				EnumSymbol = "ft3";
			}
			if (obj.value == UnitSymbol::m3Perh)
			{
				EnumSymbol = "m3Perh";
			}
			if (obj.value == UnitSymbol::gal)
			{
				EnumSymbol = "gal";
			}
			if (obj.value == UnitSymbol::Btu)
			{
				EnumSymbol = "Btu";
			}
			if (obj.value == UnitSymbol::l)
			{
				EnumSymbol = "l";
			}
			if (obj.value == UnitSymbol::lPerh)
			{
				EnumSymbol = "lPerh";
			}
			if (obj.value == UnitSymbol::lPerl)
			{
				EnumSymbol = "lPerl";
			}
			if (obj.value == UnitSymbol::gPerg)
			{
				EnumSymbol = "gPerg";
			}
			if (obj.value == UnitSymbol::molPerm3)
			{
				EnumSymbol = "molPerm3";
			}
			if (obj.value == UnitSymbol::molPermol)
			{
				EnumSymbol = "molPermol";
			}
			if (obj.value == UnitSymbol::molPerkg)
			{
				EnumSymbol = "molPerkg";
			}
			if (obj.value == UnitSymbol::sPers)
			{
				EnumSymbol = "sPers";
			}
			if (obj.value == UnitSymbol::HzPerHz)
			{
				EnumSymbol = "HzPerHz";
			}
			if (obj.value == UnitSymbol::VPerV)
			{
				EnumSymbol = "VPerV";
			}
			if (obj.value == UnitSymbol::APerA)
			{
				EnumSymbol = "APerA";
			}
			if (obj.value == UnitSymbol::VPerVA)
			{
				EnumSymbol = "VPerVA";
			}
			if (obj.value == UnitSymbol::rev)
			{
				EnumSymbol = "rev";
			}
			if (obj.value == UnitSymbol::kat)
			{
				EnumSymbol = "kat";
			}
			if (obj.value == UnitSymbol::JPerkg)
			{
				EnumSymbol = "JPerkg";
			}
			if (obj.value == UnitSymbol::m3Uncompensated)
			{
				EnumSymbol = "m3Uncompensated";
			}
			if (obj.value == UnitSymbol::m3Compensated)
			{
				EnumSymbol = "m3Compensated";
			}
			if (obj.value == UnitSymbol::WPerW)
			{
				EnumSymbol = "WPerW";
			}
			if (obj.value == UnitSymbol::therm)
			{
				EnumSymbol = "therm";
			}
			if (obj.value == UnitSymbol::onePerm)
			{
				EnumSymbol = "onePerm";
			}
			if (obj.value == UnitSymbol::m3Perkg)
			{
				EnumSymbol = "m3Perkg";
			}
			if (obj.value == UnitSymbol::Pas)
			{
				EnumSymbol = "Pas";
			}
			if (obj.value == UnitSymbol::Nm)
			{
				EnumSymbol = "Nm";
			}
			if (obj.value == UnitSymbol::NPerm)
			{
				EnumSymbol = "NPerm";
			}
			if (obj.value == UnitSymbol::radPers2)
			{
				EnumSymbol = "radPers2";
			}
			if (obj.value == UnitSymbol::JPerm3)
			{
				EnumSymbol = "JPerm3";
			}
			if (obj.value == UnitSymbol::VPerm)
			{
				EnumSymbol = "VPerm";
			}
			if (obj.value == UnitSymbol::CPerm3)
			{
				EnumSymbol = "CPerm3";
			}
			if (obj.value == UnitSymbol::CPerm2)
			{
				EnumSymbol = "CPerm2";
			}
			if (obj.value == UnitSymbol::FPerm)
			{
				EnumSymbol = "FPerm";
			}
			if (obj.value == UnitSymbol::HPerm)
			{
				EnumSymbol = "HPerm";
			}
			if (obj.value == UnitSymbol::JPermol)
			{
				EnumSymbol = "JPermol";
			}
			if (obj.value == UnitSymbol::JPermolK)
			{
				EnumSymbol = "JPermolK";
			}
			if (obj.value == UnitSymbol::CPerkg)
			{
				EnumSymbol = "CPerkg";
			}
			if (obj.value == UnitSymbol::GyPers)
			{
				EnumSymbol = "GyPers";
			}
			if (obj.value == UnitSymbol::WPersr)
			{
				EnumSymbol = "WPersr";
			}
			if (obj.value == UnitSymbol::WPerm2sr)
			{
				EnumSymbol = "WPerm2sr";
			}
			if (obj.value == UnitSymbol::katPerm3)
			{
				EnumSymbol = "katPerm3";
			}
			if (obj.value == UnitSymbol::d)
			{
				EnumSymbol = "d";
			}
			if (obj.value == UnitSymbol::anglemin)
			{
				EnumSymbol = "anglemin";
			}
			if (obj.value == UnitSymbol::anglesec)
			{
				EnumSymbol = "anglesec";
			}
			if (obj.value == UnitSymbol::ha)
			{
				EnumSymbol = "ha";
			}
			if (obj.value == UnitSymbol::tonne)
			{
				EnumSymbol = "tonne";
			}
			if (obj.value == UnitSymbol::bar)
			{
				EnumSymbol = "bar";
			}
			if (obj.value == UnitSymbol::mmHg)
			{
				EnumSymbol = "mmHg";
			}
			if (obj.value == UnitSymbol::M)
			{
				EnumSymbol = "M";
			}
			if (obj.value == UnitSymbol::kn)
			{
				EnumSymbol = "kn";
			}
			if (obj.value == UnitSymbol::Mx)
			{
				EnumSymbol = "Mx";
			}
			if (obj.value == UnitSymbol::G)
			{
				EnumSymbol = "G";
			}
			if (obj.value == UnitSymbol::Oe)
			{
				EnumSymbol = "Oe";
			}
			if (obj.value == UnitSymbol::Vh)
			{
				EnumSymbol = "Vh";
			}
			if (obj.value == UnitSymbol::WPerA)
			{
				EnumSymbol = "WPerA";
			}
			if (obj.value == UnitSymbol::onePerHz)
			{
				EnumSymbol = "onePerHz";
			}
			if (obj.value == UnitSymbol::VPerVAr)
			{
				EnumSymbol = "VPerVAr";
			}
			if (obj.value == UnitSymbol::ohmPerm)
			{
				EnumSymbol = "ohmPerm";
			}
			if (obj.value == UnitSymbol::kgPerJ)
			{
				EnumSymbol = "kgPerJ";
			}
			if (obj.value == UnitSymbol::JPers)
			{
				EnumSymbol = "JPers";
			}

			if (!EnumSymbol.empty())
			{
				os << "UnitSymbol." << EnumSymbol;
			}
		}
		return os;
	}
}
