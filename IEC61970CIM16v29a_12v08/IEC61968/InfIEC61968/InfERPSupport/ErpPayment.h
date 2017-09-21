///////////////////////////////////////////////////////////
//  ErpPayment.h
//  Implementation of the Class ErpPayment
///////////////////////////////////////////////////////////

#ifndef ERPPAYMENT_H
#define ERPPAYMENT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Payment infromation and status for any individual line item of an ErpInvoice (e.
			 * g., when payment is from a customer). ErpPayable is also updated when payment
			 * is to a supplier and ErpReceivable is updated when payment is from a customer.
			 * Multiple payments can be made against a single line item and an individual
			 * payment can apply to more that one line item.
			 */
			class ErpPayment : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpPayment();
				virtual ~ErpPayment();
				/**
				 * Payment terms (e.g., net 30).
				 */
				IEC61970::Base::Domain::String termsPayment;

			};

		}

	}

}
#endif // ERPPAYMENT_H
