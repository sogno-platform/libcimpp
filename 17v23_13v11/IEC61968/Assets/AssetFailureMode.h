///////////////////////////////////////////////////////////
//  AssetFailureMode.h
//  Implementation of the Class AssetFailureMode
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETFAILUREMODE_H
#define ASSETFAILUREMODE_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * What asset has failed to be able to do.
		 * Reason for breaker failure.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class AssetFailureMode
		{
			 _undef = -1, 	failToCarryLoad,
			failToClose,
			failToInterrupt,
			failToOpen,
			failToProvideInsulationLevel
		};

	}

}
#endif // ASSETFAILUREMODE_H
