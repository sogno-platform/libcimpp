///////////////////////////////////////////////////////////
//  AssetLifecycleStateKind.h
//  Implementation of the Class AssetLifecycleStateKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETLIFECYCLESTATEKIND_H
#define ASSETLIFECYCLESTATEKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Lifecycle states an asset can be in.
		 * While the possible lifecycle states are standardized, the allowed transitions
		 * are not - they are intended to be defined by the business process requirements
		 * of local implementations.
		 */
		enum class AssetLifecycleStateKind
		{
			 _undef = -1, 	manufactured,
			purchased,
			received,
			retired,
			disposedOf
		};

	}

}
#endif // ASSETLIFECYCLESTATEKIND_H
