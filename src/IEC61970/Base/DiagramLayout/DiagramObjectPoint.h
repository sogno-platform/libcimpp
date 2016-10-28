///////////////////////////////////////////////////////////
//  DiagramObjectPoint.h
//  Implementation of the Class DiagramObjectPoint
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef DIAGRAMOBJECTPOINT_H
#define DIAGRAMOBJECTPOINT_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/DiagramLayout/DiagramObjectGluePoint.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * A point in a given space defined by 3 coordinates and associated to a diagram
			 * object.  The coordinates may be positive or negative as the origin does not
			 * have to be in the corner of a diagram.
			 */
			class DiagramObjectPoint : public BaseClass
			{

			public:
				DiagramObjectPoint();
				virtual ~DiagramObjectPoint();
				/**
				 * The sequence position of the point, used for defining the order of points for
				 * diagram objects acting as a polyline or polygon with more than one point.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;
				/**
				 * The X coordinate of this point.
				 */
				IEC61970::Base::Domain::Float xPosition;
				/**
				 * The Y coordinate of this point.
				 */
				IEC61970::Base::Domain::Float yPosition;
				/**
				 * The Z coordinate of this point.
				 */
				IEC61970::Base::Domain::Float zPosition;
				/**
				 * The 'glue' point to which this point is associated.
				 */
				IEC61970::Base::DiagramLayout::DiagramObjectGluePoint *DiagramObjectGluePoint;

			};

		}

	}

}
#endif // DIAGRAMOBJECTPOINT_H
