///////////////////////////////////////////////////////////
//  OperationalLimitSet.h
//  Implementation of the Class OperationalLimitSet
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef OPERATIONALLIMITSET_H
#define OPERATIONALLIMITSET_H

#include <list>

#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Core/ACDCTerminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * A set of limits associated with equipment.  Sets of limits might apply to a
			 * specific temperature, or season for example. A set of limits may contain
			 * different severities of limit levels that would apply to the same equipment.
			 * The set may contain limits of different types such as apparent power and
			 * current limits or high and low voltage limits  that are logically applied
			 * together as a set.
			 */
			class OperationalLimitSet : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				OperationalLimitSet();
				virtual ~OperationalLimitSet();
				/**
				 * Values of equipment limits.
				 */
				std::list<IEC61970::Base::OperationalLimits::OperationalLimit*> OperationalLimitValue;
				/**
				 * The equipment to which the limit set applies.
				 */
				IEC61970::Base::Core::Equipment *Equipment;
				IEC61970::Base::Core::ACDCTerminal *Terminal;

			};

		}

	}

}
#endif // OPERATIONALLIMITSET_H
