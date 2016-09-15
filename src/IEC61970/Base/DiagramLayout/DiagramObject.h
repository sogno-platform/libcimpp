///////////////////////////////////////////////////////////
//  DiagramObject.h
//  Implementation of the Class DiagramObject
//  Created on:      28-Jan-2016 12:44:04
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_1E27AB75_BB40_4e27_A8DF_D1B19AC819F5__INCLUDED_)
#define EA_1E27AB75_BB40_4e27_A8DF_D1B19AC819F5__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/DiagramLayout/Diagram.h"
#include "IEC61970/Base/DiagramLayout/VisibilityLayer.h"
#include "IEC61970/Base/DiagramLayout/DiagramObjectPoint.h"
#include "IEC61970/Base/DiagramLayout/DiagramObjectStyle.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * An object that defines one or more points in a given space. This object can be
			 * associated with anything that specializes IdentifiedObject. For single line
			 * diagrams such objects typically include such items as analog values, breakers,
			 * disconnectors, power transformers, and transmission lines.
			 */
			class DiagramObject : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DiagramObject();
				virtual ~DiagramObject();
				/**
				 * The drawing order of this element. The higher the number, the later the element
				 * is drawn in sequence. This is used to ensure that elements that overlap are
				 * rendered in the correct order.
				 */
				IEC61970::Base::Domain::Integer drawingOrder;
				/**
				 * Defines whether or not the diagram objects points define the boundaries of a
				 * polygon or the routing of a polyline. If this value is true then a receiving
				 * application should consider the first and last points to be connected.
				 */
				IEC61970::Base::Domain::Boolean isPolygon;
				/**
				 * The offset in the X direction. This is used for defining the offset from centre
				 * for rendering an icon (the default is that a single point specifies the centre
				 * of the icon).
				 * 
				 * The offset is in per-unit with 0 indicating there is no offset from the
				 * horizontal centre of the icon.  -0.5 indicates it is offset by 50% to the left
				 * and 0.5 indicates an offset of 50% to the right.
				 */
				IEC61970::Base::Domain::Float offsetX;
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
				IEC61970::Base::Domain::Float offsetY;
				/**
				 * Sets the angle of rotation of the diagram object.  Zero degrees is pointing to
				 * the top of the diagram.  Rotation is clockwise.
				 */
				IEC61970::Base::Domain::AngleDegrees rotation;
				/**
				 * A diagram object is part of a diagram.
				 */
				IEC61970::Base::DiagramLayout::Diagram *Diagram;
				/**
				 * A diagram object can be part of multiple visibility layers.
				 */
				std::list<IEC61970::Base::DiagramLayout::VisibilityLayer*> VisibilityLayers;
				/**
				 * A diagram object can have 0 or more points to reflect its layout position,
				 * routing (for polylines) or boundary (for polygons).
				 */
				std::list<IEC61970::Base::DiagramLayout::DiagramObjectPoint*> DiagramObjectPoints;
				/**
				 * A diagram object has a style associated that provides a reference for the style
				 * used in the originating system.
				 */
				IEC61970::Base::DiagramLayout::DiagramObjectStyle *DiagramObjectStyle;

			};

		}

	}

}
#endif // !defined(EA_1E27AB75_BB40_4e27_A8DF_D1B19AC819F5__INCLUDED_)
