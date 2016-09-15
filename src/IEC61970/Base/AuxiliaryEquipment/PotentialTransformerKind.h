///////////////////////////////////////////////////////////
//  PotentialTransformerKind.h
//  Implementation of the Class PotentialTransformerKind
//  Created on:      28-Jan-2016 12:46:07
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_B8E6F9A4_0DFD_48e2_AA98_FFA08688F457__INCLUDED_)
#define EA_B8E6F9A4_0DFD_48e2_AA98_FFA08688F457__INCLUDED_

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
				inductive,
				/**
				 * The potential transformer is using capacitive coupling to create secondary
				 * voltage.
				 */
				capacitiveCoupling
			};

		}

	}

}
#endif // !defined(EA_B8E6F9A4_0DFD_48e2_AA98_FFA08688F457__INCLUDED_)
