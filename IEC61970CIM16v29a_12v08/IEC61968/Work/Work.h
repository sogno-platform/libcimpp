///////////////////////////////////////////////////////////
//  Work.h
//  Implementation of the Class Work
///////////////////////////////////////////////////////////

#ifndef WORK_H
#define WORK_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfWork/Project.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpProjectAccounting.h"
#include "IEC61968/Work/BaseWork.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Document used to request, initiate, track and record work.
		 */
		class WorkTask;
		class Work : public IEC61968::Work::BaseWork
		{

		public:
			Work();
			virtual ~Work();
			/**
			 * Date and time work was requested.
			 */
			IEC61970::Base::Domain::DateTime requestDateTime;
			IEC61968::InfIEC61968::InfWork::Project *Project;
			/**
			 * All tasks in this work.
			 */
			std::list<IEC61968::Work::WorkTask*> WorkTasks;
			IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting *ErpProjectAccounting;

		};

	}

}
#endif // WORK_H
