#ifndef ExcIEEEST1AUELselectorKind_H
#define ExcIEEEST1AUELselectorKind_H

namespace CIMPP {
	/*
	Type of connection for the UEL input used in ExcIEEEST1A.
	*/
	enum class ExcIEEEST1AUELselectorKind
	{
		/**
		 * Ignore UEL signal.
		 */
		ignoreUELsignal,
		/**
		 * UEL input HV gate with voltage regulator output.
		 */
		inputHVgateVoltageOutput,
		/**
		 * UEL input HV gate with error signal.
		 */
		inputHVgateErrorSignal,
		/**
		 * UEL input added to error signal.
		 */
		inputAddedToErrorSignal,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ExcIEEEST1AUELselectorKind& rop);
}
#endif
