///////////////////////////////////////////////////////////
//  ErpReceivable.h
//  Implementation of the Class ErpReceivable
///////////////////////////////////////////////////////////

#ifndef ERPRECEIVABLE_H
#define ERPRECEIVABLE_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Transaction representing an invoice, credit memo or debit memo to a customer.
			 * It is an open (unpaid) item in the Accounts Receivable ledger.
			 */
			class ErpReceivable : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpReceivable();
				virtual ~ErpReceivable();

			};

		}

	}

}
#endif // ERPRECEIVABLE_H
