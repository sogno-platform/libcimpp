///////////////////////////////////////////////////////////
//  AssetGroupKind.h
//  Implementation of the Class AssetGroupKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETGROUPKIND_H
#define ASSETGROUPKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Possible kinds of asset groups.
		 */
		enum class AssetGroupKind
		{
			 _undef = -1, 	analysisGroup,
			inventoryGroup,
			complianceGroup,
			/**
			 * assets grouped together for a particular function - such as a group of feeders.
			 */
			functionalGroup,
			other
		};

	}

}
#endif // ASSETGROUPKIND_H
