///////////////////////////////////////////////////////////
//  ErpPurchaseOrder.h
//  Implementation of the Class ErpPurchaseOrder
///////////////////////////////////////////////////////////

#ifndef ERPPURCHASEORDER_H
#define ERPPURCHASEORDER_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * A document that communicates an order to purchase goods from a buyer to a
			 * supplier. The PurchaseOrder carries information to and from the buyer and
			 * supplier. It is a legally binding document once both Parties agree to the
			 * contents and the specified terms and conditions of the order.
			 */
			class ErpPurchaseOrder : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpPurchaseOrder();
				virtual ~ErpPurchaseOrder();

			};

		}

	}

}
#endif // ERPPURCHASEORDER_H
