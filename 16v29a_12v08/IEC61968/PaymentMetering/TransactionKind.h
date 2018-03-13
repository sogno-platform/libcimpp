///////////////////////////////////////////////////////////
//  TransactionKind.h
//  Implementation of the Class TransactionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSACTIONKIND_H
#define TRANSACTIONKIND_H

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Kind of transaction.
		 */
		enum class TransactionKind
		{
			/**
			 * Payment for a service.
			 */
			 _undef = -1, 	serviceChargePayment,
			/**
			 * Payment for a tax.
			 */
			taxChargePayment,
			/**
			 * Payment against a specified auxiliary account.
			 */
			auxiliaryChargePayment,
			/**
			 * Payment against a specified account.
			 */
			accountPayment,
			/**
			 * Payment against an item other than an account.
			 */
			diversePayment,
			/**
			 * Reversal of a previous transaction.
			 */
			transactionReversal,
			/**
			 * Payment for a credit token sale to a customer.
			 */
			tokenSalePayment,
			/**
			 * Issue of a free credit token where the donor is the supplier.
			 */
			tokenFreeIssue,
			/**
			 * Issue of a free credit token where the donor is a 3<sup>rd</sup> party.
			 */
			tokenGrant,
			/**
			 * Exchange of a previously issued token for a new token.
			 */
			tokenExchange,
			/**
			 * Cancellation of a previously issued token.
			 */
			tokenCancellation,
			/**
			 * Issue of token that will alter the meter configuration.
			 */
			meterConfigurationToken,
			/**
			 * Other kind of transaction.
			 */
			other
		};

	}

}
#endif // TRANSACTIONKIND_H
