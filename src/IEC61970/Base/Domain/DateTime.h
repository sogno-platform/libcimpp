///////////////////////////////////////////////////////////
//  DateTime.h
//  Implementation of the Class DateTime
//  Created on:      28-Jan-2016 12:43:53
///////////////////////////////////////////////////////////

#if !defined(EA_2802D7D0_FE3A_4e64_8A0E_299BBD5933F7__INCLUDED_)
#define EA_2802D7D0_FE3A_4e64_8A0E_299BBD5933F7__INCLUDED_

#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Date and time as "yyyy-mm-ddThh:mm:ss.sss", which conforms with ISO 8601. UTC
			 * time zone is specified as "yyyy-mm-ddThh:mm:ss.sssZ". A local timezone relative
			 * UTC is specified as "yyyy-mm-ddThh:mm:ss.sss-hh:mm". The second component
			 * (shown here as "ss.sss") could have any number of digits in its fractional part
			 * to allow any kind of precision beyond seconds.
			 */
			class DateTime
			{

			public:
				DateTime();
				virtual ~DateTime();
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // !defined(EA_2802D7D0_FE3A_4e64_8A0E_299BBD5933F7__INCLUDED_)
