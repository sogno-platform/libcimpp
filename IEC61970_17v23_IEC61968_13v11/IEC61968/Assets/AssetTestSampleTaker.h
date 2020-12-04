///////////////////////////////////////////////////////////
//  AssetTestSampleTaker.h
//  Implementation of the Class AssetTestSampleTaker
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETTESTSAMPLETAKER_H
#define ASSETTESTSAMPLETAKER_H

#include "IEC61968/Assets/AssetOrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		class AssetTestSampleTaker : public IEC61968::Assets::AssetOrganisationRole
		{

		public:
			AssetTestSampleTaker();
			virtual ~AssetTestSampleTaker();

		};

	}

}
#endif // ASSETTESTSAMPLETAKER_H
