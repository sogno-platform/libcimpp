///////////////////////////////////////////////////////////
//  SwitchingPlan.h
//  Implementation of the Class SwitchingPlan
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGPLAN_H
#define SWITCHINGPLAN_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Operations/Outage.h"
#include "IEC61968/Operations/SwitchingStepGroup.h"
#include "IEC61968/Operations/SafetyDocument.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		class OutagePlan;
	}
}

namespace IEC61968
{
	namespace Work
	{
		class WorkTask;
	}
}

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * A sequence of grouped or atomic steps intended to:
		 * - de-energise equipment or part of the network for safe work, and/or
		 * - bring back in service previously de-energised equipment or part of the
		 * network.
		 */
		class SwitchingPlan : public IEC61968::Common::Document
		{

		public:
			SwitchingPlan();
			virtual ~SwitchingPlan();
			/**
			 * The date and time the switching plan was approved
			 */
			IEC61970::Base::Domain::DateTime approvedDateTime;
			/**
			 * Date and Time the switching plan was cancelled.
			 */
			IEC61970::Base::Domain::DateTime cancelledDateTime;
			/**
			 * the planned start and end times for the switching plan.
			 */
			IEC61970::Base::Domain::DateTimeInterval plannedPeriod;
			/**
			 * Purpose of  this plan, such as whether it is to move the state from normal to
			 * some abnormal condition, or to restore the normal state after an abnormal
			 * condition, or to perform some kind of optimisation such as correction of
			 * overload, voltage control, etc.
			 */
			IEC61970::Base::Domain::String purpose;
			/**
			 * Ranking in comparison to other switching plans.
			 */
			IEC61970::Base::Domain::Integer rank;
			/**
			 * Outage that will be activated or eliminated when this switching plan gets
			 * executed.
			 */
			IEC61968::Operations::Outage *Outage;
			/**
			 * All groups of switching steps within this switching plan.
			 */
			std::list<IEC61968::Operations::SwitchingStepGroup*> SwitchingStepGroups;
			/**
			 * All safety documents applicable to this swtiching plan.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> SafetyDocuments;
			/**
			 * The outage plan for which the switching plan is defined.
			 */
			IEC61968::Operations::OutagePlan *OutagePlan;
			/**
			 * All work tasks to execute this switching plan.
			 */
			std::list<IEC61968::Work::WorkTask*> WorkTasks;

		};

	}

}
#endif // SWITCHINGPLAN_H
