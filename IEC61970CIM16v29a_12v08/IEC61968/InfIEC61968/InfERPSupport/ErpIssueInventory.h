///////////////////////////////////////////////////////////
//  ErpIssueInventory.h
//  Implementation of the Class ErpIssueInventory
///////////////////////////////////////////////////////////

#ifndef ERPISSUEINVENTORY_H
#define ERPISSUEINVENTORY_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/TypeMaterial.h"
#include "IEC61968/InfIEC61968/InfAssets/GenericAssetModelOrMaterial.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Can be used to request an application to process an issue or request
			 * information about an issue.
			 */
			class ErpIssueInventory : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpIssueInventory();
				virtual ~ErpIssueInventory();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfWork::TypeMaterial *TypeMaterial;
				IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial *TypeAsset;

			};

		}

	}

}
#endif // ERPISSUEINVENTORY_H
