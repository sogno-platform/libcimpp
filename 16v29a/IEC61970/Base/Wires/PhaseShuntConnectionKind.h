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
			 * load or capactitor.
			 */
			enum class PhaseShuntConnectionKind
			{
				/**
				 * Delta connection.
				 */
				D,
				/**
				 * Wye connection.
				 */
				Y,
				/**
				 * Wye, with neutral brought out for grounding.
				 */
				Yn,
				/**
				 * Independent winding, for single-phase connections.
				 */
				I
			};

		}

	}

}
#endif // PHASESHUNTCONNECTIONKIND_H
