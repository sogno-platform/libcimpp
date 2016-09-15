///////////////////////////////////////////////////////////
//  OperationalLimit.h
//  Implementation of the Class OperationalLimit
//  Created on:      28-Jan-2016 12:45:52
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_2EAC39B8_4C55_470f_9A7B_9D08844FAB1A__INCLUDED_)
#define EA_2EAC39B8_4C55_470f_9A7B_9D08844FAB1A__INCLUDED_

#include "IEC61970/Base/OperationalLimits/OperationalLimitType.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * A value associated with a specific kind of limit.
			 * The sub class value attribute shall be positive.
			 * The sub class value attribute is inversely proportional to OperationalLimitType.
			 * acceptableDuration (acceptableDuration for short). A pair of value_x and
			 * acceptableDuration_x are related to each other as follows:
			 * if value_1 > value_2 > value_3 >... then
			 * acceptableDuration_1 < acceptableDuration_2 < acceptableDuration_3 < ...
			 * A value_x with direction="high" shall be greater than a value_y with
			 * direction="low".
			 */
			class OperationalLimit : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				OperationalLimit();
				virtual ~OperationalLimit();
				/**
				 * The limit type associated with this limit.
				 */
				IEC61970::Base::OperationalLimits::OperationalLimitType *OperationalLimitType;

			};

		}

	}

}
#endif // !defined(EA_2EAC39B8_4C55_470f_9A7B_9D08844FAB1A__INCLUDED_)
