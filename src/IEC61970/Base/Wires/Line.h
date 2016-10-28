///////////////////////////////////////////////////////////
//  Line.h
//  Implementation of the Class Line
///////////////////////////////////////////////////////////

#ifndef LINE_H
#define LINE_H

#include "IEC61970/Base/Core/EquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Contains equipment beyond a substation belonging to a power transmission line. 
			 */
			class Line : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Line();
				virtual ~Line();

			};

		}

	}

}
#endif // LINE_H
