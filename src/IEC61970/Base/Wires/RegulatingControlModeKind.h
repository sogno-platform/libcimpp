///////////////////////////////////////////////////////////
//  RegulatingControlModeKind.h
//  Implementation of the Class RegulatingControlModeKind
//  Created on:      28-Jan-2016 12:46:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_6A5C92C2_1757_4452_AC2E_2B3CEAFB0DAF__INCLUDED_)
#define EA_6A5C92C2_1757_4452_AC2E_2B3CEAFB0DAF__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * The kind of regulation model.   For example regulating voltage, reactive power,
			 * active power, etc.
			 */
			enum class RegulatingControlModeKind
			{
				/**
				 * Voltage is specified.
				 */
				voltage,
				/**
				 * Active power is specified.
				 */
				activePower,
				/**
				 * Reactive power is specified.
				 */
				reactivePower,
				/**
				 * Current flow is specified.
				 */
				currentFlow,
				/**
				 * Admittance is specified.
				 */
				admittance,
				/**
				 * Control switches on/off by time of day. The times may change on the weekend, or
				 * in different seasons.
				 */
				timeScheduled,
				/**
				 * Control switches on/off based on the local temperature (i.e., a thermostat).
				 */
				temperature,
				/**
				 * Power factor is specified.
				 */
				powerFactor
			};

		}

	}

}
#endif // !defined(EA_6A5C92C2_1757_4452_AC2E_2B3CEAFB0DAF__INCLUDED_)
