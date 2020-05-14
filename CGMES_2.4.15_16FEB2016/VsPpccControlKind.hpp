#ifndef VsPpccControlKind_H
#define VsPpccControlKind_H

namespace CIMPP {
	/*
	Types applicable to the control of real power and/or DC voltage by voltage source converter.
	*/
	enum class VsPpccControlKind
	{
		/**
		 * Control variable (target) is real power at PCC bus.
		 */
		pPcc,
		/**
		 * Control variable (target) is DC voltage and real power at PCC bus is derived.
		 */
		udc,
		/**
		 * Control variables (targets) are both active power at point of common coupling and local DC voltage, with the droop.
		 */
		pPccAndUdcDroop,
		/**
		 * Control variables (targets) are both active power at point of common coupling and compensated DC voltage, with the droop; compensation factor is the resistance, as an approximation of the DC voltage of a common (real or virtual) node in the DC network.
		 */
		pPccAndUdcDroopWithCompensation,
		/**
		 * Control variables (targets) are both active power at point of common coupling and the pilot DC voltage, with the droop.
		 */
		pPccAndUdcDroopPilot,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::VsPpccControlKind& rop);
}
#endif
