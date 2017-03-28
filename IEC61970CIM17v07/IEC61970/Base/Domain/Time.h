///////////////////////////////////////////////////////////
//  Time.h
//  Implementation of the Class Time
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef TIME_H
#define TIME_H

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
#endif // TIME_H
