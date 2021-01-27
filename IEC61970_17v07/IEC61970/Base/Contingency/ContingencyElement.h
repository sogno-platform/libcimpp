///////////////////////////////////////////////////////////
//  ContingencyElement.h
//  Implementation of the Class ContingencyElement
///////////////////////////////////////////////////////////

#ifndef CONTINGENCYELEMENT_H
#define CONTINGENCYELEMENT_H

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
#endif // CONTINGENCYELEMENT_H
