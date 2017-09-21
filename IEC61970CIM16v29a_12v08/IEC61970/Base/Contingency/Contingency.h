///////////////////////////////////////////////////////////
//  Contingency.h
//  Implementation of the Class Contingency
///////////////////////////////////////////////////////////

#ifndef CONTINGENCY_H
#define CONTINGENCY_H

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
#endif // CONTINGENCY_H
