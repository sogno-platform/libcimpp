///////////////////////////////////////////////////////////
//  MonthDay.h
//  Implementation of the Class MonthDay
//  Created on:      28-Jan-2016 12:45:44
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_0C8C013E_34B8_4b08_8C87_89E52C832AC5__INCLUDED_)
#define EA_0C8C013E_34B8_4b08_8C87_89E52C832AC5__INCLUDED_

#include "IEC61970/Base/Domain/String.h"

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
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // !defined(EA_0C8C013E_34B8_4b08_8C87_89E52C832AC5__INCLUDED_)
