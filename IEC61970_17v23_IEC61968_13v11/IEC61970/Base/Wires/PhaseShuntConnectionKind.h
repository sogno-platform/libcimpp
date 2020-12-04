///////////////////////////////////////////////////////////
//  PhaseShuntConnectionKind.h
//  Implementation of the Class PhaseShuntConnectionKind
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef PHASESHUNTCONNECTIONKIND_H
#define PHASESHUNTCONNECTIONKIND_H

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
				 _undef = -1, 	D = 1,
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
#endif // PHASESHUNTCONNECTIONKIND_H
