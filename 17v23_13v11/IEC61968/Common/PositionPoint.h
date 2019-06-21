///////////////////////////////////////////////////////////
//  PositionPoint.h
//  Implementation of the Class PositionPoint
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POSITIONPOINT_H
#define POSITIONPOINT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Set of spatial coordinates that determine a point, defined in the coordinate
		 * system specified in 'Location.CoordinateSystem'. Use a single position point
		 * instance to desribe a point-oriented location. Use a sequence of position
		 * points to describe a line-oriented object (physical location of non-point
		 * oriented objects like cables or lines), or area of an object (like a substation
		 * or a geographical zone - in this case, have first and last position point with
		 * the same values).
		 */
		class PositionPoint : public BaseClass
		{

		public:
			PositionPoint();
			virtual ~PositionPoint();
			/**
			 * Zero-relative sequence number of this group within a series of points; used
			 * when there is a need to express disjoint groups of points that are considered
			 * to be part of a single location.
			 */
			IEC61970::Base::Domain::Integer groupNumber;
			/**
			 * Zero-relative sequence number of this point within a series of points.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * X axis position.
			 */
			IEC61970::Base::Domain::String xPosition;
			/**
			 * Y axis position.
			 */
			IEC61970::Base::Domain::String yPosition;
			/**
			 * (if applicable) Z axis position.
			 */
			IEC61970::Base::Domain::String zPosition;

		};

	}

}
#endif // POSITIONPOINT_H
