///////////////////////////////////////////////////////////
//  ErpRequisition.h
//  Implementation of the Class ErpRequisition
///////////////////////////////////////////////////////////

#ifndef ERPREQUISITION_H
#define ERPREQUISITION_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * General information that applies to a utility requisition that is a request for
			 * the purchase of goods or services. Typically, a requisition leads to the
			 * creation of a purchase order to a specific supplier.
			 */
			class ErpRequisition : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpRequisition();
				virtual ~ErpRequisition();

			};

		}

	}

}
#endif // ERPREQUISITION_H
