///////////////////////////////////////////////////////////
//  CatalogAssetType.h
//  Implementation of the Class CatalogAssetType
///////////////////////////////////////////////////////////

#ifndef CATALOGASSETTYPE_H
#define CATALOGASSETTYPE_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Assets/AssetKind.h"
#include "IEC61970/Base/Domain/StringQuantity.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfTypeAsset/TypeAssetCatalogue.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReqLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpBomItemData.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * assets that may be used for planning, work or design purposes.
		 */
		class CatalogAssetType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			CatalogAssetType();
			virtual ~CatalogAssetType();
			/**
			 * Estimated unit cost (or cost per unit length) of this type of asset. It does
			 * not include labor to install, construct or configure it.
			 */
			IEC61970::Base::Domain::Money estimatedUnitCost;
			IEC61968::Assets::AssetKind kind = IEC61968::Assets::AssetKind::_undef;
			/**
			 * The value, unit of measure, and multiplier for the quantity.
			 */
			IEC61970::Base::Domain::StringQuantity quantity;
			/**
			 * True if item is a stock item (default).
			 */
			IEC61970::Base::Domain::Boolean stockItem;
			IEC61970::Base::Domain::String type;
			IEC61968::InfIEC61968::InfTypeAsset::TypeAssetCatalogue *TypeAssetCatalogue;
			std::list<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*> ErpReqLineItems;
			std::list<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*> ErpBomItemDatas;

		};

	}

}
#endif // CATALOGASSETTYPE_H
