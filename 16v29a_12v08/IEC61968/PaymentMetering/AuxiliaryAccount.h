///////////////////////////////////////////////////////////
//  AuxiliaryAccount.h
//  Implementation of the Class AuxiliaryAccount
///////////////////////////////////////////////////////////

#ifndef AUXILIARYACCOUNT_H
#define AUXILIARYACCOUNT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/PaymentMetering/Due.h"
#include "IEC61968/PaymentMetering/AccountMovement.h"
#include "IEC61968/PaymentMetering/Transaction.h"
#include "IEC61968/PaymentMetering/Charge.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Variable and dynamic part of auxiliary agreement, generally representing the
		 * current state of the account related to the outstanding balance defined in
		 * auxiliary agreement.
		 */
		class AuxiliaryAccount : public IEC61968::Common::Document
		{

		public:
			AuxiliaryAccount();
			virtual ~AuxiliaryAccount();
			/**
			 * The total amount currently remaining on this account that is required to be
			 * paid in order to settle the account to zero. This excludes any due amounts not
			 * yet paid.
			 */
			IEC61970::Base::Domain::Money balance;
			/**
			 * Current amounts now due for payment on this account.
			 */
			IEC61968::PaymentMetering::Due due;
			/**
			 * Details of the last credit transaction performed on this account.
			 */
			IEC61968::PaymentMetering::AccountMovement lastCredit;
			/**
			 * Details of the last debit transaction performed on this account.
			 */
			IEC61968::PaymentMetering::AccountMovement lastDebit;
			/**
			 * The initial principle amount, with which this account was instantiated.
			 */
			IEC61970::Base::Domain::Money principleAmount;
			/**
			 * All payments against this account.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> PaymentTransactions;
			/**
			 * All charges levied on this account.
			 */
			std::list<IEC61968::PaymentMetering::Charge*> Charges;

		};

	}

}
#endif // AUXILIARYACCOUNT_H
