#ifndef MONTHDAY_H
#define MONTHDAY_H

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
			 * MonthDay format as "--mm-dd", which conforms with XSD data type gMonthDay.
			 */
			class MonthDay
			{

			public:
				MonthDay();
				virtual ~MonthDay();

				MonthDay(IEC61970::Base::Domain::String value);
				MonthDay& operator=(IEC61970::Base::Domain::String &rop);
				friend std::istream& operator>>(std::istream& lop, MonthDay& rop);
				operator IEC61970::Base::Domain::String();



				IEC61970::Base::Domain::String value;
				bool initialized = false;
			};

		}

	}

}
#endif // MONTHDAY_H
