#ifndef OperationalLimitDirectionKind_H
#define OperationalLimitDirectionKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The direction attribute describes the side of  a limit that is a violation.
	*/
	class OperationalLimitDirectionKind
	{
	public:
		enum OperationalLimitDirectionKind_ENUM
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

		OperationalLimitDirectionKind() : value(), initialized(false) {}
		OperationalLimitDirectionKind(OperationalLimitDirectionKind_ENUM value) : value(value), initialized(true) {}

		OperationalLimitDirectionKind& operator=(OperationalLimitDirectionKind_ENUM rop);
		operator OperationalLimitDirectionKind_ENUM() const;

		OperationalLimitDirectionKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, OperationalLimitDirectionKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const OperationalLimitDirectionKind& obj);
	};
}
#endif
