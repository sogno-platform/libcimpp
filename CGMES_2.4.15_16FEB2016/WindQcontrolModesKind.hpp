#ifndef WindQcontrolModesKind_H
#define WindQcontrolModesKind_H

namespace CIMPP {
	/*
	General wind turbine Q control modes .
	*/
	enum class WindQcontrolModesKind
	{
		/**
		 * Voltage control ().
		 */
		voltage,
		/**
		 * Reactive power control ().
		 */
		reactivePower,
		/**
		 * Open loop reactive power control (only used with closed loop at plant level) ().
		 */
		openLoopReactivePower,
		/**
		 * Power factor control ().
		 */
		powerFactor,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::WindQcontrolModesKind& rop);
}
#endif
