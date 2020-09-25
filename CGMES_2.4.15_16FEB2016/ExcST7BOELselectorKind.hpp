#ifndef ExcST7BOELselectorKind_H
#define ExcST7BOELselectorKind_H

namespace CIMPP {
	/*
	Type of connection for the OEL input used for static excitation systems type 7B.
	*/
	enum class ExcST7BOELselectorKind
	{
		/**
		 * No OEL input is used.
		 */
		noOELinput,
		/**
		 * The signal is added to Vref.
		 */
		addVref,
		/**
		 * The signal is connected in the input of the LV gate.
		 */
		inputLVgate,
		/**
		 * The signal is connected in the output of the LV gate.
		 */
		outputLVgate,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST7BOELselectorKind& rop);
}
#endif
