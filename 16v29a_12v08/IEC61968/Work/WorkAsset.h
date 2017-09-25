///////////////////////////////////////////////////////////
//  WorkAsset.h
//  Implementation of the Class WorkAsset
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKASSET_H
#define WORKASSET_H

#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Common/Crew.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Asset used to perform work.
		 */
		class WorkAsset : public IEC61968::Assets::Asset
		{

		public:
			WorkAsset();
			virtual ~WorkAsset();
			/**
			 * Crew using this work asset.
			 */
			IEC61968::Common::Crew *Crew;

		};

	}

}
#endif // WORKASSET_H
