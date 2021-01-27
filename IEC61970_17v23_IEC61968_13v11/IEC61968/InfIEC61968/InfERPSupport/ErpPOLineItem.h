///////////////////////////////////////////////////////////
//  ErpPOLineItem.h
//  Implementation of the Class ErpPOLineItem
///////////////////////////////////////////////////////////

#ifndef ERPPOLINEITEM_H
#define ERPPOLINEITEM_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpPurchaseOrder.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Of an ErpPurchaseOrder, this is an individually ordered item or product along
			 * with the quantity, price and other descriptive information.
			 */
			class ErpPOLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpPOLineItem();
				virtual ~ErpPOLineItem();
				IEC61968::InfIEC61968::InfERPSupport::ErpPurchaseOrder *ErpPurchaseOrder;

			};

		}

	}

}
#endif // ERPPOLINEITEM_H
