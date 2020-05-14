#ifndef ExcST7BUELselectorKind_H
#define ExcST7BUELselectorKind_H

namespace CIMPP {
	/*
	Type of connection for the UEL input used for static excitation systems type 7B.
	*/
	enum class ExcST7BUELselectorKind
	{
		/**
		 * No UEL input is used.
		 */
		noUELinput,
		/**
		 * The signal is added to Vref.
		 */
		addVref,
		/**
		 * The signal is connected in the input of the HV gate.
		 */
		inputHVgate,
		/**
		 * The signal is connected in the output of the HV gate.
		 */
		outputHVgate,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST7BUELselectorKind& rop);
}
#endif
