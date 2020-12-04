///////////////////////////////////////////////////////////
//  ErpInventoryCount.h
//  Implementation of the Class ErpInventoryCount
///////////////////////////////////////////////////////////

#ifndef ERPINVENTORYCOUNT_H
#define ERPINVENTORYCOUNT_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/Assets/AssetModel.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * This is related to Inventory physical counts organized by AssetModel. Note that
			 * a count of a type of asset can be accomplished by the association inherited by
			 * AssetModel (from Document) to Asset.
			 * It enables ERP applications to transfer an inventory count between ERP and the
			 * actual physical inventory location. This count may be a cycle count or a
			 * physical count.
			 */
			class ErpInventoryCount : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpInventoryCount();
				virtual ~ErpInventoryCount();
				IEC61968::Common::Status status;
				IEC61968::Assets::AssetModel *AssetModel;

			};

		}

	}

}
#endif // ERPINVENTORYCOUNT_H
