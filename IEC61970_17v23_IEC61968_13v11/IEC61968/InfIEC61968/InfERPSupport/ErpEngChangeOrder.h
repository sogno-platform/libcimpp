///////////////////////////////////////////////////////////
//  ErpEngChangeOrder.h
//  Implementation of the Class ErpEngChangeOrder
///////////////////////////////////////////////////////////

#ifndef ERPENGCHANGEORDER_H
#define ERPENGCHANGEORDER_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * General Utility Engineering Change Order information.
			 */
			class ErpEngChangeOrder : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpEngChangeOrder();
				virtual ~ErpEngChangeOrder();

			};

		}

	}

}
#endif // ERPENGCHANGEORDER_H
