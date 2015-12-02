///////////////////////////////////////////////////////////
//  RegulatingControlModeKind.h
//  Implementation of the Class RegulatingControlModeKind
//  Created on:      27-Nov-2015 11:07:52
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_6EFC511C_730A_4fe7_ADAA_E9336C9F16FB__INCLUDED_)
#define EA_6EFC511C_730A_4fe7_ADAA_E9336C9F16FB__INCLUDED_

/**
 * The kind of regulation model.   For example regulating voltage, reactive power,
 * active power, etc.
 */
enum RegulatingControlModeKind
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
#endif // !defined(EA_6EFC511C_730A_4fe7_ADAA_E9336C9F16FB__INCLUDED_)
