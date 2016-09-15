///////////////////////////////////////////////////////////
//  DateTimeInterval.h
//  Implementation of the Class DateTimeInterval
//  Created on:      28-Jan-2016 12:43:53
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_CF629ED6_28BB_4800_9BB5_30A1057309A1__INCLUDED_)
#define EA_CF629ED6_28BB_4800_9BB5_30A1057309A1__INCLUDED_

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
#endif // !defined(EA_CF629ED6_28BB_4800_9BB5_30A1057309A1__INCLUDED_)
