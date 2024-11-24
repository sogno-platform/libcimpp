/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Currency.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Currency& Currency::operator=(Currency_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Currency::operator Currency_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Currency::debugName[] = "Currency";
const char* Currency::debugString() const
{
	return Currency::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Currency& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "Currency")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "AED")
		{
			rop = Currency::AED;
			return lop;
		}
		if(EnumSymbol == "AFN")
		{
			rop = Currency::AFN;
			return lop;
		}
		if(EnumSymbol == "ALL")
		{
			rop = Currency::ALL;
			return lop;
		}
		if(EnumSymbol == "AMD")
		{
			rop = Currency::AMD;
			return lop;
		}
		if(EnumSymbol == "ANG")
		{
			rop = Currency::ANG;
			return lop;
		}
		if(EnumSymbol == "AOA")
		{
			rop = Currency::AOA;
			return lop;
		}
		if(EnumSymbol == "ARS")
		{
			rop = Currency::ARS;
			return lop;
		}
		if(EnumSymbol == "AUD")
		{
			rop = Currency::AUD;
			return lop;
		}
		if(EnumSymbol == "AWG")
		{
			rop = Currency::AWG;
			return lop;
		}
		if(EnumSymbol == "AZN")
		{
			rop = Currency::AZN;
			return lop;
		}
		if(EnumSymbol == "BAM")
		{
			rop = Currency::BAM;
			return lop;
		}
		if(EnumSymbol == "BBD")
		{
			rop = Currency::BBD;
			return lop;
		}
		if(EnumSymbol == "BDT")
		{
			rop = Currency::BDT;
			return lop;
		}
		if(EnumSymbol == "BGN")
		{
			rop = Currency::BGN;
			return lop;
		}
		if(EnumSymbol == "BHD")
		{
			rop = Currency::BHD;
			return lop;
		}
		if(EnumSymbol == "BIF")
		{
			rop = Currency::BIF;
			return lop;
		}
		if(EnumSymbol == "BMD")
		{
			rop = Currency::BMD;
			return lop;
		}
		if(EnumSymbol == "BND")
		{
			rop = Currency::BND;
			return lop;
		}
		if(EnumSymbol == "BOB")
		{
			rop = Currency::BOB;
			return lop;
		}
		if(EnumSymbol == "BOV")
		{
			rop = Currency::BOV;
			return lop;
		}
		if(EnumSymbol == "BRL")
		{
			rop = Currency::BRL;
			return lop;
		}
		if(EnumSymbol == "BSD")
		{
			rop = Currency::BSD;
			return lop;
		}
		if(EnumSymbol == "BTN")
		{
			rop = Currency::BTN;
			return lop;
		}
		if(EnumSymbol == "BWP")
		{
			rop = Currency::BWP;
			return lop;
		}
		if(EnumSymbol == "BYR")
		{
			rop = Currency::BYR;
			return lop;
		}
		if(EnumSymbol == "BZD")
		{
			rop = Currency::BZD;
			return lop;
		}
		if(EnumSymbol == "CAD")
		{
			rop = Currency::CAD;
			return lop;
		}
		if(EnumSymbol == "CDF")
		{
			rop = Currency::CDF;
			return lop;
		}
		if(EnumSymbol == "CHF")
		{
			rop = Currency::CHF;
			return lop;
		}
		if(EnumSymbol == "CLF")
		{
			rop = Currency::CLF;
			return lop;
		}
		if(EnumSymbol == "CLP")
		{
			rop = Currency::CLP;
			return lop;
		}
		if(EnumSymbol == "CNY")
		{
			rop = Currency::CNY;
			return lop;
		}
		if(EnumSymbol == "COP")
		{
			rop = Currency::COP;
			return lop;
		}
		if(EnumSymbol == "COU")
		{
			rop = Currency::COU;
			return lop;
		}
		if(EnumSymbol == "CRC")
		{
			rop = Currency::CRC;
			return lop;
		}
		if(EnumSymbol == "CUC")
		{
			rop = Currency::CUC;
			return lop;
		}
		if(EnumSymbol == "CUP")
		{
			rop = Currency::CUP;
			return lop;
		}
		if(EnumSymbol == "CVE")
		{
			rop = Currency::CVE;
			return lop;
		}
		if(EnumSymbol == "CZK")
		{
			rop = Currency::CZK;
			return lop;
		}
		if(EnumSymbol == "DJF")
		{
			rop = Currency::DJF;
			return lop;
		}
		if(EnumSymbol == "DKK")
		{
			rop = Currency::DKK;
			return lop;
		}
		if(EnumSymbol == "DOP")
		{
			rop = Currency::DOP;
			return lop;
		}
		if(EnumSymbol == "DZD")
		{
			rop = Currency::DZD;
			return lop;
		}
		if(EnumSymbol == "EEK")
		{
			rop = Currency::EEK;
			return lop;
		}
		if(EnumSymbol == "EGP")
		{
			rop = Currency::EGP;
			return lop;
		}
		if(EnumSymbol == "ERN")
		{
			rop = Currency::ERN;
			return lop;
		}
		if(EnumSymbol == "ETB")
		{
			rop = Currency::ETB;
			return lop;
		}
		if(EnumSymbol == "EUR")
		{
			rop = Currency::EUR;
			return lop;
		}
		if(EnumSymbol == "FJD")
		{
			rop = Currency::FJD;
			return lop;
		}
		if(EnumSymbol == "FKP")
		{
			rop = Currency::FKP;
			return lop;
		}
		if(EnumSymbol == "GBP")
		{
			rop = Currency::GBP;
			return lop;
		}
		if(EnumSymbol == "GEL")
		{
			rop = Currency::GEL;
			return lop;
		}
		if(EnumSymbol == "GHS")
		{
			rop = Currency::GHS;
			return lop;
		}
		if(EnumSymbol == "GIP")
		{
			rop = Currency::GIP;
			return lop;
		}
		if(EnumSymbol == "GMD")
		{
			rop = Currency::GMD;
			return lop;
		}
		if(EnumSymbol == "GNF")
		{
			rop = Currency::GNF;
			return lop;
		}
		if(EnumSymbol == "GTQ")
		{
			rop = Currency::GTQ;
			return lop;
		}
		if(EnumSymbol == "GYD")
		{
			rop = Currency::GYD;
			return lop;
		}
		if(EnumSymbol == "HKD")
		{
			rop = Currency::HKD;
			return lop;
		}
		if(EnumSymbol == "HNL")
		{
			rop = Currency::HNL;
			return lop;
		}
		if(EnumSymbol == "HRK")
		{
			rop = Currency::HRK;
			return lop;
		}
		if(EnumSymbol == "HTG")
		{
			rop = Currency::HTG;
			return lop;
		}
		if(EnumSymbol == "HUF")
		{
			rop = Currency::HUF;
			return lop;
		}
		if(EnumSymbol == "IDR")
		{
			rop = Currency::IDR;
			return lop;
		}
		if(EnumSymbol == "ILS")
		{
			rop = Currency::ILS;
			return lop;
		}
		if(EnumSymbol == "INR")
		{
			rop = Currency::INR;
			return lop;
		}
		if(EnumSymbol == "IQD")
		{
			rop = Currency::IQD;
			return lop;
		}
		if(EnumSymbol == "IRR")
		{
			rop = Currency::IRR;
			return lop;
		}
		if(EnumSymbol == "ISK")
		{
			rop = Currency::ISK;
			return lop;
		}
		if(EnumSymbol == "JMD")
		{
			rop = Currency::JMD;
			return lop;
		}
		if(EnumSymbol == "JOD")
		{
			rop = Currency::JOD;
			return lop;
		}
		if(EnumSymbol == "JPY")
		{
			rop = Currency::JPY;
			return lop;
		}
		if(EnumSymbol == "KES")
		{
			rop = Currency::KES;
			return lop;
		}
		if(EnumSymbol == "KGS")
		{
			rop = Currency::KGS;
			return lop;
		}
		if(EnumSymbol == "KHR")
		{
			rop = Currency::KHR;
			return lop;
		}
		if(EnumSymbol == "KMF")
		{
			rop = Currency::KMF;
			return lop;
		}
		if(EnumSymbol == "KPW")
		{
			rop = Currency::KPW;
			return lop;
		}
		if(EnumSymbol == "KRW")
		{
			rop = Currency::KRW;
			return lop;
		}
		if(EnumSymbol == "KWD")
		{
			rop = Currency::KWD;
			return lop;
		}
		if(EnumSymbol == "KYD")
		{
			rop = Currency::KYD;
			return lop;
		}
		if(EnumSymbol == "KZT")
		{
			rop = Currency::KZT;
			return lop;
		}
		if(EnumSymbol == "LAK")
		{
			rop = Currency::LAK;
			return lop;
		}
		if(EnumSymbol == "LBP")
		{
			rop = Currency::LBP;
			return lop;
		}
		if(EnumSymbol == "LKR")
		{
			rop = Currency::LKR;
			return lop;
		}
		if(EnumSymbol == "LRD")
		{
			rop = Currency::LRD;
			return lop;
		}
		if(EnumSymbol == "LSL")
		{
			rop = Currency::LSL;
			return lop;
		}
		if(EnumSymbol == "LTL")
		{
			rop = Currency::LTL;
			return lop;
		}
		if(EnumSymbol == "LVL")
		{
			rop = Currency::LVL;
			return lop;
		}
		if(EnumSymbol == "LYD")
		{
			rop = Currency::LYD;
			return lop;
		}
		if(EnumSymbol == "MAD")
		{
			rop = Currency::MAD;
			return lop;
		}
		if(EnumSymbol == "MDL")
		{
			rop = Currency::MDL;
			return lop;
		}
		if(EnumSymbol == "MGA")
		{
			rop = Currency::MGA;
			return lop;
		}
		if(EnumSymbol == "MKD")
		{
			rop = Currency::MKD;
			return lop;
		}
		if(EnumSymbol == "MMK")
		{
			rop = Currency::MMK;
			return lop;
		}
		if(EnumSymbol == "MNT")
		{
			rop = Currency::MNT;
			return lop;
		}
		if(EnumSymbol == "MOP")
		{
			rop = Currency::MOP;
			return lop;
		}
		if(EnumSymbol == "MRO")
		{
			rop = Currency::MRO;
			return lop;
		}
		if(EnumSymbol == "MUR")
		{
			rop = Currency::MUR;
			return lop;
		}
		if(EnumSymbol == "MVR")
		{
			rop = Currency::MVR;
			return lop;
		}
		if(EnumSymbol == "MWK")
		{
			rop = Currency::MWK;
			return lop;
		}
		if(EnumSymbol == "MXN")
		{
			rop = Currency::MXN;
			return lop;
		}
		if(EnumSymbol == "MYR")
		{
			rop = Currency::MYR;
			return lop;
		}
		if(EnumSymbol == "MZN")
		{
			rop = Currency::MZN;
			return lop;
		}
		if(EnumSymbol == "NAD")
		{
			rop = Currency::NAD;
			return lop;
		}
		if(EnumSymbol == "NGN")
		{
			rop = Currency::NGN;
			return lop;
		}
		if(EnumSymbol == "NIO")
		{
			rop = Currency::NIO;
			return lop;
		}
		if(EnumSymbol == "NOK")
		{
			rop = Currency::NOK;
			return lop;
		}
		if(EnumSymbol == "NPR")
		{
			rop = Currency::NPR;
			return lop;
		}
		if(EnumSymbol == "NZD")
		{
			rop = Currency::NZD;
			return lop;
		}
		if(EnumSymbol == "OMR")
		{
			rop = Currency::OMR;
			return lop;
		}
		if(EnumSymbol == "PAB")
		{
			rop = Currency::PAB;
			return lop;
		}
		if(EnumSymbol == "PEN")
		{
			rop = Currency::PEN;
			return lop;
		}
		if(EnumSymbol == "PGK")
		{
			rop = Currency::PGK;
			return lop;
		}
		if(EnumSymbol == "PHP")
		{
			rop = Currency::PHP;
			return lop;
		}
		if(EnumSymbol == "PKR")
		{
			rop = Currency::PKR;
			return lop;
		}
		if(EnumSymbol == "PLN")
		{
			rop = Currency::PLN;
			return lop;
		}
		if(EnumSymbol == "PYG")
		{
			rop = Currency::PYG;
			return lop;
		}
		if(EnumSymbol == "QAR")
		{
			rop = Currency::QAR;
			return lop;
		}
		if(EnumSymbol == "RON")
		{
			rop = Currency::RON;
			return lop;
		}
		if(EnumSymbol == "RSD")
		{
			rop = Currency::RSD;
			return lop;
		}
		if(EnumSymbol == "RUB")
		{
			rop = Currency::RUB;
			return lop;
		}
		if(EnumSymbol == "RWF")
		{
			rop = Currency::RWF;
			return lop;
		}
		if(EnumSymbol == "SAR")
		{
			rop = Currency::SAR;
			return lop;
		}
		if(EnumSymbol == "SBD")
		{
			rop = Currency::SBD;
			return lop;
		}
		if(EnumSymbol == "SCR")
		{
			rop = Currency::SCR;
			return lop;
		}
		if(EnumSymbol == "SDG")
		{
			rop = Currency::SDG;
			return lop;
		}
		if(EnumSymbol == "SEK")
		{
			rop = Currency::SEK;
			return lop;
		}
		if(EnumSymbol == "SGD")
		{
			rop = Currency::SGD;
			return lop;
		}
		if(EnumSymbol == "SHP")
		{
			rop = Currency::SHP;
			return lop;
		}
		if(EnumSymbol == "SLL")
		{
			rop = Currency::SLL;
			return lop;
		}
		if(EnumSymbol == "SOS")
		{
			rop = Currency::SOS;
			return lop;
		}
		if(EnumSymbol == "SRD")
		{
			rop = Currency::SRD;
			return lop;
		}
		if(EnumSymbol == "STD")
		{
			rop = Currency::STD;
			return lop;
		}
		if(EnumSymbol == "SYP")
		{
			rop = Currency::SYP;
			return lop;
		}
		if(EnumSymbol == "SZL")
		{
			rop = Currency::SZL;
			return lop;
		}
		if(EnumSymbol == "THB")
		{
			rop = Currency::THB;
			return lop;
		}
		if(EnumSymbol == "TJS")
		{
			rop = Currency::TJS;
			return lop;
		}
		if(EnumSymbol == "TMT")
		{
			rop = Currency::TMT;
			return lop;
		}
		if(EnumSymbol == "TND")
		{
			rop = Currency::TND;
			return lop;
		}
		if(EnumSymbol == "TOP")
		{
			rop = Currency::TOP;
			return lop;
		}
		if(EnumSymbol == "TRY")
		{
			rop = Currency::TRY;
			return lop;
		}
		if(EnumSymbol == "TTD")
		{
			rop = Currency::TTD;
			return lop;
		}
		if(EnumSymbol == "TWD")
		{
			rop = Currency::TWD;
			return lop;
		}
		if(EnumSymbol == "TZS")
		{
			rop = Currency::TZS;
			return lop;
		}
		if(EnumSymbol == "UAH")
		{
			rop = Currency::UAH;
			return lop;
		}
		if(EnumSymbol == "UGX")
		{
			rop = Currency::UGX;
			return lop;
		}
		if(EnumSymbol == "USD")
		{
			rop = Currency::USD;
			return lop;
		}
		if(EnumSymbol == "UYU")
		{
			rop = Currency::UYU;
			return lop;
		}
		if(EnumSymbol == "UZS")
		{
			rop = Currency::UZS;
			return lop;
		}
		if(EnumSymbol == "VEF")
		{
			rop = Currency::VEF;
			return lop;
		}
		if(EnumSymbol == "VND")
		{
			rop = Currency::VND;
			return lop;
		}
		if(EnumSymbol == "VUV")
		{
			rop = Currency::VUV;
			return lop;
		}
		if(EnumSymbol == "WST")
		{
			rop = Currency::WST;
			return lop;
		}
		if(EnumSymbol == "XAF")
		{
			rop = Currency::XAF;
			return lop;
		}
		if(EnumSymbol == "XCD")
		{
			rop = Currency::XCD;
			return lop;
		}
		if(EnumSymbol == "XOF")
		{
			rop = Currency::XOF;
			return lop;
		}
		if(EnumSymbol == "XPF")
		{
			rop = Currency::XPF;
			return lop;
		}
		if(EnumSymbol == "YER")
		{
			rop = Currency::YER;
			return lop;
		}
		if(EnumSymbol == "ZAR")
		{
			rop = Currency::ZAR;
			return lop;
		}
		if(EnumSymbol == "ZMK")
		{
			rop = Currency::ZMK;
			return lop;
		}
		if(EnumSymbol == "ZWL")
		{
			rop = Currency::ZWL;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Currency& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == Currency::AED)
			{
				EnumSymbol = "AED";
			}
			if (obj.value == Currency::AFN)
			{
				EnumSymbol = "AFN";
			}
			if (obj.value == Currency::ALL)
			{
				EnumSymbol = "ALL";
			}
			if (obj.value == Currency::AMD)
			{
				EnumSymbol = "AMD";
			}
			if (obj.value == Currency::ANG)
			{
				EnumSymbol = "ANG";
			}
			if (obj.value == Currency::AOA)
			{
				EnumSymbol = "AOA";
			}
			if (obj.value == Currency::ARS)
			{
				EnumSymbol = "ARS";
			}
			if (obj.value == Currency::AUD)
			{
				EnumSymbol = "AUD";
			}
			if (obj.value == Currency::AWG)
			{
				EnumSymbol = "AWG";
			}
			if (obj.value == Currency::AZN)
			{
				EnumSymbol = "AZN";
			}
			if (obj.value == Currency::BAM)
			{
				EnumSymbol = "BAM";
			}
			if (obj.value == Currency::BBD)
			{
				EnumSymbol = "BBD";
			}
			if (obj.value == Currency::BDT)
			{
				EnumSymbol = "BDT";
			}
			if (obj.value == Currency::BGN)
			{
				EnumSymbol = "BGN";
			}
			if (obj.value == Currency::BHD)
			{
				EnumSymbol = "BHD";
			}
			if (obj.value == Currency::BIF)
			{
				EnumSymbol = "BIF";
			}
			if (obj.value == Currency::BMD)
			{
				EnumSymbol = "BMD";
			}
			if (obj.value == Currency::BND)
			{
				EnumSymbol = "BND";
			}
			if (obj.value == Currency::BOB)
			{
				EnumSymbol = "BOB";
			}
			if (obj.value == Currency::BOV)
			{
				EnumSymbol = "BOV";
			}
			if (obj.value == Currency::BRL)
			{
				EnumSymbol = "BRL";
			}
			if (obj.value == Currency::BSD)
			{
				EnumSymbol = "BSD";
			}
			if (obj.value == Currency::BTN)
			{
				EnumSymbol = "BTN";
			}
			if (obj.value == Currency::BWP)
			{
				EnumSymbol = "BWP";
			}
			if (obj.value == Currency::BYR)
			{
				EnumSymbol = "BYR";
			}
			if (obj.value == Currency::BZD)
			{
				EnumSymbol = "BZD";
			}
			if (obj.value == Currency::CAD)
			{
				EnumSymbol = "CAD";
			}
			if (obj.value == Currency::CDF)
			{
				EnumSymbol = "CDF";
			}
			if (obj.value == Currency::CHF)
			{
				EnumSymbol = "CHF";
			}
			if (obj.value == Currency::CLF)
			{
				EnumSymbol = "CLF";
			}
			if (obj.value == Currency::CLP)
			{
				EnumSymbol = "CLP";
			}
			if (obj.value == Currency::CNY)
			{
				EnumSymbol = "CNY";
			}
			if (obj.value == Currency::COP)
			{
				EnumSymbol = "COP";
			}
			if (obj.value == Currency::COU)
			{
				EnumSymbol = "COU";
			}
			if (obj.value == Currency::CRC)
			{
				EnumSymbol = "CRC";
			}
			if (obj.value == Currency::CUC)
			{
				EnumSymbol = "CUC";
			}
			if (obj.value == Currency::CUP)
			{
				EnumSymbol = "CUP";
			}
			if (obj.value == Currency::CVE)
			{
				EnumSymbol = "CVE";
			}
			if (obj.value == Currency::CZK)
			{
				EnumSymbol = "CZK";
			}
			if (obj.value == Currency::DJF)
			{
				EnumSymbol = "DJF";
			}
			if (obj.value == Currency::DKK)
			{
				EnumSymbol = "DKK";
			}
			if (obj.value == Currency::DOP)
			{
				EnumSymbol = "DOP";
			}
			if (obj.value == Currency::DZD)
			{
				EnumSymbol = "DZD";
			}
			if (obj.value == Currency::EEK)
			{
				EnumSymbol = "EEK";
			}
			if (obj.value == Currency::EGP)
			{
				EnumSymbol = "EGP";
			}
			if (obj.value == Currency::ERN)
			{
				EnumSymbol = "ERN";
			}
			if (obj.value == Currency::ETB)
			{
				EnumSymbol = "ETB";
			}
			if (obj.value == Currency::EUR)
			{
				EnumSymbol = "EUR";
			}
			if (obj.value == Currency::FJD)
			{
				EnumSymbol = "FJD";
			}
			if (obj.value == Currency::FKP)
			{
				EnumSymbol = "FKP";
			}
			if (obj.value == Currency::GBP)
			{
				EnumSymbol = "GBP";
			}
			if (obj.value == Currency::GEL)
			{
				EnumSymbol = "GEL";
			}
			if (obj.value == Currency::GHS)
			{
				EnumSymbol = "GHS";
			}
			if (obj.value == Currency::GIP)
			{
				EnumSymbol = "GIP";
			}
			if (obj.value == Currency::GMD)
			{
				EnumSymbol = "GMD";
			}
			if (obj.value == Currency::GNF)
			{
				EnumSymbol = "GNF";
			}
			if (obj.value == Currency::GTQ)
			{
				EnumSymbol = "GTQ";
			}
			if (obj.value == Currency::GYD)
			{
				EnumSymbol = "GYD";
			}
			if (obj.value == Currency::HKD)
			{
				EnumSymbol = "HKD";
			}
			if (obj.value == Currency::HNL)
			{
				EnumSymbol = "HNL";
			}
			if (obj.value == Currency::HRK)
			{
				EnumSymbol = "HRK";
			}
			if (obj.value == Currency::HTG)
			{
				EnumSymbol = "HTG";
			}
			if (obj.value == Currency::HUF)
			{
				EnumSymbol = "HUF";
			}
			if (obj.value == Currency::IDR)
			{
				EnumSymbol = "IDR";
			}
			if (obj.value == Currency::ILS)
			{
				EnumSymbol = "ILS";
			}
			if (obj.value == Currency::INR)
			{
				EnumSymbol = "INR";
			}
			if (obj.value == Currency::IQD)
			{
				EnumSymbol = "IQD";
			}
			if (obj.value == Currency::IRR)
			{
				EnumSymbol = "IRR";
			}
			if (obj.value == Currency::ISK)
			{
				EnumSymbol = "ISK";
			}
			if (obj.value == Currency::JMD)
			{
				EnumSymbol = "JMD";
			}
			if (obj.value == Currency::JOD)
			{
				EnumSymbol = "JOD";
			}
			if (obj.value == Currency::JPY)
			{
				EnumSymbol = "JPY";
			}
			if (obj.value == Currency::KES)
			{
				EnumSymbol = "KES";
			}
			if (obj.value == Currency::KGS)
			{
				EnumSymbol = "KGS";
			}
			if (obj.value == Currency::KHR)
			{
				EnumSymbol = "KHR";
			}
			if (obj.value == Currency::KMF)
			{
				EnumSymbol = "KMF";
			}
			if (obj.value == Currency::KPW)
			{
				EnumSymbol = "KPW";
			}
			if (obj.value == Currency::KRW)
			{
				EnumSymbol = "KRW";
			}
			if (obj.value == Currency::KWD)
			{
				EnumSymbol = "KWD";
			}
			if (obj.value == Currency::KYD)
			{
				EnumSymbol = "KYD";
			}
			if (obj.value == Currency::KZT)
			{
				EnumSymbol = "KZT";
			}
			if (obj.value == Currency::LAK)
			{
				EnumSymbol = "LAK";
			}
			if (obj.value == Currency::LBP)
			{
				EnumSymbol = "LBP";
			}
			if (obj.value == Currency::LKR)
			{
				EnumSymbol = "LKR";
			}
			if (obj.value == Currency::LRD)
			{
				EnumSymbol = "LRD";
			}
			if (obj.value == Currency::LSL)
			{
				EnumSymbol = "LSL";
			}
			if (obj.value == Currency::LTL)
			{
				EnumSymbol = "LTL";
			}
			if (obj.value == Currency::LVL)
			{
				EnumSymbol = "LVL";
			}
			if (obj.value == Currency::LYD)
			{
				EnumSymbol = "LYD";
			}
			if (obj.value == Currency::MAD)
			{
				EnumSymbol = "MAD";
			}
			if (obj.value == Currency::MDL)
			{
				EnumSymbol = "MDL";
			}
			if (obj.value == Currency::MGA)
			{
				EnumSymbol = "MGA";
			}
			if (obj.value == Currency::MKD)
			{
				EnumSymbol = "MKD";
			}
			if (obj.value == Currency::MMK)
			{
				EnumSymbol = "MMK";
			}
			if (obj.value == Currency::MNT)
			{
				EnumSymbol = "MNT";
			}
			if (obj.value == Currency::MOP)
			{
				EnumSymbol = "MOP";
			}
			if (obj.value == Currency::MRO)
			{
				EnumSymbol = "MRO";
			}
			if (obj.value == Currency::MUR)
			{
				EnumSymbol = "MUR";
			}
			if (obj.value == Currency::MVR)
			{
				EnumSymbol = "MVR";
			}
			if (obj.value == Currency::MWK)
			{
				EnumSymbol = "MWK";
			}
			if (obj.value == Currency::MXN)
			{
				EnumSymbol = "MXN";
			}
			if (obj.value == Currency::MYR)
			{
				EnumSymbol = "MYR";
			}
			if (obj.value == Currency::MZN)
			{
				EnumSymbol = "MZN";
			}
			if (obj.value == Currency::NAD)
			{
				EnumSymbol = "NAD";
			}
			if (obj.value == Currency::NGN)
			{
				EnumSymbol = "NGN";
			}
			if (obj.value == Currency::NIO)
			{
				EnumSymbol = "NIO";
			}
			if (obj.value == Currency::NOK)
			{
				EnumSymbol = "NOK";
			}
			if (obj.value == Currency::NPR)
			{
				EnumSymbol = "NPR";
			}
			if (obj.value == Currency::NZD)
			{
				EnumSymbol = "NZD";
			}
			if (obj.value == Currency::OMR)
			{
				EnumSymbol = "OMR";
			}
			if (obj.value == Currency::PAB)
			{
				EnumSymbol = "PAB";
			}
			if (obj.value == Currency::PEN)
			{
				EnumSymbol = "PEN";
			}
			if (obj.value == Currency::PGK)
			{
				EnumSymbol = "PGK";
			}
			if (obj.value == Currency::PHP)
			{
				EnumSymbol = "PHP";
			}
			if (obj.value == Currency::PKR)
			{
				EnumSymbol = "PKR";
			}
			if (obj.value == Currency::PLN)
			{
				EnumSymbol = "PLN";
			}
			if (obj.value == Currency::PYG)
			{
				EnumSymbol = "PYG";
			}
			if (obj.value == Currency::QAR)
			{
				EnumSymbol = "QAR";
			}
			if (obj.value == Currency::RON)
			{
				EnumSymbol = "RON";
			}
			if (obj.value == Currency::RSD)
			{
				EnumSymbol = "RSD";
			}
			if (obj.value == Currency::RUB)
			{
				EnumSymbol = "RUB";
			}
			if (obj.value == Currency::RWF)
			{
				EnumSymbol = "RWF";
			}
			if (obj.value == Currency::SAR)
			{
				EnumSymbol = "SAR";
			}
			if (obj.value == Currency::SBD)
			{
				EnumSymbol = "SBD";
			}
			if (obj.value == Currency::SCR)
			{
				EnumSymbol = "SCR";
			}
			if (obj.value == Currency::SDG)
			{
				EnumSymbol = "SDG";
			}
			if (obj.value == Currency::SEK)
			{
				EnumSymbol = "SEK";
			}
			if (obj.value == Currency::SGD)
			{
				EnumSymbol = "SGD";
			}
			if (obj.value == Currency::SHP)
			{
				EnumSymbol = "SHP";
			}
			if (obj.value == Currency::SLL)
			{
				EnumSymbol = "SLL";
			}
			if (obj.value == Currency::SOS)
			{
				EnumSymbol = "SOS";
			}
			if (obj.value == Currency::SRD)
			{
				EnumSymbol = "SRD";
			}
			if (obj.value == Currency::STD)
			{
				EnumSymbol = "STD";
			}
			if (obj.value == Currency::SYP)
			{
				EnumSymbol = "SYP";
			}
			if (obj.value == Currency::SZL)
			{
				EnumSymbol = "SZL";
			}
			if (obj.value == Currency::THB)
			{
				EnumSymbol = "THB";
			}
			if (obj.value == Currency::TJS)
			{
				EnumSymbol = "TJS";
			}
			if (obj.value == Currency::TMT)
			{
				EnumSymbol = "TMT";
			}
			if (obj.value == Currency::TND)
			{
				EnumSymbol = "TND";
			}
			if (obj.value == Currency::TOP)
			{
				EnumSymbol = "TOP";
			}
			if (obj.value == Currency::TRY)
			{
				EnumSymbol = "TRY";
			}
			if (obj.value == Currency::TTD)
			{
				EnumSymbol = "TTD";
			}
			if (obj.value == Currency::TWD)
			{
				EnumSymbol = "TWD";
			}
			if (obj.value == Currency::TZS)
			{
				EnumSymbol = "TZS";
			}
			if (obj.value == Currency::UAH)
			{
				EnumSymbol = "UAH";
			}
			if (obj.value == Currency::UGX)
			{
				EnumSymbol = "UGX";
			}
			if (obj.value == Currency::USD)
			{
				EnumSymbol = "USD";
			}
			if (obj.value == Currency::UYU)
			{
				EnumSymbol = "UYU";
			}
			if (obj.value == Currency::UZS)
			{
				EnumSymbol = "UZS";
			}
			if (obj.value == Currency::VEF)
			{
				EnumSymbol = "VEF";
			}
			if (obj.value == Currency::VND)
			{
				EnumSymbol = "VND";
			}
			if (obj.value == Currency::VUV)
			{
				EnumSymbol = "VUV";
			}
			if (obj.value == Currency::WST)
			{
				EnumSymbol = "WST";
			}
			if (obj.value == Currency::XAF)
			{
				EnumSymbol = "XAF";
			}
			if (obj.value == Currency::XCD)
			{
				EnumSymbol = "XCD";
			}
			if (obj.value == Currency::XOF)
			{
				EnumSymbol = "XOF";
			}
			if (obj.value == Currency::XPF)
			{
				EnumSymbol = "XPF";
			}
			if (obj.value == Currency::YER)
			{
				EnumSymbol = "YER";
			}
			if (obj.value == Currency::ZAR)
			{
				EnumSymbol = "ZAR";
			}
			if (obj.value == Currency::ZMK)
			{
				EnumSymbol = "ZMK";
			}
			if (obj.value == Currency::ZWL)
			{
				EnumSymbol = "ZWL";
			}

			if (!EnumSymbol.empty())
			{
				os << "Currency." << EnumSymbol;
			}
		}
		return os;
	}
}
