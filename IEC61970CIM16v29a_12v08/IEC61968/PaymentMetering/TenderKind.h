///////////////////////////////////////////////////////////
//  TenderKind.h
//  Implementation of the Class TenderKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TENDERKIND_H
#define TENDERKIND_H

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Kind of tender.
		 */
		enum class TenderKind
		{
			/**
			 * Payment method by means of a cheque.
			 */
			cheque,
			/**
			 * Payment method by means of a credit or debit card.
			 */
			card,
			/**
			 * Payment method by means of cash.
			 */
			cash,
			/**
			 * Payment method is not known.
			 */
			unspecified,
			/**
			 * Other payment method such as electronic finds transfer.
			 */
			other
		};

	}

}
#endif // TENDERKIND_H
