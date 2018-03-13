///////////////////////////////////////////////////////////
//  WorkTask.h
//  Implementation of the Class WorkTask
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKTASK_H
#define WORKTASK_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Work/WorkTaskKind.h"
#include "IEC61968/Work/BaseWork.h"
#include "IEC61968/Work/MaterialItem.h"
#include "IEC61968/Common/Crew.h"
#include "IEC61968/Assets/Asset.h"

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
			 * Estimated time of arrival, so that customer or police/fire department can be
			 * informed when the crew will arrive.
			 */
			IEC61970::Base::Domain::DateTime crewETA;
			/**
			 * Instructions for performing this task.
			 */
			IEC61970::Base::Domain::String instruction;
			/**
			 * If specified, override schedule and perform this task in accordance with
			 * instructions specified here.
			 */
			IEC61970::Base::Domain::String schedOverride;
			/**
			 * Kind of work.
			 */
			IEC61968::Work::WorkTaskKind taskKind = IEC61968::Work::WorkTaskKind::_undef;
			std::list<IEC61968::Work::MaterialItem*> MaterialItems;
			/**
			 * All crews participating in this work task.
			 */
			std::list<IEC61968::Common::Crew*> Crews;
			/**
			 * Old asset replaced by this work task.
			 */
			IEC61968::Assets::Asset *OldAsset;
			/**
			 * All assets on which this non-replacement work task is performed.
			 */
			std::list<IEC61968::Assets::Asset*> Assets;

		};

	}

}
#endif // WORKTASK_H
