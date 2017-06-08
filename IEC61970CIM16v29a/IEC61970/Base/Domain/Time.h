#ifndef TIME_H
#define TIME_H

#include "IEC61970/Base/Domain/String.h"
#include <string>
#include <iostream>
#include <istream>

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

				Time(IEC61970::Base::Domain::String value);
				Time& operator=(IEC61970::Base::Domain::String &rop);
				friend std::istream& operator>>(std::istream& lop, Time& rop);
				operator IEC61970::Base::Domain::String();



				IEC61970::Base::Domain::String value;
				bool initialized = false;
			};

		}

	}

}
#endif // TIME_H
