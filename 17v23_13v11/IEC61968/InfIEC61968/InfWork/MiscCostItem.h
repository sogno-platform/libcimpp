///////////////////////////////////////////////////////////
//  MiscCostItem.h
//  Implementation of the Class MiscCostItem
///////////////////////////////////////////////////////////

#ifndef MISCCOSTITEM_H
#define MISCCOSTITEM_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkCostDetail.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Various cost items that are not associated with compatible units. Examples
			 * include rental equipment, labor, materials, contractor costs, permits -
			 * anything not covered in a CU.
			 */
			class MiscCostItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				MiscCostItem();
				virtual ~MiscCostItem();
				/**
				 * This drives the accounting treatment for this misc. item.
				 */
				IEC61970::Base::Domain::String account;
				/**
				 * The cost per unit for this misc. item.
				 */
				IEC61970::Base::Domain::Money costPerUnit;
				/**
				 * The cost type for accounting, such as material, labor, vehicle, contractor,
				 * equipment, overhead.
				 */
				IEC61970::Base::Domain::String costType;
				/**
				 * External reference identifier (e.g. purchase order number, serial number) .
				 */
				IEC61970::Base::Domain::String externalRefID;
				/**
				 * The quantity of the misc. item being assigned to this location.
				 */
				IEC61970::Base::Domain::IntegerQuantity quantity;
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfWork::WorkCostDetail *WorkCostDetail;

			};

		}

	}

}
#endif // MISCCOSTITEM_H
