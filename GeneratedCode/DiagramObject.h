///////////////////////////////////////////////////////////
//  DiagramObject.h
//  Implementation of the Class DiagramObject
//  Created on:      27-Nov-2015 11:06:12
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_A77497A8_2CD8_4c56_9BFD_4E11CF1C44EC__INCLUDED_)
#define EA_A77497A8_2CD8_4c56_9BFD_4E11CF1C44EC__INCLUDED_

#include "Integer.h"
#include "Boolean.h"
#include "Float.h"
#include "AngleDegrees.h"
#include "Diagram.h"
#include "VisibilityLayer.h"
#include "DiagramObjectPoint.h"
#include "DiagramObjectStyle.h"
#include "IdentifiedObject.h"

/**
 * An object that defines one or more points in a given space. This object can be
 * associated with anything that specializes IdentifiedObject. For single line
 * diagrams such objects typically include such items as analog values, breakers,
 * disconnectors, power transformers, and transmission lines.
 */
class DiagramObject : public IdentifiedObject
{

public:
	DiagramObject();
	/**
	 * The drawing order of this element. The higher the number, the later the element
	 * is drawn in sequence. This is used to ensure that elements that overlap are
	 * rendered in the correct order.
	 */
	Integer drawingOrder;
	/**
	 * Defines whether or not the diagram objects points define the boundaries of a
	 * polygon or the routing of a polyline. If this value is true then a receiving
	 * application should consider the first and last points to be connected.
	 */
	Boolean isPolygon;
	/**
	 * The offset in the X direction. This is used for defining the offset from centre
	 * for rendering an icon (the default is that a single point specifies the centre
	 * of the icon).
	 * 
	 * The offset is in per-unit with 0 indicating there is no offset from the
	 * horizontal centre of the icon.  -0.5 indicates it is offset by 50% to the left
	 * and 0.5 indicates an offset of 50% to the right.
	 */
	Float offsetX;
	/**
	 * The offset in the Y direction. This is used for defining the offset from centre
	 * for rendering an icon (the default is that a single point specifies the centre
	 * of the icon).
	 * 
	 * The offset is in per-unit with 0 indicating there is no offset from the
	 * vertical centre of the icon.  The offset direction is dependent on the
	 * orientation of the diagram, with -0.5 and 0.5 indicating an offset of +/- 50%
	 * on the vertical axis.
	 */
	Float offsetY;
	/**
	 * Sets the angle of rotation of the diagram object.  Zero degrees is pointing to
	 * the top of the diagram.  Rotation is clockwise.
	 */
	AngleDegrees rotation;
	/**
	 * A diagram object is part of a diagram.
	 */
	std::shared_ptr<Diagram> Diagram;
	/**
	 * A diagram object can be part of multiple visibility layers.
	 */
	std::vector<std::shared_ptr<VisibilityLayer>> VisibilityLayers;
	/**
	 * A diagram object can have 0 or more points to reflect its layout position,
	 * routing (for polylines) or boundary (for polygons).
	 */
	std::vector<std::shared_ptr<DiagramObjectPoint>> DiagramObjectPoints;
	/**
	 * A diagram object has a style associated that provides a reference for the style
	 * used in the originating system.
	 */
	std::shared_ptr<DiagramObjectStyle> DiagramObjectStyle;

};
#endif // !defined(EA_A77497A8_2CD8_4c56_9BFD_4E11CF1C44EC__INCLUDED_)
