#ifndef WindLVRTQcontrolModesKind_H
#define WindLVRTQcontrolModesKind_H

namespace CIMPP {
	/*
	LVRT Q control modes .
	*/
	enum class WindLVRTQcontrolModesKind
	{
		/**
		 * Voltage dependent reactive current injection ().
		 */
		mode1,
		/**
		 * Reactive current injection controlled as the pre-fault value plus an additional voltage dependent reactive current injection ().
		 */
		mode2,
		/**
		 * Reactive current injection controlled as the pre-fault value plus an additional voltage dependent reactive current injection during fault, and as the pre-fault value plus an additional constant reactive current injection post fault ().
		 */
		mode3,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::WindLVRTQcontrolModesKind& rop);
}
#endif
