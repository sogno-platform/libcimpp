///////////////////////////////////////////////////////////
//  DiagramObjectPoint.h
//  Implementation of the Class DiagramObjectPoint
//  Created on:      27-Nov-2015 11:06:12
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_C8D66074_118C_452e_BC76_5AF368C4EA4F__INCLUDED_)
#define EA_C8D66074_118C_452e_BC76_5AF368C4EA4F__INCLUDED_

#include "Integer.h"
#include "Float.h"
#include "DiagramObjectGluePoint.h"

/**
 * A point in a given space defined by 3 coordinates and associated to a diagram
 * object.  The coordinates may be positive or negative as the origin does not
 * have to be in the corner of a diagram.  
 */
class DiagramObjectPoint
{

public:
	DiagramObjectPoint();
	/**
	 * The sequence position of the point, used for defining the order of points for
	 * diagram objects acting as a polyline or polygon with more than one point.
	 */
	Integer sequenceNumber;
	/**
	 * The X coordinate of this point.
	 */
	Float xPosition;
	/**
	 * The Y coordinate of this point.
	 */
	Float yPosition;
	/**
	 * The Z coordinate of this point.
	 */
	Float zPosition;
	/**
	 * The 'glue' point to which this point is associated.
	 */
	DiagramObjectGluePoint *DiagramObjectGluePoint;

};
#endif // !defined(EA_C8D66074_118C_452e_BC76_5AF368C4EA4F__INCLUDED_)
