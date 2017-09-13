///////////////////////////////////////////////////////////
//  Transaction.h
//  Implementation of the Class Transaction
///////////////////////////////////////////////////////////

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/PaymentMetering/TransactionKind.h"
#include "IEC61968/PaymentMetering/LineDetail.h"
#include "IEC61970/Base/Domain/RealEnergy.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"


namespace IEC61968
{
	namespace Metering{
		class Meter;
	}

	namespace PaymentMetering
	{
		/**
		 * The record of details of payment for service or token sale.
		 */
		class Transaction : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Transaction();
			virtual ~Transaction();
			/**
			 * Formal reference for use with diverse payment (traffic fine for example).
			 */
			IEC61970::Base::Domain::String diverseReference;
			/**
			 * Reference to the entity that is the source of 'amount' (for example: customer
			 * for token purchase; or supplier for free issue token).
			 */
			IEC61970::Base::Domain::String donorReference;
			/**
			 * Kind of transaction.
			 */
			IEC61968::PaymentMetering::TransactionKind kind;
			/**
			 * Transaction amount, rounding, date and note for this transaction line.
			 */
			IEC61968::PaymentMetering::LineDetail line;
			/**
			 * Reference to the entity that is the recipient of 'amount' (for example,
			 * supplier for service charge payment; or tax receiver for VAT).
			 */
			IEC61970::Base::Domain::String receiverReference;
			/**
			 * (if 'kind' is transactionReversal) Reference to the original transaction that
			 * is being reversed by this transaction.
			 */
			IEC61970::Base::Domain::String reversedId;
			/**
			 * Actual amount of service units that is being paid for.
			 */
			IEC61970::Base::Domain::RealEnergy serviceUnitsEnergy;
			/**
			 * Number of service units not reflected in 'serviceUnitsEnergy' due to process
			 * rounding or truncating errors.
			 */
			IEC61970::Base::Domain::RealEnergy serviceUnitsError;
			/**
			 * Meter for this vending transaction.
			 */
			IEC61968::Metering::Meter *Meter;

		};

	}

}
#endif // TRANSACTION_H
