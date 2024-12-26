#ifndef PetersenCoilModeKind_H
#define PetersenCoilModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The mode of operation for a Petersen coil.
	*/
	class PetersenCoilModeKind
	{
	public:
		enum PetersenCoilModeKind_ENUM
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

		PetersenCoilModeKind() : value(), initialized(false) {}
		PetersenCoilModeKind(PetersenCoilModeKind_ENUM value) : value(value), initialized(true) {}

		PetersenCoilModeKind& operator=(PetersenCoilModeKind_ENUM rop);
		operator PetersenCoilModeKind_ENUM() const;

		PetersenCoilModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, PetersenCoilModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const PetersenCoilModeKind& obj);
	};
}
#endif
