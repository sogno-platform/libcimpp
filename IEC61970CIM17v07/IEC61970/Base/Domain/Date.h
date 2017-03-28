///////////////////////////////////////////////////////////
//  Date.h
//  Implementation of the Class Date
///////////////////////////////////////////////////////////

#ifndef DATE_H
#define DATE_H

#include "IEC61970/Base/Domain/String.h"

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
				Date(IEC61970::Base::Domain::String date);
				virtual ~Date();
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // DATE_H
