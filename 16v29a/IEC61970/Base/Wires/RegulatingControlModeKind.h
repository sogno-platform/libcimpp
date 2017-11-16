///////////////////////////////////////////////////////////
//  RegulatingControlModeKind.h
//  Implementation of the Class RegulatingControlModeKind
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef REGULATINGCONTROLMODEKIND_H
#define REGULATINGCONTROLMODEKIND_H

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
				 _undef = -1, 	voltage,
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
#endif // REGULATINGCONTROLMODEKIND_H
