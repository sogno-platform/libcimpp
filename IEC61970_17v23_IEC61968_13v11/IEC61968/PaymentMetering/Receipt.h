///////////////////////////////////////////////////////////
//  Receipt.h
//  Implementation of the Class Receipt
///////////////////////////////////////////////////////////

#ifndef RECEIPT_H
#define RECEIPT_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/PaymentMetering/LineDetail.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/PaymentMetering/Transaction.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Record of total receipted payment from customer.
		 */
		class Receipt : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Receipt();
			virtual ~Receipt();
			/**
			 * True if this receipted payment is manually bankable, otherwise it is an
			 * electronic funds transfer.
			 */
			IEC61970::Base::Domain::Boolean isBankable;
			/**
			 * Receipted amount with rounding, date and note.
			 */
			IEC61968::PaymentMetering::LineDetail line;
			/**
			 * All transactions recorded for this receipted payment.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> Transactions;

		};

	}

}
#endif // RECEIPT_H
