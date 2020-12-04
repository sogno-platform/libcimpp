///////////////////////////////////////////////////////////
//  BaseWork.h
//  Implementation of the Class BaseWork
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BASEWORK_H
#define BASEWORK_H

#include <list>

#include "IEC61968/Work/WorkKind.h"
#include "IEC61968/Common/Priority.h"
#include "IEC61968/Work/WorkStatusKind.h"
#include "IEC61968/Work/WorkActivityRecord.h"
#include "IEC61968/Work/WorkLocation.h"
#include "IEC61968/Work/WorkTimeSchedule.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Common representation for work and work tasks.
		 */
		class BaseWork : public IEC61968::Common::Document
		{

		public:
			BaseWork();
			virtual ~BaseWork();
			/**
			 * Kind of work.
			 */
			IEC61968::Work::WorkKind kind = IEC61968::Work::WorkKind::_undef;
			/**
			 * Priority of work.
			 */
			IEC61968::Common::Priority priority;
			/**
			 * Kind of work status.
			 */
			IEC61968::Work::WorkStatusKind statusKind = IEC61968::Work::WorkStatusKind::_undef;
			/**
			 * All activity records for this work or work task.
			 */
			std::list<IEC61968::Work::WorkActivityRecord*> WorkActivityRecords;
			/**
			 * Location for this work/task.
			 */
			IEC61968::Work::WorkLocation *WorkLocation;
			/**
			 * All time schedules for this work or work task.
			 */
			std::list<IEC61968::Work::WorkTimeSchedule*> TimeSchedules;

		};

	}

}
#endif // BASEWORK_H
