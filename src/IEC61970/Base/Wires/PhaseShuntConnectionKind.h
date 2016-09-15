///////////////////////////////////////////////////////////
//  PhaseShuntConnectionKind.h
//  Implementation of the Class PhaseShuntConnectionKind
//  Created on:      28-Jan-2016 12:46:03
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_253A4339_36DA_4c8e_868A_957CA9A18B56__INCLUDED_)
#define EA_253A4339_36DA_4c8e_868A_957CA9A18B56__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * The configuration of phase connections for a single terminal device such as a
			 * load or capacitor.
			 */
			enum class PhaseShuntConnectionKind
			{
				/**
				 * Delta connection.
				 */
				D = 1,
				/**
				 * Wye connection.
				 */
				Y = 2,
				/**
				 * Wye, with neutral brought out for grounding.
				 */
				Yn = 3,
				/**
				 * Independent winding, for single-phase connections.
				 */
				I = 4,
				/**
				 * Ground connection; use when explicit connection to ground needs to be expressed
				 * in combination with the phase code, such as for electrical wire/cable or for
				 * meters.
				 */
				G = 5
			};

		}

	}

}
#endif // !defined(EA_253A4339_36DA_4c8e_868A_957CA9A18B56__INCLUDED_)
