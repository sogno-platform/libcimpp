///////////////////////////////////////////////////////////
//  AssetModelCatalogue.h
//  Implementation of the Class AssetModelCatalogue
///////////////////////////////////////////////////////////

#ifndef ASSETMODELCATALOGUE_H
#define ASSETMODELCATALOGUE_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Catalogue of available types of products and materials that are used to build
			 * or install, maintain or operate an Asset. Each catalogue item is for a specific
			 * product (AssetModel) available from a specific supplier.
			 */
			class AssetModelCatalogue : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				AssetModelCatalogue();
				virtual ~AssetModelCatalogue();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // ASSETMODELCATALOGUE_H
