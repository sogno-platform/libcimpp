///////////////////////////////////////////////////////////
//  Date.h
//  Implementation of the Class Date
//  Created on:      28-Jan-2016 12:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_B2876DBE_6F86_4066_B3E1_29EB7BE75090__INCLUDED_)
#define EA_B2876DBE_6F86_4066_B3E1_29EB7BE75090__INCLUDED_

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
#endif // !defined(EA_B2876DBE_6F86_4066_B3E1_29EB7BE75090__INCLUDED_)
