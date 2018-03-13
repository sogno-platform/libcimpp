///////////////////////////////////////////////////////////
//  AssetModelUsageKind.h
//  Implementation of the Class AssetModelUsageKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETMODELUSAGEKIND_H
#define ASSETMODELUSAGEKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Usage for an asset model.
		 */
		enum class AssetModelUsageKind
		{
			/**
			 * Asset model is intended for use in distribution overhead network.
			 */
			 _undef = -1, 	distributionOverhead,
			/**
			 * Asset model is intended for use in underground distribution network.
			 */
			distributionUnderground,
			/**
			 * Asset model is intended for use in transmission network.
			 */
			transmission,
			/**
			 * Asset model is intended for use in substation.
			 */
			substation,
			/**
			 * Asset model is intended for use as streetlight.
			 */
			streetlight,
			/**
			 * Asset model is intended for use in customer substation.
			 */
			customerSubstation,
			/**
			 * Usage of the asset model is unknown.
			 */
			unknown,
			/**
			 * Other kind of asset model usage.
			 */
			other
		};

	}

}
#endif // ASSETMODELUSAGEKIND_H
