#ifndef Currency_H
#define Currency_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Monetary currencies.  ISO 4217 standard including 3-character currency code.
	*/
	class Currency
	{
	public:
		enum Currency_ENUM
		{
			/**
			 * United Arab Emirates dirham.
			 */
			AED,
			/**
			 * Afghan afghani.
			 */
			AFN,
			/**
			 * Albanian lek.
			 */
			ALL,
			/**
			 * Armenian dram.
			 */
			AMD,
			/**
			 * Netherlands Antillean guilder.
			 */
			ANG,
			/**
			 * Angolan kwanza.
			 */
			AOA,
			/**
			 * Argentine peso.
			 */
			ARS,
			/**
			 * Australian dollar.
			 */
			AUD,
			/**
			 * Aruban florin.
			 */
			AWG,
			/**
			 * Azerbaijani manat.
			 */
			AZN,
			/**
			 * Bosnia and Herzegovina convertible mark.
			 */
			BAM,
			/**
			 * Barbados dollar.
			 */
			BBD,
			/**
			 * Bangladeshi taka.
			 */
			BDT,
			/**
			 * Bulgarian lev.
			 */
			BGN,
			/**
			 * Bahraini dinar.
			 */
			BHD,
			/**
			 * Burundian franc.
			 */
			BIF,
			/**
			 * Bermudian dollar (customarily known as Bermuda dollar).
			 */
			BMD,
			/**
			 * Brunei dollar.
			 */
			BND,
			/**
			 * Boliviano.
			 */
			BOB,
			/**
			 * Bolivian Mvdol (funds code).
			 */
			BOV,
			/**
			 * Brazilian real.
			 */
			BRL,
			/**
			 * Bahamian dollar.
			 */
			BSD,
			/**
			 * Bhutanese ngultrum.
			 */
			BTN,
			/**
			 * Botswana pula.
			 */
			BWP,
			/**
			 * Belarusian ruble.
			 */
			BYR,
			/**
			 * Belize dollar.
			 */
			BZD,
			/**
			 * Canadian dollar.
			 */
			CAD,
			/**
			 * Congolese franc.
			 */
			CDF,
			/**
			 * Swiss franc.
			 */
			CHF,
			/**
			 * Unidad de Fomento (funds code), Chile.
			 */
			CLF,
			/**
			 * Chilean peso.
			 */
			CLP,
			/**
			 * Chinese yuan.
			 */
			CNY,
			/**
			 * Colombian peso.
			 */
			COP,
			/**
			 * Unidad de Valor Real.
			 */
			COU,
			/**
			 * Costa Rican colon.
			 */
			CRC,
			/**
			 * Cuban convertible peso.
			 */
			CUC,
			/**
			 * Cuban peso.
			 */
			CUP,
			/**
			 * Cape Verde escudo.
			 */
			CVE,
			/**
			 * Czech koruna.
			 */
			CZK,
			/**
			 * Djiboutian franc.
			 */
			DJF,
			/**
			 * Danish krone.
			 */
			DKK,
			/**
			 * Dominican peso.
			 */
			DOP,
			/**
			 * Algerian dinar.
			 */
			DZD,
			/**
			 * Estonian kroon.
			 */
			EEK,
			/**
			 * Egyptian pound.
			 */
			EGP,
			/**
			 * Eritrean nakfa.
			 */
			ERN,
			/**
			 * Ethiopian birr.
			 */
			ETB,
			/**
			 * Euro.
			 */
			EUR,
			/**
			 * Fiji dollar.
			 */
			FJD,
			/**
			 * Falkland Islands pound.
			 */
			FKP,
			/**
			 * Pound sterling.
			 */
			GBP,
			/**
			 * Georgian lari.
			 */
			GEL,
			/**
			 * Ghanaian cedi.
			 */
			GHS,
			/**
			 * Gibraltar pound.
			 */
			GIP,
			/**
			 * Gambian dalasi.
			 */
			GMD,
			/**
			 * Guinean franc.
			 */
			GNF,
			/**
			 * Guatemalan quetzal.
			 */
			GTQ,
			/**
			 * Guyanese dollar.
			 */
			GYD,
			/**
			 * Hong Kong dollar.
			 */
			HKD,
			/**
			 * Honduran lempira.
			 */
			HNL,
			/**
			 * Croatian kuna.
			 */
			HRK,
			/**
			 * Haitian gourde.
			 */
			HTG,
			/**
			 * Hungarian forint.
			 */
			HUF,
			/**
			 * Indonesian rupiah.
			 */
			IDR,
			/**
			 * Israeli new sheqel.
			 */
			ILS,
			/**
			 * Indian rupee.
			 */
			INR,
			/**
			 * Iraqi dinar.
			 */
			IQD,
			/**
			 * Iranian rial.
			 */
			IRR,
			/**
			 * Icelandic króna.
			 */
			ISK,
			/**
			 * Jamaican dollar.
			 */
			JMD,
			/**
			 * Jordanian dinar.
			 */
			JOD,
			/**
			 * Japanese yen.
			 */
			JPY,
			/**
			 * Kenyan shilling.
			 */
			KES,
			/**
			 * Kyrgyzstani som.
			 */
			KGS,
			/**
			 * Cambodian riel.
			 */
			KHR,
			/**
			 * Comoro franc.
			 */
			KMF,
			/**
			 * North Korean won.
			 */
			KPW,
			/**
			 * South Korean won.
			 */
			KRW,
			/**
			 * Kuwaiti dinar.
			 */
			KWD,
			/**
			 * Cayman Islands dollar.
			 */
			KYD,
			/**
			 * Kazakhstani tenge.
			 */
			KZT,
			/**
			 * Lao kip.
			 */
			LAK,
			/**
			 * Lebanese pound.
			 */
			LBP,
			/**
			 * Sri Lanka rupee.
			 */
			LKR,
			/**
			 * Liberian dollar.
			 */
			LRD,
			/**
			 * Lesotho loti.
			 */
			LSL,
			/**
			 * Lithuanian litas.
			 */
			LTL,
			/**
			 * Latvian lats.
			 */
			LVL,
			/**
			 * Libyan dinar.
			 */
			LYD,
			/**
			 * Moroccan dirham.
			 */
			MAD,
			/**
			 * Moldovan leu.
			 */
			MDL,
			/**
			 * Malagasy ariary.
			 */
			MGA,
			/**
			 * Macedonian denar.
			 */
			MKD,
			/**
			 * Myanma kyat.
			 */
			MMK,
			/**
			 * Mongolian tugrik.
			 */
			MNT,
			/**
			 * Macanese pataca.
			 */
			MOP,
			/**
			 * Mauritanian ouguiya.
			 */
			MRO,
			/**
			 * Mauritian rupee.
			 */
			MUR,
			/**
			 * Maldivian rufiyaa.
			 */
			MVR,
			/**
			 * Malawian kwacha.
			 */
			MWK,
			/**
			 * Mexican peso.
			 */
			MXN,
			/**
			 * Malaysian ringgit.
			 */
			MYR,
			/**
			 * Mozambican metical.
			 */
			MZN,
			/**
			 * Namibian dollar.
			 */
			NAD,
			/**
			 * Nigerian naira.
			 */
			NGN,
			/**
			 * Cordoba oro.
			 */
			NIO,
			/**
			 * Norwegian krone.
			 */
			NOK,
			/**
			 * Nepalese rupee.
			 */
			NPR,
			/**
			 * New Zealand dollar.
			 */
			NZD,
			/**
			 * Omani rial.
			 */
			OMR,
			/**
			 * Panamanian balboa.
			 */
			PAB,
			/**
			 * Peruvian nuevo sol.
			 */
			PEN,
			/**
			 * Papua New Guinean kina.
			 */
			PGK,
			/**
			 * Philippine peso.
			 */
			PHP,
			/**
			 * Pakistani rupee.
			 */
			PKR,
			/**
			 * Polish zloty.
			 */
			PLN,
			/**
			 * Paraguayan guaraní.
			 */
			PYG,
			/**
			 * Qatari rial.
			 */
			QAR,
			/**
			 * Romanian new leu.
			 */
			RON,
			/**
			 * Serbian dinar.
			 */
			RSD,
			/**
			 * Russian rouble.
			 */
			RUB,
			/**
			 * Rwandan franc.
			 */
			RWF,
			/**
			 * Saudi riyal.
			 */
			SAR,
			/**
			 * Solomon Islands dollar.
			 */
			SBD,
			/**
			 * Seychelles rupee.
			 */
			SCR,
			/**
			 * Sudanese pound.
			 */
			SDG,
			/**
			 * Swedish krona/kronor.
			 */
			SEK,
			/**
			 * Singapore dollar.
			 */
			SGD,
			/**
			 * Saint Helena pound.
			 */
			SHP,
			/**
			 * Sierra Leonean leone.
			 */
			SLL,
			/**
			 * Somali shilling.
			 */
			SOS,
			/**
			 * Surinamese dollar.
			 */
			SRD,
			/**
			 * São Tomé and Príncipe dobra.
			 */
			STD,
			/**
			 * Syrian pound.
			 */
			SYP,
			/**
			 * Lilangeni.
			 */
			SZL,
			/**
			 * Thai baht.
			 */
			THB,
			/**
			 * Tajikistani somoni.
			 */
			TJS,
			/**
			 * Turkmenistani manat.
			 */
			TMT,
			/**
			 * Tunisian dinar.
			 */
			TND,
			/**
			 * Tongan pa'anga.
			 */
			TOP,
			/**
			 * Turkish lira.
			 */
			TRY,
			/**
			 * Trinidad and Tobago dollar.
			 */
			TTD,
			/**
			 * New Taiwan dollar.
			 */
			TWD,
			/**
			 * Tanzanian shilling.
			 */
			TZS,
			/**
			 * Ukrainian hryvnia.
			 */
			UAH,
			/**
			 * Ugandan shilling.
			 */
			UGX,
			/**
			 * United States dollar.
			 */
			USD,
			/**
			 * Uruguayan peso.
			 */
			UYU,
			/**
			 * Uzbekistan som.
			 */
			UZS,
			/**
			 * Venezuelan bolívar fuerte.
			 */
			VEF,
			/**
			 * Vietnamese Dong.
			 */
			VND,
			/**
			 * Vanuatu vatu.
			 */
			VUV,
			/**
			 * Samoan tala.
			 */
			WST,
			/**
			 * CFA franc BEAC.
			 */
			XAF,
			/**
			 * East Caribbean dollar.
			 */
			XCD,
			/**
			 * CFA Franc BCEAO.
			 */
			XOF,
			/**
			 * CFP franc.
			 */
			XPF,
			/**
			 * Yemeni rial.
			 */
			YER,
			/**
			 * South African rand.
			 */
			ZAR,
			/**
			 * Zambian kwacha.
			 */
			ZMK,
			/**
			 * Zimbabwe dollar.
			 */
			ZWL,
		};

		Currency() : value(), initialized(false) {}
		Currency(Currency_ENUM value) : value(value), initialized(true) {}

		Currency& operator=(Currency_ENUM rop);
		operator Currency_ENUM() const;

		Currency_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, Currency& rop);
		friend std::ostream& operator<<(std::ostream& os, const Currency& obj);
	};
}
#endif
