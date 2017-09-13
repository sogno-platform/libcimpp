///////////////////////////////////////////////////////////
//  AssetContainer.h
//  Implementation of the Class AssetContainer
///////////////////////////////////////////////////////////

#ifndef ASSETCONTAINER_H
#define ASSETCONTAINER_H

#include <list>

#include "IEC61968/Assets/Seal.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Asset that is aggregation of other assets such as conductors, transformers,
		 * switchgear, land, fences, buildings, equipment, vehicles, etc.
		 */
		class AssetContainer : public IEC61968::Assets::Asset
		{

		public:
			AssetContainer();
			virtual ~AssetContainer();
			/**
			 * All seals applied to this asset container.
			 */
			std::list<IEC61968::Assets::Seal*> Seals;

		};

	}

}
#endif // ASSETCONTAINER_H
