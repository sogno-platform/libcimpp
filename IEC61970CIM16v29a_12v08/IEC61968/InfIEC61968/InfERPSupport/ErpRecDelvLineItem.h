///////////////////////////////////////////////////////////
//  ErpRecDelvLineItem.h
//  Implementation of the Class ErpRecDelvLineItem
///////////////////////////////////////////////////////////

#ifndef ERPRECDELVLINEITEM_H
#define ERPRECDELVLINEITEM_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReceiveDelivery.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPOLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItem.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Of an ErpReceiveDelivery, this is an individually received good or service by
			 * the Organisation receiving goods or services. It may be used to indicate
			 * receipt of goods in conjunction with a purchase order line item.
			 */
			class ErpRecDelvLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpRecDelvLineItem();
				virtual ~ErpRecDelvLineItem();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpReceiveDelivery *ErpReceiveDelivery;
				IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem *ErpPOLineItem;
				IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem *ErpInvoiceLineItem;

			};

		}

	}

}
#endif // ERPRECDELVLINEITEM_H
