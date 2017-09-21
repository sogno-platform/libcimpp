///////////////////////////////////////////////////////////
//  TimeSchedule.h
//  Implementation of the Class TimeSchedule
///////////////////////////////////////////////////////////

#ifndef TIMESCHEDULE_H
#define TIMESCHEDULE_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/TimePoint.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Description of anything that changes through time. Time schedule is used to
		 * perform a single-valued function of time. Use inherited 'type' attribute to
		 * give additional information on this schedule, such as: periodic (hourly, daily,
		 * weekly, monthly, etc.), day of the month, by date, calendar (specific times and
		 * dates).
		 */
		class TimeSchedule : public IEC61968::Common::Document
		{

		public:
			TimeSchedule();
			virtual ~TimeSchedule();
			/**
			 * True if this schedule is deactivated (disabled).
			 */
			IEC61970::Base::Domain::Boolean disabled;
			/**
			 * The offset from midnight (i.e., 0 h, 0 min, 0 s) for the periodic time points
			 * to begin. For example, for an interval meter that is set up for five minute
			 * intervals ('recurrencePeriod'=300=5 min), setting 'offset'=120=2 min would
			 * result in scheduled events to read the meter executing at 2 min, 7 min, 12 min,
			 * 17 min, 22 min, 27 min, 32 min, 37 min, 42 min, 47 min, 52 min, and 57 min past
			 * each hour.
			 */
			IEC61970::Base::Domain::Seconds offset;
			/**
			 * Interval at which the scheduled action repeats (e.g., first Monday of every
			 * month, last day of the month, etc.).
			 */
			IEC61970::Base::Domain::String recurrencePattern;
			/**
			 * Duration between time points, from the beginning of one period to the beginning
			 * of the next period. Note that a device like a meter may have multiple interval
			 * periods (e.g., 1 min, 5 min, 15 min, 30 min, or 60 min).
			 */
			IEC61970::Base::Domain::Seconds recurrencePeriod;
			/**
			 * Schedule date and time interval.
			 */
			IEC61970::Base::Domain::DateTimeInterval scheduleInterval;
			/**
			 * Sequence of time points belonging to this time schedule.
			 */
			std::list<IEC61968::Common::TimePoint*> TimePoints;

		};

	}

}
#endif // TIMESCHEDULE_H
