///////////////////////////////////////////////////////////
//  SinglePhaseKind.h
//  Implementation of the Class SinglePhaseKind
//  Created on:      28-Jan-2016 12:46:42
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_8F39A70A_9CDD_4c1e_8131_5D7264DB66AD__INCLUDED_)
#define EA_8F39A70A_9CDD_4c1e_8131_5D7264DB66AD__INCLUDED_

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
				A,
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
#endif // !defined(EA_8F39A70A_9CDD_4c1e_8131_5D7264DB66AD__INCLUDED_)
