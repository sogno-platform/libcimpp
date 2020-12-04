///////////////////////////////////////////////////////////
//  VendorShift.h
//  Implementation of the Class VendorShift
///////////////////////////////////////////////////////////

#ifndef VENDORSHIFT_H
#define VENDORSHIFT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/PaymentMetering/Receipt.h"
#include "IEC61968/PaymentMetering/Transaction.h"
#include "IEC61968/PaymentMetering/Shift.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The operating shift for a vendor during which the vendor may transact against
		 * the merchant's account. It aggregates transactions and receipts during the
		 * shift and periodically debits a merchant account. The totals in vendor shift
		 * should always be the sum of totals aggregated in all cashier shifts that were
		 * open under the particular vendor shift.
		 */
		class VendorShift : public IEC61968::PaymentMetering::Shift
		{

		public:
			VendorShift();
			virtual ~VendorShift();
			/**
			 * The amount that is to be debited from the merchant account for this vendor
			 * shift. This amount reflects the sum(PaymentTransaction.transactionAmount).
			 */
			IEC61970::Base::Domain::Money merchantDebitAmount;
			/**
			 * If true, merchantDebitAmount has been debited from MerchantAccount; typically
			 * happens at the end of VendorShift when it closes.
			 */
			IEC61970::Base::Domain::Boolean posted;
			/**
			 * All receipts recorded during this vendor shift.
			 */
			std::list<IEC61968::PaymentMetering::Receipt*> Receipts;
			/**
			 * All transactions recorded during this vendor shift.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> Transactions;

		};

	}

}
#endif // VENDORSHIFT_H
