///////////////////////////////////////////////////////////
//  DiagramObjectGluePoint.h
//  Implementation of the Class DiagramObjectGluePoint
//  Created on:      28-Jan-2016 12:44:04
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_57A0F7C1_B5B9_4088_B432_E8FC4B6FB278__INCLUDED_)
#define EA_57A0F7C1_B5B9_4088_B432_E8FC4B6FB278__INCLUDED_

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
#endif // !defined(EA_57A0F7C1_B5B9_4088_B432_E8FC4B6FB278__INCLUDED_)
