#ifndef OperationalLimitDirectionKind_H
#define OperationalLimitDirectionKind_H

namespace CIMPP {
	/*
	The direction attribute describes the side of  a limit that is a violation.
	*/
	enum class OperationalLimitDirectionKind
	{
		/**
		 * High means that a monitored value above the limit value is a violation.   If applied to a terminal flow, the positive direction is into the terminal.
		 */
		high,
		/**
		 * Low means a monitored value below the limit is a violation.  If applied to a terminal flow, the positive direction is into the terminal.
		 */
		low,
		/**
		 * An absoluteValue limit means that a monitored absolute value above the limit value is a violation.
		 */
		absoluteValue,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::OperationalLimitDirectionKind& rop);
}
#endif
