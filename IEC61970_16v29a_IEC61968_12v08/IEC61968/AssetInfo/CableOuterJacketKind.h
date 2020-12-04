///////////////////////////////////////////////////////////
//  CableOuterJacketKind.h
//  Implementation of the Class CableOuterJacketKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CABLEOUTERJACKETKIND_H
#define CABLEOUTERJACKETKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of cable outer jacket.
		 */
		enum class CableOuterJacketKind
		{
			/**
			 * Cable has no outer jacket.
			 */
			 _undef = -1, 	none,
			/**
			 * Linear low density polyethylene cable outer jacket.
			 */
			linearLowDensityPolyethylene,
			/**
			 * PVC cable outer jacket.
			 */
			pvc,
			/**
			 * Polyethylene cable outer jacket.
			 */
			polyethylene,
			/**
			 * Insulating cable outer jacket.
			 */
			insulating,
			/**
			 * Semiconducting cable outer jacket.
			 */
			semiconducting,
			/**
			 * Pther kind of cable outer jacket.
			 */
			other
		};

	}

}
#endif // CABLEOUTERJACKETKIND_H
