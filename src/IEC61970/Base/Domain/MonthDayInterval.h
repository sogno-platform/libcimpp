///////////////////////////////////////////////////////////
//  MonthDayInterval.h
//  Implementation of the Class MonthDayInterval
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef MONTHDAYINTERVAL_H
#define MONTHDAYINTERVAL_H

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
#endif // MONTHDAYINTERVAL_H
