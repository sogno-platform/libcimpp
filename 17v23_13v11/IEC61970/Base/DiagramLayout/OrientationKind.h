///////////////////////////////////////////////////////////
//  OrientationKind.h
//  Implementation of the Class OrientationKind
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef ORIENTATIONKIND_H
#define ORIENTATIONKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * The orientation of the coordinate system with respect to top, left, and the
			 * coordinate number system.
			 */
			enum class OrientationKind
			{
				/**
				 * For 2D diagrams, a positive orientation will result in X values increasing from
				 * left to right and Y values increasing from bottom to top.  This is also known
				 * as a right hand orientation.
				 */
				 _undef = -1, 	positive,
				/**
				 * For 2D diagrams, a negative orientation gives the left-hand orientation
				 * (favoured by computer graphics displays) with X values increasing from left to
				 * right and Y values increasing from top to bottom.   This is also known as a
				 * left hand orientation.
				 */
				negative
			};

		}

	}

}
#endif // ORIENTATIONKIND_H
