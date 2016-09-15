///////////////////////////////////////////////////////////
//  MonthDayInterval.h
//  Implementation of the Class MonthDayInterval
//  Created on:      28-Jan-2016 12:45:44
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_3ABD9079_7932_4a08_A099_E16873347128__INCLUDED_)
#define EA_3ABD9079_7932_4a08_A099_E16873347128__INCLUDED_

#include "IEC61970/Base/Domain/MonthDay.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two times specified as mont and date.
			 */
			class MonthDayInterval : public BaseClass
			{

			public:
				MonthDayInterval();
				virtual ~MonthDayInterval();
				/**
				 * End time of this interval.
				 */
				IEC61970::Base::Domain::MonthDay end;
				/**
				 * Start time of this interval.
				 */
				IEC61970::Base::Domain::MonthDay start;

			};

		}

	}

}
#endif // !defined(EA_3ABD9079_7932_4a08_A099_E16873347128__INCLUDED_)
