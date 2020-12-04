///////////////////////////////////////////////////////////
//  WorkTimeScheduleKind.h
//  Implementation of the Class WorkTimeScheduleKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKTIMESCHEDULEKIND_H
#define WORKTIMESCHEDULEKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Kind of work schedule.
		 */
		enum class WorkTimeScheduleKind
		{
			/**
			 * Estimate work time schedule.
			 */
			 _undef = -1, 	estimate,
			/**
			 * Request work time schedule.
			 */
			request,
			/**
			 * Actual work time schedule.
			 */
			actual,
			/**
			 * Earliest work time schedule.
			 */
			earliest,
			/**
			 * Latest work time schedule.
			 */
			latest,
			immediate
		};

	}

}
#endif // WORKTIMESCHEDULEKIND_H
