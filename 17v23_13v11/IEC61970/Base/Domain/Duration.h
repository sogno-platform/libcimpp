#ifndef DURATION_H
#define DURATION_H

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
			 * Duration as "PnYnMnDTnHnMnS" which conforms to ISO 8601, where nY expresses a
			 * number of years, nM a number of months, nD a number of days. The letter T
			 * separates the date expression from the time expression and, after it, nH
			 * identifies a number of hours, nM a number of minutes and nS a number of seconds.
			 * The number of seconds could be expressed as a decimal number, but all other
			 * numbers are integers.
			 */
			class Duration
			{

			public:
				Duration();
				virtual ~Duration();

				Duration(IEC61970::Base::Domain::String value);
				Duration& operator=(IEC61970::Base::Domain::String &rop);
				friend std::istream& operator>>(std::istream& lop, Duration& rop);
				operator IEC61970::Base::Domain::String();



				IEC61970::Base::Domain::String value;
				bool initialized = false;
			};

		}

	}

}
#endif // DURATION_H
