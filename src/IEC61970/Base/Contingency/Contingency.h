///////////////////////////////////////////////////////////
//  Contingency.h
//  Implementation of the Class Contingency
//  Created on:      28-Jan-2016 12:43:40
///////////////////////////////////////////////////////////

#if !defined(EA_5DF27732_22A2_4cf1_8F1D_15C1A6F20A58__INCLUDED_)
#define EA_5DF27732_22A2_4cf1_8F1D_15C1A6F20A58__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Contingency/ContingencyElement.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Contingency
		{
			/**
			 * An event threatening system reliability, consisting of one or more contingency
			 * elements.
			 */
			class Contingency : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Contingency();
				virtual ~Contingency();
				/**
				 * Set true if must study this contingency.
				 */
				IEC61970::Base::Domain::Boolean mustStudy;
				/**
				 * A contingency can have any number of contingency elements.
				 */
				std::list<IEC61970::Base::Contingency::ContingencyElement*> ContingencyElement;

			};

		}

	}

}
#endif // !defined(EA_5DF27732_22A2_4cf1_8F1D_15C1A6F20A58__INCLUDED_)
