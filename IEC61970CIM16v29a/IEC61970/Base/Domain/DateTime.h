///////////////////////////////////////////////////////////
//  DateTime.h
//  Implementation of the Class DateTime
///////////////////////////////////////////////////////////

#ifndef DATETIME_H
#define DATETIME_H

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
#endif // DATETIME_H
