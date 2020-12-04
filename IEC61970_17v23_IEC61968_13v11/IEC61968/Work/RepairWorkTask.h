///////////////////////////////////////////////////////////
//  RepairWorkTask.h
//  Implementation of the Class RepairWorkTask
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef REPAIRWORKTASK_H
#define REPAIRWORKTASK_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Work/WorkTask.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Work task for asset repair. Costs associated with this are considered
		 * corrective maintenance (CM) costs.
		 */
		class RepairWorkTask : public IEC61968::Work::WorkTask
		{

		public:
			RepairWorkTask();
			virtual ~RepairWorkTask();
			/**
			 * Repair work is emergency.
			 */
			IEC61970::Base::Domain::Boolean emergency;

		};

	}

}
#endif // REPAIRWORKTASK_H
