///////////////////////////////////////////////////////////
//  ChequeKind.h
//  Implementation of the Class ChequeKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CHEQUEKIND_H
#define CHEQUEKIND_H

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Kind of cheque.
		 */
		enum class ChequeKind
		{
			/**
			 * Payment order used by institutions other than banks.
			 */
			postalOrder,
			/**
			 * Payment order used by a bank.
			 */
			bankOrder,
			/**
			 * Other kind of cheque.
			 */
			other
		};

	}

}
#endif // CHEQUEKIND_H
