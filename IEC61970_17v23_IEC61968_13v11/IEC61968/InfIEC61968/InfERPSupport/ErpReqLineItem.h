///////////////////////////////////////////////////////////
//  ErpReqLineItem.h
//  Implementation of the Class ErpReqLineItem
///////////////////////////////////////////////////////////

#ifndef ERPREQLINEITEM_H
#define ERPREQLINEITEM_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPOLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpRequisition.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Information that describes a requested item and its attributes.
			 */
			class ErpReqLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpReqLineItem();
				virtual ~ErpReqLineItem();
				IEC61970::Base::Domain::String code;
				/**
				 * Cost of material.
				 */
				IEC61970::Base::Domain::Money cost;
				IEC61970::Base::Domain::Date deliveryDate;
				/**
				 * Quantity of item requisitioned.
				 */
				IEC61970::Base::Domain::Integer quantity;
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem *ErpPOLineItem;
				IEC61968::InfIEC61968::InfERPSupport::ErpRequisition *ErpRequisition;

			};

		}

	}

}
#endif // ERPREQLINEITEM_H
