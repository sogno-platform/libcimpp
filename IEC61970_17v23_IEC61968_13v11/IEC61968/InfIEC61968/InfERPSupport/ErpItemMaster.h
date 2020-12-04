///////////////////////////////////////////////////////////
//  ErpItemMaster.h
//  Implementation of the Class ErpItemMaster
///////////////////////////////////////////////////////////

#ifndef ERPITEMMASTER_H
#define ERPITEMMASTER_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Any unique purchased part for manufactured product tracked by ERP systems for a
			 * utility.
			 * Item, as used by the OAG, refers to the basic information about an item,
			 * including its attributes, cost, and locations. It does not include item
			 * quantities. Compare to the Inventory, which includes all quantities and other
			 * location-specific information.
			 */
			class ErpItemMaster : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpItemMaster();
				virtual ~ErpItemMaster();
				IEC61968::Common::Status status;
				IEC61968::Assets::Asset *Asset;

			};

		}

	}

}
#endif // ERPITEMMASTER_H
