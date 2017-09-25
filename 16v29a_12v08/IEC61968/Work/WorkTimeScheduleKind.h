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
			estimate,
			request,
			actual,
			earliest,
			latest
		};

	}

}
#endif // WORKTIMESCHEDULEKIND_H
