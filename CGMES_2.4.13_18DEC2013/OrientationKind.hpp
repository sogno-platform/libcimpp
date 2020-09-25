#ifndef OrientationKind_H
#define OrientationKind_H

namespace CIMPP {
	/*
	The orientation of the coordinate system with respect to top, left, and the coordinate number system.
	*/
	enum class OrientationKind
	{
		/**
		 * For 2D diagrams, a negative orientation gives the left-hand orientation (favoured by computer graphics displays) with X values increasing from left to right and Y values increasing from top to bottom.   This is also known as a left hand orientation.
		 */
		negative,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::OrientationKind& rop);
}
#endif
