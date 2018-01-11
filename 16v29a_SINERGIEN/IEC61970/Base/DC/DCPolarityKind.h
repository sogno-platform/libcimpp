///////////////////////////////////////////////////////////
//  DCPolarityKind.h
//  Implementation of the Class DCPolarityKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DCPOLARITYKIND_H
#define DCPOLARITYKIND_H

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
				 _undef = -1, 	positive,
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
#endif // DCPOLARITYKIND_H
