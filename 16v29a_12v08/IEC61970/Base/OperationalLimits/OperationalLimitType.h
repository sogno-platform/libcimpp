///////////////////////////////////////////////////////////
//  OperationalLimitType.h
//  Implementation of the Class OperationalLimitType
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef OPERATIONALLIMITTYPE_H
#define OPERATIONALLIMITTYPE_H

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimitDirectionKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * The operational meaning of a category of limits.
			 */
			class OperationalLimitType : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				OperationalLimitType();
				virtual ~OperationalLimitType();
				/**
				 * The nominal acceptable duration of the limit.  Limits are commonly expressed in
				 * terms of the a time limit for which the limit is normally acceptable.   The
				 * actual acceptable duration of a specific limit may depend on other local
				 * factors such as temperature or wind speed.
				 */
				IEC61970::Base::Domain::Seconds acceptableDuration;
				/**
				 * The direction of the limit.
				 */
				IEC61970::Base::OperationalLimits::OperationalLimitDirectionKind direction = IEC61970::Base::OperationalLimits::OperationalLimitDirectionKind::_undef;

			};

		}

	}

}
#endif // OPERATIONALLIMITTYPE_H
