#ifndef OrientationKind_H
#define OrientationKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The orientation of the coordinate system with respect to top, left, and the coordinate number system.
	*/
	class OrientationKind
	{
	public:
		enum OrientationKind_ENUM
		{
			/**
			 * For 2D diagrams, a negative orientation gives the left-hand orientation (favoured by computer graphics displays) with X values increasing from left to right and Y values increasing from top to bottom.   This is also known as a left hand orientation.
			 */
			negative,
		};

		OrientationKind() : value(), initialized(false) {}
		OrientationKind(OrientationKind_ENUM value) : value(value), initialized(true) {}

		OrientationKind& operator=(OrientationKind_ENUM rop);
		operator OrientationKind_ENUM() const;

		OrientationKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, OrientationKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const OrientationKind& obj);
	};
}
#endif
