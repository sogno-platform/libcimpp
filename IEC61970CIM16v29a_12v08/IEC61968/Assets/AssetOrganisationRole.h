///////////////////////////////////////////////////////////
//  AssetOrganisationRole.h
//  Implementation of the Class AssetOrganisationRole
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETORGANISATIONROLE_H
#define ASSETORGANISATIONROLE_H

#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Role an organisation plays with respect to asset.
		 */
		class AssetOrganisationRole : public IEC61968::Common::OrganisationRole
		{

		public:
			AssetOrganisationRole();
			virtual ~AssetOrganisationRole();

		};

	}

}
#endif // ASSETORGANISATIONROLE_H
