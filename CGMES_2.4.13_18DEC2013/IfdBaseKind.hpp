#ifndef IfdBaseKind_H
#define IfdBaseKind_H

namespace CIMPP {
	/*
	Excitation base system mode.
	*/
	enum class IfdBaseKind
	{
		/**
		 * Air gap line mode.  ifdBaseValue is computed, not defined by the user, in this mode.
		 */
		ifag,
		/**
		 * No load system with saturation mode.  ifdBaseValue is computed, not defined by the user, in this mode.
		 */
		ifnl,
		/**
		 * Full load system mode.  ifdBaseValue is computed, not defined by the user, in this mode.
		 */
		iffl,
		/**
		 * Free mode.  ifdBaseValue is defined by the user in this mode.
		 */
		other,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::IfdBaseKind& rop);
}
#endif
