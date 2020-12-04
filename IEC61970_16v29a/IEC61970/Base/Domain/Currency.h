///////////////////////////////////////////////////////////
//  Currency.h
//  Implementation of the Class Currency
///////////////////////////////////////////////////////////

#ifndef CURRENCY_H
#define CURRENCY_H

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Monetary currencies. Apologies for this list not being exhaustive.
			 */
			enum class Currency
			{
				/**
				 * US dollar
				 */
				 _undef = -1, 	USD,
				/**
				 * European euro
				 */
				EUR,
				/**
				 * Australian dollar
				 */
				AUD,
				/**
				 * Canadian dollar
				 */
				CAD,
				/**
				 * Swiss francs
				 */
				CHF,
				/**
				 * Chinese yuan renminbi
				 */
				CNY,
				/**
				 * Danish crown
				 */
				DKK,
				/**
				 * British pound
				 */
				GBP,
				/**
				 * Japanese yen
				 */
				JPY,
				/**
				 * Norwegian crown
				 */
				NOK,
				/**
				 * Russian ruble
				 */
				RUR,
				/**
				 * Swedish crown
				 */
				SEK,
				/**
				 * India rupees
				 */
				INR,
				/**
				 * Another type of currency.
				 */
				other
			};

		}

	}

}
#endif // CURRENCY_H
