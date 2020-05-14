#ifndef RegulatingControlModeKind_H
#define RegulatingControlModeKind_H

namespace CIMPP {
	/*
	The kind of regulation model.   For example regulating voltage, reactive power, active power, etc.
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
		 * Control switches on/off by time of day. The times may change on the weekend, or in different seasons.
		 */
		timeScheduled,
		/**
		 * Control switches on/off based on the local temperature (i.e., a thermostat).
		 */
		temperature,
		/**
		 * Power factor is specified.
		 */
		powerFactor,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::RegulatingControlModeKind& rop);
}
#endif
