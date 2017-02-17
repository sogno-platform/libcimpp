///////////////////////////////////////////////////////////
//  MonthDay.h
//  Implementation of the Class MonthDay
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef MONTHDAY_H
#define MONTHDAY_H

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
#endif // MONTHDAY_H
