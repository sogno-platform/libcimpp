///////////////////////////////////////////////////////////
//  VisibilityLayer.h
//  Implementation of the Class VisibilityLayer
//  Created on:      28-Jan-2016 12:47:34
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_F7E1F931_EA65_40d0_88F4_CD07510F020E__INCLUDED_)
#define EA_F7E1F931_EA65_40d0_88F4_CD07510F020E__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
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
			class VisibilityLayer : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				VisibilityLayer();
				virtual ~VisibilityLayer();
				/**
				 * The drawing order for this layer.  The higher the number, the later the layer
				 * and the objects within it are rendered.
				 */
				IEC61970::Base::Domain::Integer drawingOrder;

			};

		}

	}

}
#endif // !defined(EA_F7E1F931_EA65_40d0_88F4_CD07510F020E__INCLUDED_)
