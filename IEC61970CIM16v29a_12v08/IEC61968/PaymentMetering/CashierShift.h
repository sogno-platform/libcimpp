///////////////////////////////////////////////////////////
//  CashierShift.h
//  Implementation of the Class CashierShift
///////////////////////////////////////////////////////////

#ifndef CASHIERSHIFT_H
#define CASHIERSHIFT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/PaymentMetering/PointOfSale.h"
#include "IEC61968/PaymentMetering/Receipt.h"
#include "IEC61968/PaymentMetering/Transaction.h"
#include "IEC61968/PaymentMetering/Shift.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The operating shift for a cashier, during which the cashier may transact
		 * against the cashier shift, subject to vendor shift being open.
		 */
		class CashierShift : public IEC61968::PaymentMetering::Shift
		{

		public:
			CashierShift();
			virtual ~CashierShift();
			/**
			 * The amount of cash that the cashier brings to start the shift and that will be
			 * taken away at the end of the shift; i.e. the cash float does not get banked.
			 */
			IEC61970::Base::Domain::Money cashFloat;
			/**
			 * Point of sale that is in operation during this shift.
			 */
			IEC61968::PaymentMetering::PointOfSale *PointOfSale;
			/**
			 * All Receipts recorded for this Shift.
			 */
			std::list<IEC61968::PaymentMetering::Receipt*> Receipts;
			/**
			 * All transactions recorded during this cashier shift.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> Transactions;

		};

	}

}
#endif // CASHIERSHIFT_H
