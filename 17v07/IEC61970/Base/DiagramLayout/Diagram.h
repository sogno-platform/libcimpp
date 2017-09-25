///////////////////////////////////////////////////////////
//  Diagram.h
//  Implementation of the Class Diagram
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef DIAGRAM_H
#define DIAGRAM_H

#include "IEC61970/Base/DiagramLayout/OrientationKind.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * The diagram being exchanged.  The coordinate system is a standard Cartesian
			 * coordinate system and the orientation attribute defines the orientation.
			 */
			class Diagram : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Diagram();
				virtual ~Diagram();
				/**
				 * Coordinate system orientation of the diagram.
				 */
				IEC61970::Base::DiagramLayout::OrientationKind orientation;
				/**
				 * X coordinate of the first corner of the initial view.
				 */
				IEC61970::Base::Domain::Float x1InitialView;
				/**
				 * X coordinate of the second corner of the initial view.
				 */
				IEC61970::Base::Domain::Float x2InitialView;
				/**
				 * Y coordinate of the first corner of the initial view.
				 */
				IEC61970::Base::Domain::Float y1InitialView;
				/**
				 * Y coordinate of the second corner of the initial view.
				 */
				IEC61970::Base::Domain::Float y2InitialView;

			};

		}

	}

}
#endif // DIAGRAM_H
