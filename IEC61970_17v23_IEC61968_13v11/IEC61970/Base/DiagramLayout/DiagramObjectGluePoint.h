///////////////////////////////////////////////////////////
//  DiagramObjectGluePoint.h
//  Implementation of the Class DiagramObjectGluePoint
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef DIAGRAMOBJECTGLUEPOINT_H
#define DIAGRAMOBJECTGLUEPOINT_H
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * This is used for grouping diagram object points from different diagram objects
			 * that are considered to be glued together in a diagram even if they are not at
			 * the exact same coordinates.
			 */
			class DiagramObjectGluePoint : public BaseClass
			{

			public:
				DiagramObjectGluePoint();
				virtual ~DiagramObjectGluePoint();

			};

		}

	}

}
#endif // DIAGRAMOBJECTGLUEPOINT_H
