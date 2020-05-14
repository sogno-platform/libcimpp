#ifndef ExcREXSFeedbackSignalKind_H
#define ExcREXSFeedbackSignalKind_H

namespace CIMPP {
	/*
	Type of rate feedback signals.
	*/
	enum class ExcREXSFeedbackSignalKind
	{
		/**
		 * The voltage regulator output voltage is used. It is the same as exciter field voltage.
		 */
		fieldVoltage,
		/**
		 * The exciter field current is used.
		 */
		fieldCurrent,
		/**
		 * The output voltage of the exciter is used.
		 */
		outputVoltage,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ExcREXSFeedbackSignalKind& rop);
}
#endif
