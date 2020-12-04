///////////////////////////////////////////////////////////
//  MerchantAgreement.h
//  Implementation of the Class MerchantAgreement
///////////////////////////////////////////////////////////

#ifndef MERCHANTAGREEMENT_H
#define MERCHANTAGREEMENT_H

#include <list>

#include "IEC61968/PaymentMetering/MerchantAccount.h"
#include "IEC61968/Common/Agreement.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * A formal controlling contractual agreement between supplier and merchant, in
		 * terms of which the merchant is authorised to vend tokens and receipt payments
		 * on behalf of the supplier. The merchant is accountable to the supplier for
		 * revenue collected at point of sale.
		 */
		class MerchantAgreement : public IEC61968::Common::Agreement
		{

		public:
			MerchantAgreement();
			virtual ~MerchantAgreement();
			/**
			 * All merchant accounts instantiated as a result of this merchant agreement.
			 */
			std::list<IEC61968::PaymentMetering::MerchantAccount*> MerchantAccounts;

		};

	}

}
#endif // MERCHANTAGREEMENT_H
