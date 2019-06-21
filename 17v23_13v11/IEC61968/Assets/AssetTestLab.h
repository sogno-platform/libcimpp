///////////////////////////////////////////////////////////
//  AssetTestLab.h
//  Implementation of the Class AssetTestLab
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETTESTLAB_H
#define ASSETTESTLAB_H

#include "IEC61968/Assets/AssetOrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Test lab that performs various types of testing related to assets.
		 */
		class AssetTestLab : public IEC61968::Assets::AssetOrganisationRole
		{

		public:
			AssetTestLab();
			virtual ~AssetTestLab();

		};

	}

}
#endif // ASSETTESTLAB_H
