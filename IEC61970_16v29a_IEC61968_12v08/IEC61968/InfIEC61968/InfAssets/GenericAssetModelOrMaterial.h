///////////////////////////////////////////////////////////
//  GenericAssetModelOrMaterial.h
//  Implementation of the Class GenericAssetModelOrMaterial
///////////////////////////////////////////////////////////

#ifndef GENERICASSETMODELORMATERIAL_H
#define GENERICASSETMODELORMATERIAL_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/StringQuantity.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/InfIEC61968/InfTypeAsset/TypeAssetCatalogue.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReqLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpBomItemData.h"
#include "IEC61968/Assets/AssetModel.h"
#include "IEC61968/Assets/ProductAssetModel.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Generic asset or material item that may be used for planning, work or design
			 * purposes.
			 */
			class GenericAssetModelOrMaterial : public IEC61968::Assets::AssetModel
			{

			public:
				GenericAssetModelOrMaterial();
				virtual ~GenericAssetModelOrMaterial();
				/**
				 * Estimated unit cost (or cost per unit length) of this type of asset. It does
				 * not include labor to install/construct or configure it.
				 */
				IEC61970::Base::Domain::Money estimatedUnitCost;
				/**
				 * The value, unit of measure, and multiplier for the quantity.
				 */
				IEC61970::Base::Domain::StringQuantity quantity;
				/**
				 * True if item is a stock item (default).
				 */
				IEC61970::Base::Domain::Boolean stockItem;
				IEC61968::InfIEC61968::InfTypeAsset::TypeAssetCatalogue *TypeAssetCatalogue;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*> ErpReqLineItems;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*> ErpBomItemDatas;
				/**
				 * All product asset models satisfying this generic asset model.
				 */
				std::list<IEC61968::Assets::ProductAssetModel*> ProductAssetModels;

			};

		}

	}

}
#endif // GENERICASSETMODELORMATERIAL_H
