#ifndef ExcST6BOELselectorKind_H
#define ExcST6BOELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of connection for the OEL input used for static excitation systems type 6B.
	*/
	class ExcST6BOELselectorKind
	{
	public:
		enum ExcST6BOELselectorKind_ENUM
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

		ExcST6BOELselectorKind() : value(), initialized(false) {}
		ExcST6BOELselectorKind(ExcST6BOELselectorKind_ENUM value) : value(value), initialized(true) {}

		ExcST6BOELselectorKind& operator=(ExcST6BOELselectorKind_ENUM rop);
		operator ExcST6BOELselectorKind_ENUM() const;

		ExcST6BOELselectorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcST6BOELselectorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcST6BOELselectorKind& obj);
	};
}
#endif
