#ifndef ExcST6BOELselectorKind_H
#define ExcST6BOELselectorKind_H

namespace CIMPP {
	/*
	Type of connection for the OEL input used for static excitation systems type 6B.
	*/
	enum class ExcST6BOELselectorKind
	{
		/**
		 * No OEL input is used.
		 */
		noOELinput,
		/**
		 * The connection is before UEL.
		 */
		beforeUEL,
		/**
		 * The connection is after UEL.
		 */
		afterUEL,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ExcST6BOELselectorKind& rop);
}
#endif
