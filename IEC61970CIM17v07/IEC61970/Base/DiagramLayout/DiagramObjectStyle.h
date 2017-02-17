///////////////////////////////////////////////////////////
//  DiagramObjectStyle.h
//  Implementation of the Class DiagramObjectStyle
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef DIAGRAMOBJECTSTYLE_H
#define DIAGRAMOBJECTSTYLE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * A reference to a style used by the originating system for a diagram object.  A
			 * diagram object style describes information such as line thickness, shape such
			 * as circle or rectangle etc, and color.
			 */
			class DiagramObjectStyle : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DiagramObjectStyle();
				virtual ~DiagramObjectStyle();

			};

		}

	}

}
#endif // DIAGRAMOBJECTSTYLE_H
