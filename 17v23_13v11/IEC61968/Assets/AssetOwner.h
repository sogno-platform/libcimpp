///////////////////////////////////////////////////////////
//  AssetOwner.h
//  Implementation of the Class AssetOwner
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETOWNER_H
#define ASSETOWNER_H

#include "IEC61968/Assets/AssetOrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Owner of the asset.
		 */
		class AssetOwner : public IEC61968::Assets::AssetOrganisationRole
		{

		public:
			AssetOwner();
			virtual ~AssetOwner();

		};

	}

}
#endif // ASSETOWNER_H
