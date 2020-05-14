#ifndef PetersenCoilModeKind_H
#define PetersenCoilModeKind_H

namespace CIMPP {
	/*
	The mode of operation for a Petersen coil.
	*/
	enum class PetersenCoilModeKind
	{
		/**
		 * Fixed position.
		 */
		fixed,
		/**
		 * Manual positioning.
		 */
		manual,
		/**
		 * Automatic positioning.
		 */
		automaticPositioning,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::PetersenCoilModeKind& rop);
}
#endif
