///////////////////////////////////////////////////////////
//  AssetGroup.h
//  Implementation of the Class AssetGroup
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETGROUP_H
#define ASSETGROUP_H

#include <list>

#include "IEC61968/Assets/AssetGroupKind.h"
#include "IEC61968/Assets/AnalyticScore.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * A grouping of assets created for a purpose such as fleet analytics, inventory
		 * or compliance management.
		 */
		class AssetGroup : public IEC61968::Common::Document
		{

		public:
			AssetGroup();
			virtual ~AssetGroup();
			/**
			 * Kind of asset group this asset group is.
			 */
			IEC61968::Assets::AssetGroupKind kind = IEC61968::Assets::AssetGroupKind::_undef;
			std::list<IEC61968::Assets::AnalyticScore*> AnalyticScore;
			std::list<IEC61968::Assets::Asset*> Asset;

		};

	}

}
#endif // ASSETGROUP_H
