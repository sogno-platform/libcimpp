///////////////////////////////////////////////////////////
//  AssetModelCatalogueItem.h
//  Implementation of the Class AssetModelCatalogueItem
///////////////////////////////////////////////////////////

#ifndef ASSETMODELCATALOGUEITEM_H
#define ASSETMODELCATALOGUEITEM_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpQuoteLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPOLineItem.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/AssetModelCatalogue.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Provides pricing and other relevant information about a specific manufacturer's
			 * product (i.e., AssetModel), and its price from a given supplier. A single
			 * AssetModel may be availble from multiple suppliers. Note that manufacturer and
			 * supplier are both types of organisation, which the association is inherited
			 * from Document.
			 */
			class AssetModelCatalogueItem : public IEC61968::Common::Document
			{

			public:
				AssetModelCatalogueItem();
				virtual ~AssetModelCatalogueItem();
				/**
				 * Unit cost for an asset model from a specific supplier, either for a unit cost
				 * or cost per unit length. Cost is for material or asset only and does not
				 * include labor to install/construct or configure it.
				 */
				IEC61970::Base::Domain::Money unitCost;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*> ErpQuoteLineItems;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*> ErpPOLineItems;
				IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogue *AssetModelCatalogue;

			};

		}

	}

}
#endif // ASSETMODELCATALOGUEITEM_H
