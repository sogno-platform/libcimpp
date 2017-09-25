///////////////////////////////////////////////////////////
//  AssetUser.h
//  Implementation of the Class AssetUser
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETUSER_H
#define ASSETUSER_H

#include "IEC61968/Assets/AssetOrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Organisation that is a user of the asset.
		 */
		class AssetUser : public IEC61968::Assets::AssetOrganisationRole
		{

		public:
			AssetUser();
			virtual ~AssetUser();

		};

	}

}
#endif // ASSETUSER_H
