///////////////////////////////////////////////////////////
//  DiagramObjectStyle.h
//  Implementation of the Class DiagramObjectStyle
//  Created on:      28-Jan-2016 12:44:05
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_7B3391FB_F635_4667_AAB1_773B4FD1300C__INCLUDED_)
#define EA_7B3391FB_F635_4667_AAB1_773B4FD1300C__INCLUDED_

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
#endif // !defined(EA_7B3391FB_F635_4667_AAB1_773B4FD1300C__INCLUDED_)
