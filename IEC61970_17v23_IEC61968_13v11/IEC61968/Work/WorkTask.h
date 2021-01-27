///////////////////////////////////////////////////////////
//  WorkTask.h
//  Implementation of the Class WorkTask
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKTASK_H
#define WORKTASK_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61968/Work/WorkTaskKind.h"
#include "IEC61968/Work/MaterialItem.h"
#include "IEC61968/Work/BaseWork.h"
#include "IEC61968/Common/Crew.h"

namespace IEC61968
{
	namespace Assets
	{
		class Asset;
	}
}

namespace IEC61968
{
	namespace Work
	{
		class WorkTask : public IEC61968::Work::BaseWork
		{

		public:
			WorkTask();
			virtual ~WorkTask();
			/**
			 * Date and time work task was completed.
			 */
			IEC61970::Base::Domain::DateTime completedDateTime;
			/**
			 * Total contractor costs associated with the work task.
			 */
			IEC61970::Base::Domain::Money contractorCost;
			/**
			 * Estimated time of arrival, so that customer or police/fire department can be
			 * informed when the crew will arrive.
			 */
			IEC61970::Base::Domain::DateTime crewETA;
			/**
			 * Instructions for performing this task.
			 */
			IEC61970::Base::Domain::String instruction;
			/**
			 * Total labor costs associated with the work task.
			 */
			IEC61970::Base::Domain::Money laborCost;
			/**
			 * Hours of labor expended under work task.
			 */
			IEC61970::Base::Domain::Hours laborHours;
			/**
			 * Total material costs associated with the work task.
			 */
			IEC61970::Base::Domain::Money materiallCost;
			/**
			 * If specified, override schedule and perform this task in accordance with
			 * instructions specified here.
			 */
			IEC61970::Base::Domain::String schedOverride;
			/**
			 * Date and time work task was started.
			 */
			IEC61970::Base::Domain::DateTime startedDateTime;
			/**
			 * Kind of work.
			 */
			IEC61968::Work::WorkTaskKind taskKind = IEC61968::Work::WorkTaskKind::_undef;
			/**
			 * Total tool costs associated with the work task.
			 */
			IEC61970::Base::Domain::Money toolCost;
			std::list<IEC61968::Work::MaterialItem*> MaterialItems;
			/**
			 * Old asset replaced by this work task.
			 */
			IEC61968::Assets::Asset *OldAsset;
			/**
			 * All assets on which this non-replacement work task is performed.
			 */
			std::list<IEC61968::Assets::Asset*> Assets;
			/**
			 * All crews participating in this work task.
			 */
			std::list<IEC61968::Common::Crew*> Crews;

		};

	}

}
#endif // WORKTASK_H
