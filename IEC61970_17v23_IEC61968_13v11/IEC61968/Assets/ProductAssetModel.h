///////////////////////////////////////////////////////////
//  ProductAssetModel.h
//  Implementation of the Class ProductAssetModel
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PRODUCTASSETMODEL_H
#define PRODUCTASSETMODEL_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/CorporateStandardKind.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/Assets/AssetModelUsageKind.h"
#include "IEC61968/Assets/AssetInfo.h"
#include "IEC61968/Assets/Manufacturer.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/AssetModelCatalogueItem.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/CatalogAssetType.h"
#include "IEC61970/Base/Domain/Mass.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Asset model by a specific manufacturer.
		 */
		class ProductAssetModel : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ProductAssetModel();
			virtual ~ProductAssetModel();
			/**
			 * Catalogue number for asset model.
			 */
			IEC61970::Base::Domain::String catalogueNumber;
			/**
			 * Kind of corporate standard for this asset model.
			 */
			IEC61968::Assets::CorporateStandardKind corporateStandardKind = IEC61968::Assets::CorporateStandardKind::_undef;
			/**
			 * Drawing number for asset model.
			 */
			IEC61970::Base::Domain::String drawingNumber;
			/**
			 * Reference manual or instruction book for this asset model.
			 */
			IEC61970::Base::Domain::String instructionManual;
			/**
			 * Manufacturer's model number.
			 */
			IEC61970::Base::Domain::String modelNumber;
			/**
			 * Version number for product model, which indicates vintage of the product.
			 */
			IEC61970::Base::Domain::String modelVersion;
			/**
			 * Overall length of this asset model.
			 */
			IEC61970::Base::Domain::Length overallLength;
			/**
			 * Style number of asset model.
			 */
			IEC61970::Base::Domain::String styleNumber;
			/**
			 * Intended usage for this asset model.
			 */
			IEC61968::Assets::AssetModelUsageKind usageKind = IEC61968::Assets::AssetModelUsageKind::_undef;
			/**
			 * Total manufactured weight of asset.
			 */
			IEC61970::Base::Domain::Mass weightTotal;
			IEC61968::Assets::AssetInfo *AssetInfo;
			/**
			 * Manufacturer of this asset model.
			 */
			IEC61968::Assets::Manufacturer *Manufacturer;
			std::list<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*> AssetModelCatalogueItems;
			IEC61968::Assets::CatalogAssetType *CatalogAssetType;

		};

	}

}
#endif // PRODUCTASSETMODEL_H
