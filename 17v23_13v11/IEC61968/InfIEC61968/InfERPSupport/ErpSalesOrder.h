///////////////////////////////////////////////////////////
//  ErpSalesOrder.h
//  Implementation of the Class ErpSalesOrder
///////////////////////////////////////////////////////////

#ifndef ERPSALESORDER_H
#define ERPSALESORDER_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * General purpose Sales Order is used for utility service orders, etc.
			 * As used by the OAG, the SalesOrder is a step beyond a PurchaseOrder in that the
			 * receiving entity of the order also communicates SalesInformoration about the
			 * Order along with the Order itself.
			 */
			class ErpSalesOrder : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpSalesOrder();
				virtual ~ErpSalesOrder();

			};

		}

	}

}
#endif // ERPSALESORDER_H
