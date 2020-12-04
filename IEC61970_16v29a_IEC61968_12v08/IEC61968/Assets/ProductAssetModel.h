///////////////////////////////////////////////////////////
//  ProductAssetModel.h
//  Implementation of the Class ProductAssetModel
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PRODUCTASSETMODEL_H
#define PRODUCTASSETMODEL_H

#include <list>

#include "IEC61968/Assets/CorporateStandardKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/AssetModelUsageKind.h"
#include "IEC61970/Base/Domain/Weight.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/AssetModelCatalogueItem.h"
#include "IEC61968/Assets/AssetModel.h"
#include "IEC61968/Assets/Manufacturer.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Asset model by a specific manufacturer.
		 */
		class ProductAssetModel : public IEC61968::Assets::AssetModel
		{

		public:
			ProductAssetModel();
			virtual ~ProductAssetModel();
			/**
			 * Kind of corporate standard for this asset model.
			 */
			IEC61968::Assets::CorporateStandardKind corporateStandardKind = IEC61968::Assets::CorporateStandardKind::_undef;
			/**
			 * Manufacturer's model number.
			 */
			IEC61970::Base::Domain::String modelNumber;
			/**
			 * Version number for product model, which indicates vintage of the product.
			 */
			IEC61970::Base::Domain::String modelVersion;
			/**
			 * Intended usage for this asset model.
			 */
			IEC61968::Assets::AssetModelUsageKind usageKind = IEC61968::Assets::AssetModelUsageKind::_undef;
			/**
			 * Total manufactured weight of asset.
			 */
			IEC61970::Base::Domain::Weight weightTotal;
			std::list<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*> AssetModelCatalogueItems;
			/**
			 * Manufacturer of this asset model.
			 */
			IEC61968::Assets::Manufacturer *Manufacturer;

		};

	}

}
#endif // PRODUCTASSETMODEL_H
