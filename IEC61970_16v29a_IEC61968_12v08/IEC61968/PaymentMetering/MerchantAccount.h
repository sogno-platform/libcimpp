///////////////////////////////////////////////////////////
//  MerchantAccount.h
//  Implementation of the Class MerchantAccount
///////////////////////////////////////////////////////////

#ifndef MERCHANTACCOUNT_H
#define MERCHANTACCOUNT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/PaymentMetering/Transactor.h"
#include "IEC61968/PaymentMetering/VendorShift.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The operating account controlled by merchant agreement, against which the
		 * vendor may vend tokens or receipt payments. Transactions via vendor shift debit
		 * the account and bank deposits via bank statement credit the account.
		 */
		class MerchantAccount : public IEC61968::Common::Document
		{

		public:
			MerchantAccount();
			virtual ~MerchantAccount();
			/**
			 * The current operating balance of this account.
			 */
			IEC61970::Base::Domain::Money currentBalance;
			/**
			 * The balance of this account after taking into account any pending debits from
			 * VendorShift.merchantDebitAmount and pending credits from BankStatement.
			 * merchantCreditAmount or credits (see also BankStatement attributes and
			 * VendorShift attributes).
			 */
			IEC61970::Base::Domain::Money provisionalBalance;
			/**
			 * All transactors this merchant account is registered with.
			 */
			std::list<IEC61968::PaymentMetering::Transactor*> Transactors;
			/**
			 * All vendor shifts that operate on this merchant account.
			 */
			std::list<IEC61968::PaymentMetering::VendorShift*> VendorShifts;

		};

	}

}
#endif // MERCHANTACCOUNT_H
