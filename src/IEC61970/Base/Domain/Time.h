///////////////////////////////////////////////////////////
//  Time.h
//  Implementation of the Class Time
//  Created on:      28-Jan-2016 12:47:18
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_DF4F8038_5042_4353_998C_59A5610A8D08__INCLUDED_)
#define EA_DF4F8038_5042_4353_998C_59A5610A8D08__INCLUDED_

#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Time as "hh:mm:ss.sss", which conforms with ISO 8601. UTC time zone is
			 * specified as "hh:mm:ss.sssZ". A local timezone relative UTC is specified as "hh:
			 * mm:ss.sss±hh:mm". The second component (shown here as "ss.sss") could have any
			 * number of digits in its fractional part to allow any kind of precision beyond
			 * seconds.
			 */
			class Time
			{

			public:
				Time();
				virtual ~Time();
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // !defined(EA_DF4F8038_5042_4353_998C_59A5610A8D08__INCLUDED_)
