///////////////////////////////////////////////////////////
//  OrientationKind.h
//  Implementation of the Class OrientationKind
//  Created on:      28-Jan-2016 12:45:53
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_FCE496C7_F151_48db_9EB9_5DA3A64C5F7B__INCLUDED_)
#define EA_FCE496C7_F151_48db_9EB9_5DA3A64C5F7B__INCLUDED_

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
				positive,
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
#endif // !defined(EA_FCE496C7_F151_48db_9EB9_5DA3A64C5F7B__INCLUDED_)
