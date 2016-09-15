///////////////////////////////////////////////////////////
//  ContingencyElement.h
//  Implementation of the Class ContingencyElement
//  Created on:      28-Jan-2016 12:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_1A79246D_A613_455f_90B0_B75261A34E41__INCLUDED_)
#define EA_1A79246D_A613_455f_90B0_B75261A34E41__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Contingency
		{
			/**
			 * An element of a system event to be studied by contingency analysis,
			 * representing a change in status of a single piece of equipment. 
			 */
			class ContingencyElement : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ContingencyElement();
				virtual ~ContingencyElement();

			};

		}

	}

}
#endif // !defined(EA_1A79246D_A613_455f_90B0_B75261A34E41__INCLUDED_)
