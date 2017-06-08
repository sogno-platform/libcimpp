#ifndef DATE_H
#define DATE_H

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
			 * Date as "yyyy-mm-dd", which conforms with ISO 8601. UTC time zone is specified
			 * as "yyyy-mm-ddZ". A local timezone relative UTC is specified as "yyyy-mm-dd(+/-
			 * )hh:mm".
			 */
			class Date
			{

			public:
				Date();
				virtual ~Date();

				Date(IEC61970::Base::Domain::String value);
				Date& operator=(IEC61970::Base::Domain::String &rop);
				friend std::istream& operator>>(std::istream& lop, Date& rop);
				operator IEC61970::Base::Domain::String();



				IEC61970::Base::Domain::String value;
				bool initialized = false;
			};

		}

	}

}
#endif // DATE_H
