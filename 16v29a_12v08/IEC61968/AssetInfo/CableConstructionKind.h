///////////////////////////////////////////////////////////
//  CableConstructionKind.h
//  Implementation of the Class CableConstructionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CABLECONSTRUCTIONKIND_H
#define CABLECONSTRUCTIONKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of cable construction.
		 */
		enum class CableConstructionKind
		{
			/**
			 * Compacted cable.
			 */
			compacted,
			/**
			 * Compressed cable.
			 */
			compressed,
			/**
			 * Sector cable.
			 */
			sector,
			/**
			 * Segmental cable.
			 */
			segmental,
			/**
			 * Solid cable.
			 */
			solid,
			/**
			 * Stranded cable.
			 */
			stranded,
			/**
			 * Other kind of cable construction.
			 */
			other
		};

	}

}
#endif // CABLECONSTRUCTIONKIND_H
