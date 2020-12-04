///////////////////////////////////////////////////////////
//  PotentialTransformerKind.h
//  Implementation of the Class PotentialTransformerKind
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef POTENTIALTRANSFORMERKIND_H
#define POTENTIALTRANSFORMERKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * The construction kind of the potential transformer.
			 */
			enum class PotentialTransformerKind
			{
				/**
				 * The potential transformer is using induction coils to create secondary voltage.
				 */
				 _undef = -1, 	inductive,
				/**
				 * The potential transformer is using capacitive coupling to create secondary
				 * voltage.
				 */
				capacitiveCoupling
			};

		}

	}

}
#endif // POTENTIALTRANSFORMERKIND_H
