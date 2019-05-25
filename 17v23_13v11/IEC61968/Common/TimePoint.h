///////////////////////////////////////////////////////////
//  TimePoint.h
//  Implementation of the Class TimePoint
///////////////////////////////////////////////////////////

#ifndef TIMEPOINT_H
#define TIMEPOINT_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * A point in time within a sequence of points in time relative to a time schedule.
		 */
		class TimePoint : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			TimePoint();
			virtual ~TimePoint();
			/**
			 * Absolute date and time for this time point. For calendar-based time point, it
			 * is typically manually entered, while for interval-based or sequence-based time
			 * point it is derived.
			 */
			IEC61970::Base::Domain::DateTime dateTime;
			/**
			 * (if interval-based) A point in time relative to scheduled start time in
			 * 'TimeSchedule.scheduleInterval.start'.
			 */
			IEC61970::Base::Domain::Seconds relativeTimeInterval;
			/**
			 * (if sequence-based) Relative sequence number for this time point.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * Status of this time point.
			 */
			IEC61968::Common::Status status;
			/**
			 * Interval defining the window of time that this time point is valid (for example,
			 * seasonal, only on weekends, not on weekends, only 8:00 am to 5:00 pm, etc.).
			 */
			IEC61970::Base::Domain::DateTimeInterval window;

		};

	}

}
#endif // TIMEPOINT_H
