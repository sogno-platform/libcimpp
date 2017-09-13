///////////////////////////////////////////////////////////
//  WorkTimeSchedule.h
//  Implementation of the Class WorkTimeSchedule
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKTIMESCHEDULE_H
#define WORKTIMESCHEDULE_H

#include "IEC61968/Work/WorkTimeScheduleKind.h"
#include "IEC61968/Common/TimeSchedule.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Time schedule specific to work.
		 */
		class WorkTimeSchedule : public IEC61968::Common::TimeSchedule
		{

		public:
			WorkTimeSchedule();
			virtual ~WorkTimeSchedule();
			/**
			 * Kind of this work schedule.
			 */
			IEC61968::Work::WorkTimeScheduleKind kind;

		};

	}

}
#endif // WORKTIMESCHEDULE_H
