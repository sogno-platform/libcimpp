///////////////////////////////////////////////////////////
//  DateInterval.h
//  Implementation of the Class DateInterval
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DATEINTERVAL_H
#define DATEINTERVAL_H

#include "IEC61970/Base/Domain/Date.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two dates.
			 */
			class DateInterval : public BaseClass
			{

			public:
				DateInterval();
				virtual ~DateInterval();
				/**
				 * End date of this interval.
				 */
				IEC61970::Base::Domain::Date end;
				/**
				 * Start date of this interval.
				 */
				IEC61970::Base::Domain::Date start;

			};

		}

	}

}
#endif // DATEINTERVAL_H
