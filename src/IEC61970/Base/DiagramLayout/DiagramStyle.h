///////////////////////////////////////////////////////////
//  DiagramStyle.h
//  Implementation of the Class DiagramStyle
//  Created on:      28-Jan-2016 12:44:06
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_5F8CF8D7_D28F_4f29_995E_EEDDE8BF010B__INCLUDED_)
#define EA_5F8CF8D7_D28F_4f29_995E_EEDDE8BF010B__INCLUDED_

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/DiagramLayout/Diagram.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * The diagram style refer to a style used by the originating system for a diagram.
			 *  A diagram style describes information such as schematic, geographic, bus-
			 * branch etc.
			 */
			class DiagramStyle : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DiagramStyle();
				virtual ~DiagramStyle();
				/**
				 * A DiagramStyle can be used by many Diagrams.
				 */
				std::list<IEC61970::Base::DiagramLayout::Diagram*> Diagram;

			};

		}

	}

}
#endif // !defined(EA_5F8CF8D7_D28F_4f29_995E_EEDDE8BF010B__INCLUDED_)
