///////////////////////////////////////////////////////////
//  OutageSchedule.h
//  Implementation of the Class OutageSchedule
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OUTAGESCHEDULE_H
#define OUTAGESCHEDULE_H

#include <list>

#include "IEC61968/Common/Document.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document containing the definition of planned outages of equipment and/or
		 * service (delivery) points (sometimes referred to as customers). It is used as
		 * specification for producing switching plans.
		 */
		class OutageSchedule : public IEC61968::Common::Document
		{

		public:
			OutageSchedule();
			virtual ~OutageSchedule();
			/**
			 * All outages resulting from the execution of this outage schedule.
			 */
			std::list<IEC61968::Operations::Outage*> PlannedOutages;

		};

	}

}
#endif // OUTAGESCHEDULE_H
