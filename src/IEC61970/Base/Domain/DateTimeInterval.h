///////////////////////////////////////////////////////////
//  DateTimeInterval.h
//  Implementation of the Class DateTimeInterval
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DATETIMEINTERVAL_H
#define DATETIMEINTERVAL_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two date and time points.
			 */
			class DateTimeInterval : public BaseClass
			{

			public:
				DateTimeInterval();
				virtual ~DateTimeInterval();
				/**
				 * End date and time of this interval.
				 */
				IEC61970::Base::Domain::DateTime end;
				/**
				 * Start date and time of this interval.
				 */
				IEC61970::Base::Domain::DateTime start;

			};

		}

	}

}
#endif // DATETIMEINTERVAL_H
