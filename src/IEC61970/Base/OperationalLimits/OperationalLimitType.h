///////////////////////////////////////////////////////////
//  OperationalLimitType.h
//  Implementation of the Class OperationalLimitType
//  Created on:      28-Jan-2016 12:45:53
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_DDFA1869_461A_4830_A7BD_60B3EF79D89E__INCLUDED_)
#define EA_DDFA1869_461A_4830_A7BD_60B3EF79D89E__INCLUDED_

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
				IEC61970::Base::OperationalLimits::OperationalLimitDirectionKind direction;

			};

		}

	}

}
#endif // !defined(EA_DDFA1869_461A_4830_A7BD_60B3EF79D89E__INCLUDED_)
