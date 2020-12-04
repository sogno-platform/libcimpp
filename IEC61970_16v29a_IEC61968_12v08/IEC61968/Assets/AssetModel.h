///////////////////////////////////////////////////////////
//  AssetModel.h
//  Implementation of the Class AssetModel
///////////////////////////////////////////////////////////

#ifndef ASSETMODEL_H
#define ASSETMODEL_H

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Model of an asset, either a product of a specific manufacturer or a generic
		 * asset model or material item. Datasheet characteristics are available through
		 * the associated AssetInfo subclass and can be shared with asset or power system
		 * resource instances.
		 */
		class AssetModel : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			AssetModel();
			virtual ~AssetModel();
			/**
			 * Data applicable to this asset model.
			 */
			IEC61968::Assets::AssetInfo *AssetInfo;

		};

	}

}
#endif // ASSETMODEL_H
