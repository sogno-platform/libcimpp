///////////////////////////////////////////////////////////
//  Diagram.h
//  Implementation of the Class Diagram
//  Created on:      27-Nov-2015 11:06:11
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_C51B28A6_5C8E_482a_B761_3032D3D63B28__INCLUDED_)
#define EA_C51B28A6_5C8E_482a_B761_3032D3D63B28__INCLUDED_

#include "OrientationKind.h"
#include "Float.h"
#include "IdentifiedObject.h"

/**
 * The diagram being exchanged.  The coordinate system is a standard Cartesian
 * coordinate system and the orientation attribute defines the orientation.
 */
class Diagram : public IdentifiedObject
{

public:
	Diagram();
	/**
	 * Coordinate system orientation of the diagram.
	 */
	OrientationKind orientation;
	/**
	 * X coordinate of the first corner of the initial view.
	 */
	Float x1InitialView;
	/**
	 * X coordinate of the second corner of the initial view.
	 */
	Float x2InitialView;
	/**
	 * Y coordinate of the first corner of the initial view.
	 */
	Float y1InitialView;
	/**
	 * Y coordinate of the second corner of the initial view.
	 */
	Float y2InitialView;

};
#endif // !defined(EA_C51B28A6_5C8E_482a_B761_3032D3D63B28__INCLUDED_)
