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
	Monetary currencies. Apologies for this list not being exhaustive.
	*/
	class Currency
	{
	public:
		enum Currency_ENUM
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
