///////////////////////////////////////////////////////////
//  DiagramStyle.h
//  Implementation of the Class DiagramStyle
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DIAGRAMSTYLE_H
#define DIAGRAMSTYLE_H

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
#endif // DIAGRAMSTYLE_H
