///////////////////////////////////////////////////////////
//  PhaseConnectedFaultKind.h
//  Implementation of the Class PhaseConnectedFaultKind
//  Created on:      28-Jan-2016 12:46:02
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_B038B3B8_849C_458f_AF37_A80D1416223E__INCLUDED_)
#define EA_B038B3B8_849C_458f_AF37_A80D1416223E__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * The type of fault connection among phases.
			 */
			enum class PhaseConnectedFaultKind
			{
				/**
				 * The fault connects the indicated phases to ground. The line to line fault
				 * impedance is not used and assumed infinite. The full ground impedance is
				 * connected between each phase specified in the fault and ground, but not between
				 * the phases.
				 */
				lineToGround,
				/**
				 * The fault connects the specified phases together without a connection to ground.
				 * The ground impedance of this fault is ignored. The line to line impedance is
				 * connected between each of the phases specified in the fault. For example three
				 * times for a three phase fault, one time for a two phase fault.  A single phase
				 * fault should not be specified.
				 */
				lineToLine,
				/**
				 * The fault connects the indicated phases to ground and to each other. The line
				 * to line impedance is connected between each of the phases specified in the
				 * fault in a full mesh. For example three times for a three phase fault, one time
				 * for a two phase fault. A single phase fault should not be specified. The full
				 * ground impedance is connected between each phase specified in the fault and
				 * ground.
				 */
				lineToLineToGround
			};

		}

	}

}
#endif // !defined(EA_B038B3B8_849C_458f_AF37_A80D1416223E__INCLUDED_)
