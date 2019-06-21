///////////////////////////////////////////////////////////
//  WireUsageKind.h
//  Implementation of the Class WireUsageKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WIREUSAGEKIND_H
#define WIREUSAGEKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of wire usage.
		 */
		enum class WireUsageKind
		{
			/**
			 * Wire is used in extra-high voltage or high voltage network.
			 */
			 _undef = -1, 	transmission,
			/**
			 * Wire is used in medium voltage network.
			 */
			distribution,
			/**
			 * Wire is used in low voltage circuit.
			 */
			secondary,
			/**
			 * Other kind of wire usage.
			 */
			other
		};

	}

}
#endif // WIREUSAGEKIND_H
