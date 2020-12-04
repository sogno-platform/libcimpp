///////////////////////////////////////////////////////////
//  AssetHazardKind.h
//  Implementation of the Class AssetHazardKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETHAZARDKIND_H
#define ASSETHAZARDKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Type of hazard that is posed to asset in this location.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class AssetHazardKind
		{
			/**
			 * Subject to ambient temperature of below -12 °C.
			 */
			 _undef = -1, 	ambientTempBelowMinus12,
			/**
			 * Subject to ambient temperature above 38 °C.
			 */
			ambientTempAbove38,
			/**
			 * Vegetation growing below asset that may cause problem.
			 */
			vegetation,
			/**
			 * Children play in area (stray kite/ball hazard).
			 */
			childrenAtPlay,
			/**
			 * Fishing in area (fishing pole/line hazard).
			 */
			fishingArea,
			/**
			 * If other, look at type field for more information.
			 */
			other
		};

	}

}
#endif // ASSETHAZARDKIND_H
