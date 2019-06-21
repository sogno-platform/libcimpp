///////////////////////////////////////////////////////////
//  TempEquipActionKind.h
//  Implementation of the Class TempEquipActionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TEMPEQUIPACTIONKIND_H
#define TEMPEQUIPACTIONKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Kind of action on temporary equipment (such as cut, jumper, ground, energy
		 * source).
		 */
		enum class TempEquipActionKind
		{
			/**
			 * Place the jumper (close) or the cut (open).
			 */
			 _undef = -1, 	place,
			/**
			 * Remove the jumper (open) or the cut (close).
			 */
			remove
		};

	}

}
#endif // TEMPEQUIPACTIONKIND_H
