///////////////////////////////////////////////////////////
//  SwitchingStepGroup.h
//  Implementation of the Class SwitchingStepGroup
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGSTEPGROUP_H
#define SWITCHINGSTEPGROUP_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Operations/ClearanceAction.h"
#include "IEC61968/Operations/GenericAction.h"
#include "IEC61968/Operations/JumperAction.h"
#include "IEC61968/Operations/CutAction.h"
#include "IEC61968/Operations/SwitchAction.h"
#include "IEC61968/Operations/TagAction.h"
#include "IEC61968/Operations/GroundAction.h"
#include "IEC61968/Operations/EnergySourceAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * A logical step, grouping atomic switching steps that are important to
		 * distinguish when they may change topology (e.g. placing a jumper between two
		 * cuts).
		 */
		class SwitchingStepGroup : public IEC61968::Common::Document
		{

		public:
			SwitchingStepGroup();
			virtual ~SwitchingStepGroup();
			/**
			 * If true, the sequence number serves for presentation purposes only, and the
			 * activity itself may be executed at any time.
			 */
			IEC61970::Base::Domain::Boolean isFreeSequence;
			/**
			 * Order of this activity in the sequence of activities within the switching plan.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * All clearance action steps in this group.
			 */
			std::list<IEC61968::Operations::ClearanceAction*> ClearanceActions;
			/**
			 * All generic action steps in this group.
			 */
			std::list<IEC61968::Operations::GenericAction*> GenericActions;
			/**
			 * All jumper action steps in this group.
			 */
			std::list<IEC61968::Operations::JumperAction*> JumperActions;
			/**
			 * All cut action steps in this group.
			 */
			std::list<IEC61968::Operations::CutAction*> CutActions;
			/**
			 * All switch action steps in this group.
			 */
			std::list<IEC61968::Operations::SwitchAction*> SwitchActions;
			/**
			 * All tag action steps in this group.
			 */
			std::list<IEC61968::Operations::TagAction*> TagActions;
			/**
			 * All ground action steps in this group.
			 */
			std::list<IEC61968::Operations::GroundAction*> GroundActions;
			/**
			 * All energy source action steps in this group.
			 */
			std::list<IEC61968::Operations::EnergySourceAction*> EnergySourceActions;

		};

	}

}
#endif // SWITCHINGSTEPGROUP_H
