///////////////////////////////////////////////////////////
//  SinglePhaseKind.h
//  Implementation of the Class SinglePhaseKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SINGLEPHASEKIND_H
#define SINGLEPHASEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Enumeration of single phase identifiers. Allows designation of single phases
			 * for both transmission and distribution equipment, circuits and loads.
			 */
			enum class SinglePhaseKind
			{
				/**
				 * Phase A.
				 */
				 _undef = -1, 	A,
				/**
				 * Phase B.
				 */
				B,
				/**
				 * Phase C.
				 */
				C,
				/**
				 * Neutral.
				 */
				N,
				/**
				 * Secondary phase 1.
				 */
				s1,
				/**
				 * Secondary phase 2.
				 */
				s2
			};

		}

	}

}
#endif // SINGLEPHASEKIND_H
