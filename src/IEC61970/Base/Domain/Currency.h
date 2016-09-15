///////////////////////////////////////////////////////////
//  Currency.h
//  Implementation of the Class Currency
//  Created on:      28-Jan-2016 12:43:47
///////////////////////////////////////////////////////////

#if !defined(EA_3EBBF94C_5F1A_4e33_A689_42382C1D822E__INCLUDED_)
#define EA_3EBBF94C_5F1A_4e33_A689_42382C1D822E__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Monetary currencies.  ISO 4217 standard including 3-character currency code.
			 */
			enum class Currency
			{
				/**
				 * United Arab Emirates dirham.
				 */
				AED = 784,
				/**
				 * Afghan afghani.
				 */
				AFN = 971,
				/**
				 * Albanian lek.
				 */
				ALL = 8,
				/**
				 * Armenian dram.
				 */
				AMD = 51,
				/**
				 * Netherlands Antillean guilder.
				 */
				ANG = 532,
				/**
				 * Angolan kwanza.
				 */
				AOA = 973,
				/**
				 * Argentine peso.
				 */
				ARS = 32,
				/**
				 * Australian dollar.
				 */
				AUD = 36,
				/**
				 * Aruban florin.
				 */
				AWG = 533,
				/**
				 * Azerbaijani manat.
				 */
				AZN = 944,
				/**
				 * Bosnia and Herzegovina convertible mark.
				 */
				BAM = 977,
				/**
				 * Barbados dollar.
				 */
				BBD = 52,
				/**
				 * Bangladeshi taka.
				 */
				BDT = 50,
				/**
				 * Bulgarian lev.
				 */
				BGN = 975,
				/**
				 * Bahraini dinar.
				 */
				BHD = 48,
				/**
				 * Burundian franc.
				 */
				BIF = 108,
				/**
				 * Bermudian dollar (customarily known as Bermuda dollar).
				 */
				BMD = 60,
				/**
				 * Brunei dollar.
				 */
				BND = 96,
				/**
				 * Boliviano.
				 */
				BOB = 68,
				/**
				 * Bolivian Mvdol (funds code).
				 */
				BOV = 984,
				/**
				 * Brazilian real.
				 */
				BRL = 986,
				/**
				 * Bahamian dollar.
				 */
				BSD = 44,
				/**
				 * Bhutanese ngultrum.
				 */
				BTN = 64,
				/**
				 * Botswana pula.
				 */
				BWP = 72,
				/**
				 * Belarusian ruble.
				 */
				BYR = 974,
				/**
				 * Belize dollar.
				 */
				BZD = 84,
				/**
				 * Canadian dollar
				 */
				CAD = 124,
				/**
				 * Congolese franc.
				 */
				CDF = 976,
				/**
				 * Swiss franc.
				 */
				CHF = 756,
				/**
				 * Unidad de Fomento (funds code), Chile.
				 */
				CLF = 990,
				/**
				 * Chilean peso.
				 */
				CLP = 152,
				/**
				 * Chinese yuan.
				 */
				CNY = 156,
				/**
				 * Colombian peso.
				 */
				COP = 170,
				/**
				 * Unidad de Valor Real.
				 */
				COU = 970,
				/**
				 * Costa Rican colon.
				 */
				CRC = 188,
				/**
				 * Cuban convertible peso.
				 */
				CUC = 931,
				/**
				 * Cuban peso.
				 */
				CUP = 192,
				/**
				 * Cape Verde escudo.
				 */
				CVE = 132,
				/**
				 * Czech koruna.
				 */
				CZK = 203,
				/**
				 * Djiboutian franc.
				 */
				DJF = 262,
				/**
				 * Danish krone.
				 */
				DKK = 208,
				/**
				 * Dominican peso.
				 */
				DOP = 214,
				/**
				 * Algerian dinar.
				 */
				DZD = 12,
				/**
				 * Estonian kroon.
				 */
				EEK = 233,
				/**
				 * Egyptian pound.
				 */
				EGP = 818,
				/**
				 * Eritrean nakfa.
				 */
				ERN = 232,
				/**
				 * Ethiopian birr.
				 */
				ETB = 230,
				/**
				 * Euro.
				 */
				EUR = 978,
				/**
				 * Fiji dollar.
				 */
				FJD = 242,
				/**
				 * Falkland Islands pound.
				 */
				FKP = 238,
				/**
				 * Pound sterling.
				 */
				GBP = 826,
				/**
				 * Georgian lari.
				 */
				GEL = 981,
				/**
				 * Ghanaian cedi.
				 */
				GHS = 936,
				/**
				 * Gibraltar pound.
				 */
				GIP = 929,
				/**
				 * Gambian dalasi.
				 */
				GMD = 270,
				/**
				 * Guinean franc.
				 */
				GNF = 324,
				/**
				 * Guatemalan quetzal.
				 */
				GTQ = 320,
				/**
				 * Guyanese dollar.
				 */
				GYD = 328,
				/**
				 * Hong Kong dollar.
				 */
				HKD = 344,
				/**
				 * Honduran lempira.
				 */
				HNL = 340,
				/**
				 * Croatian kuna.
				 */
				HRK = 191,
				/**
				 * Haitian gourde.
				 */
				HTG = 332,
				/**
				 * Hungarian forint.
				 */
				HUF = 348,
				/**
				 * Indonesian rupiah.
				 */
				IDR = 360,
				/**
				 * Israeli new sheqel.
				 */
				ILS = 376,
				/**
				 * Indian rupee.
				 */
				INR = 356,
				/**
				 * Iraqi dinar.
				 */
				IQD = 368,
				/**
				 * Iranian rial.
				 */
				IRR = 364,
				/**
				 * Icelandic króna.
				 */
				ISK = 352,
				/**
				 * Jamaican dollar.
				 */
				JMD = 388,
				/**
				 * Jordanian dinar.
				 */
				JOD = 400,
				/**
				 * Japanese yen.
				 */
				JPY = 392,
				/**
				 * Kenyan shilling.
				 */
				KES = 404,
				/**
				 * Kyrgyzstani som.
				 */
				KGS = 417,
				/**
				 * Cambodian riel.
				 */
				KHR = 116,
				/**
				 * Comoro franc.
				 */
				KMF = 174,
				/**
				 * North Korean won.
				 */
				KPW = 408,
				/**
				 * South Korean won.
				 */
				KRW = 410,
				/**
				 * Kuwaiti dinar.
				 */
				KWD = 414,
				/**
				 * Cayman Islands dollar.
				 */
				KYD = 136,
				/**
				 * Kazakhstani tenge.
				 */
				KZT = 398,
				/**
				 * Lao kip.
				 */
				LAK = 418,
				/**
				 * Lebanese pound.
				 */
				LBP = 422,
				/**
				 * Sri Lanka rupee.
				 */
				LKR = 144,
				/**
				 * Liberian dollar.
				 */
				LRD = 430,
				/**
				 * Lesotho loti.
				 */
				LSL = 426,
				/**
				 * Lithuanian litas.
				 */
				LTL = 440,
				/**
				 * Latvian lats.
				 */
				LVL = 428,
				/**
				 * Libyan dinar.
				 */
				LYD = 434,
				/**
				 * Moroccan dirham.
				 */
				MAD = 504,
				/**
				 * Moldovan leu.
				 */
				MDL = 498,
				/**
				 * Malagasy ariary.
				 */
				MGA = 969,
				/**
				 * Macedonian denar.
				 */
				MKD = 807,
				/**
				 * Myanma kyat.
				 */
				MMK = 104,
				/**
				 * Mongolian tugrik.
				 */
				MNT = 496,
				/**
				 * Macanese pataca.
				 */
				MOP = 446,
				/**
				 * Mauritanian ouguiya.
				 */
				MRO = 478,
				/**
				 * Mauritian rupee.
				 */
				MUR = 480,
				/**
				 * Maldivian rufiyaa.
				 */
				MVR = 462,
				/**
				 * Malawian kwacha.
				 */
				MWK = 454,
				/**
				 * Mexican peso.
				 */
				MXN = 484,
				/**
				 * Malaysian ringgit.
				 */
				MYR = 458,
				/**
				 * Mozambican metical.
				 */
				MZN = 943,
				/**
				 * Namibian dollar.
				 */
				NAD = 516,
				/**
				 * Nigerian naira.
				 */
				NGN = 566,
				/**
				 * Cordoba oro.
				 */
				NIO = 558,
				/**
				 * Norwegian krone.
				 */
				NOK = 578,
				/**
				 * Nepalese rupee.
				 */
				NPR = 524,
				/**
				 * New Zealand dollar.
				 */
				NZD = 554,
				/**
				 * Omani rial.
				 */
				OMR = 512,
				/**
				 * Panamanian balboa.
				 */
				PAB = 590,
				/**
				 * Peruvian nuevo sol.
				 */
				PEN = 604,
				/**
				 * Papua New Guinean kina.
				 */
				PGK = 598,
				/**
				 * Philippine peso.
				 */
				PHP = 608,
				/**
				 * Pakistani rupee.
				 */
				PKR = 586,
				/**
				 * Polish zloty.
				 */
				PLN = 985,
				/**
				 * Paraguayan guaraní.
				 */
				PYG = 600,
				/**
				 * Qatari rial.
				 */
				QAR = 634,
				/**
				 * Romanian new leu.
				 */
				RON = 946,
				/**
				 * Serbian dinar.
				 */
				RSD = 941,
				/**
				 * Russian rouble.
				 */
				RUB = 643,
				/**
				 * Rwandan franc.
				 */
				RWF = 646,
				/**
				 * Saudi riyal.
				 */
				SAR = 682,
				/**
				 * Solomon Islands dollar.
				 */
				SBD = 90,
				/**
				 * Seychelles rupee.
				 */
				SCR = 690,
				/**
				 * Sudanese pound.
				 */
				SDG = 938,
				/**
				 * Swedish krona/kronor.
				 */
				SEK = 752,
				/**
				 * Singapore dollar.
				 */
				SGD = 702,
				/**
				 * Saint Helena pound.
				 */
				SHP = 654,
				/**
				 * Sierra Leonean leone.
				 */
				SLL = 694,
				/**
				 * Somali shilling.
				 */
				SOS = 706,
				/**
				 * Surinamese dollar.
				 */
				SRD = 968,
				/**
				 * São Tomé and Príncipe dobra.
				 */
				STD = 678,
				/**
				 * Syrian pound.
				 */
				SYP = 760,
				/**
				 * Lilangeni.
				 */
				SZL = 748,
				/**
				 * Thai baht.
				 */
				THB = 764,
				/**
				 * Tajikistani somoni.
				 */
				TJS = 972,
				/**
				 * Turkmenistani manat.
				 */
				TMT = 934,
				/**
				 * Tunisian dinar.
				 */
				TND = 788,
				/**
				 * Tongan pa?anga.
				 */
				TOP = 776,
				/**
				 * Turkish lira.
				 */
				TRY = 949,
				/**
				 * Trinidad and Tobago dollar.
				 */
				TTD = 780,
				/**
				 * New Taiwan dollar.
				 */
				TWD = 901,
				/**
				 * Tanzanian shilling.
				 */
				TZS = 834,
				/**
				 * Ukrainian hryvnia.
				 */
				UAH = 980,
				/**
				 * Ugandan shilling.
				 */
				UGX = 800,
				/**
				 * United States dollar.
				 */
				USD = 840,
				/**
				 * Uruguayan peso.
				 */
				UYU = 858,
				/**
				 * Uzbekistan som.
				 */
				UZS = 860,
				/**
				 * Venezuelan bolívar fuerte.
				 */
				VEF = 937,
				/**
				 * Vietnamese Dong.
				 */
				VND = 704,
				/**
				 * Vanuatu vatu.
				 */
				VUV = 548,
				/**
				 * Samoan tala.
				 */
				WST = 882,
				/**
				 * CFA franc BEAC.
				 */
				XAF = 950,
				/**
				 * East Caribbean dollar.
				 */
				XCD = 951,
				/**
				 * CFA Franc BCEAO.
				 */
				XOF = 952,
				/**
				 * CFP franc.
				 */
				XPF = 953,
				/**
				 * Yemeni rial.
				 */
				YER = 886,
				/**
				 * South African rand.
				 */
				ZAR = 710,
				/**
				 * Zambian kwacha.
				 */
				ZMK = 894,
				/**
				 * Zimbabwe dollar.
				 */
				ZWL = 932
			};

		}

	}

}
#endif // !defined(EA_3EBBF94C_5F1A_4e33_A689_42382C1D822E__INCLUDED_)
