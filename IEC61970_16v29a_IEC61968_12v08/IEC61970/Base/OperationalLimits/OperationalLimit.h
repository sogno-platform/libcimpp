///////////////////////////////////////////////////////////
//  OperationalLimit.h
//  Implementation of the Class OperationalLimit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef OPERATIONALLIMIT_H
#define OPERATIONALLIMIT_H

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
#endif // OPERATIONALLIMIT_H
