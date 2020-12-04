///////////////////////////////////////////////////////////
//  SwitchingPlan.h
//  Implementation of the Class SwitchingPlan
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGPLAN_H
#define SWITCHINGPLAN_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Work/WorkTask.h"
#include "IEC61968/Operations/SwitchingStepGroup.h"
#include "IEC61968/Operations/SafetyDocument.h"
#include "IEC61968/Operations/Outage.h"

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
		class SwitchingPlan : public IEC61968::Operations::SwitchingStepGroup
		{

		public:
			SwitchingPlan();
			virtual ~SwitchingPlan();
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
			 * All work tasks to execute this switching plan.
			 */
			std::list<IEC61968::Work::WorkTask*> WorkTasks;
			/**
			 * All groups of switching steps within this switching plan.
			 */
			std::list<IEC61968::Operations::SwitchingStepGroup*> SwitchingStepGroups;
			/**
			 * All safety documents applicable to this swtiching plan.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> SafetyDocuments;
			/**
			 * Outage that will be eliminated when this switching plan gets executed.
			 */
			IEC61968::Operations::Outage *Outage;

		};

	}

}
#endif // SWITCHINGPLAN_H
