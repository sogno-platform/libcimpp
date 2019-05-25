///////////////////////////////////////////////////////////
//  RegularIntervalSchedule.h
//  Implementation of the Class RegularIntervalSchedule
///////////////////////////////////////////////////////////

#ifndef REGULARINTERVALSCHEDULE_H
#define REGULARINTERVALSCHEDULE_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/RegularTimePoint.h"
#include "IEC61970/Base/Core/BasicIntervalSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The schedule has time points where the time between them is constant.
			 */
			class RegularIntervalSchedule : public IEC61970::Base::Core::BasicIntervalSchedule
			{

			public:
				RegularIntervalSchedule();
				virtual ~RegularIntervalSchedule();
				/**
				 * The time for the last time point.  The value can be a time of day, not a
				 * specific date.
				 */
				IEC61970::Base::Domain::DateTime endTime;
				/**
				 * The time between each pair of subsequent regular time points in sequence order.
				 */
				IEC61970::Base::Domain::Seconds timeStep;
				/**
				 * The regular interval time point data values that define this schedule.
				 */
				std::list<IEC61970::Base::Core::RegularTimePoint*> TimePoints;

			};

		}

	}

}
#endif // REGULARINTERVALSCHEDULE_H
