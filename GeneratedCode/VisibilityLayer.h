///////////////////////////////////////////////////////////
//  VisibilityLayer.h
//  Implementation of the Class VisibilityLayer
//  Created on:      27-Nov-2015 11:08:28
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_590AE609_F105_476a_83C0_2D3372011FC3__INCLUDED_)
#define EA_590AE609_F105_476a_83C0_2D3372011FC3__INCLUDED_

#include "Integer.h"
#include "IdentifiedObject.h"

/**
 * Layers are typically used for grouping diagram objects according to themes and
 * scales. Themes are used to display or hide certain information (e.g., lakes,
 * borders), while scales are used for hiding or displaying information depending
 * on the current zoom level (hide text when it is too small to be read, or when
 * it exceeds the screen size). This is also called de-cluttering.
 * 
 * CIM based graphics exchange will support an m:n relationship between diagram
 * objects and layers. It will be the task of the importing system to convert an m:
 * n case into an appropriate 1:n representation if the importing system does not
 * support m:n.
 */
class VisibilityLayer : public IdentifiedObject
{

public:
	VisibilityLayer();
	/**
	 * The drawing order for this layer.  The higher the number, the later the layer
	 * and the objects within it are rendered.
	 */
	Integer drawingOrder;

};
#endif // !defined(EA_590AE609_F105_476a_83C0_2D3372011FC3__INCLUDED_)
