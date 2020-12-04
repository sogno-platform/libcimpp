///////////////////////////////////////////////////////////
//  ErpInventory.h
//  Implementation of the Class ErpInventory
///////////////////////////////////////////////////////////

#ifndef ERPINVENTORY_H
#define ERPINVENTORY_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Utility inventory-related information about an item or part (and not for
			 * description of the item and its attributes). It is used by ERP applications to
			 * enable the synchronization of Inventory data that exists on separate Item
			 * Master databases. This data is not the master data that describes the
			 * attributes of the item such as dimensions, weight, or unit of measure - it
			 * describes the item as it exists at a specific location.
			 */
			class ErpInventory : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpInventory();
				virtual ~ErpInventory();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // ERPINVENTORY_H
