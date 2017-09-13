///////////////////////////////////////////////////////////
//  ErpReceiveDelivery.h
//  Implementation of the Class ErpReceiveDelivery
///////////////////////////////////////////////////////////

#ifndef ERPRECEIVEDELIVERY_H
#define ERPRECEIVEDELIVERY_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Transaction for an Organisation receiving goods or services that may be used to
			 * indicate receipt of goods in conjunction with a purchase order. A receivable is
			 * an open (unpaid) item in the Accounts Receivable ledger.
			 */
			class ErpReceiveDelivery : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpReceiveDelivery();
				virtual ~ErpReceiveDelivery();

			};

		}

	}

}
#endif // ERPRECEIVEDELIVERY_H
