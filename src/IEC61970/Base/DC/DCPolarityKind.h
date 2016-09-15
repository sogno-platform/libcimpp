///////////////////////////////////////////////////////////
//  DCPolarityKind.h
//  Implementation of the Class DCPolarityKind
//  Created on:      28-Jan-2016 12:44:00
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_30DBAC88_576C_41fc_93CE_56626F38BF12__INCLUDED_)
#define EA_30DBAC88_576C_41fc_93CE_56626F38BF12__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Polarity for DC circuits.
			 */
			enum class DCPolarityKind
			{
				/**
				 * Positive pole.
				 */
				positive,
				/**
				 * Middle pole, potentially grounded.
				 */
				middle,
				/**
				 * Negative pole.
				 */
				negative
			};

		}

	}

}
#endif // !defined(EA_30DBAC88_576C_41fc_93CE_56626F38BF12__INCLUDED_)
