///////////////////////////////////////////////////////////
//  Tender.h
//  Implementation of the Class Tender
///////////////////////////////////////////////////////////

#ifndef TENDER_H
#define TENDER_H

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/PaymentMetering/TenderKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/PaymentMetering/Receipt.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Tender is what is "offered" by the customer towards making a payment and is
		 * often more than the required payment (hence the need for 'change'). The payment
		 * is thus that part of the Tender that goes towards settlement of a particular
		 * transaction.
		 * Tender is modelled as an aggregation of Cheque and Card. Both these tender
		 * types can exist in a single tender bid thus 'accountHolderName' has to exist
		 * separately in each of Cheque and Card as each could have a different account
		 * holder name.
		 */
		class Tender : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Tender();
			virtual ~Tender();
			/**
			 * Amount tendered by customer.
			 */
			IEC61970::Base::Domain::Money amount;
			/**
			 * Difference between amount tendered by customer and the amount charged by point
			 * of sale.
			 */
			IEC61970::Base::Domain::Money change;
			/**
			 * Kind of tender from customer.
			 */
			IEC61968::PaymentMetering::TenderKind kind;
			/**
			 * Receipt that recorded this receiving of a payment in the form of tenders.
			 */
			IEC61968::PaymentMetering::Receipt *Receipt;

		};

	}

}
#endif // TENDER_H
