#ifndef Currency_H
#define Currency_H

namespace CIMPP {
	/*
	Monetary currencies. Apologies for this list not being exhaustive.
	*/
	enum class Currency
	{
		/**
		 * US dollar
		 */
		USD,
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
		other,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::Currency& rop);
}
#endif
