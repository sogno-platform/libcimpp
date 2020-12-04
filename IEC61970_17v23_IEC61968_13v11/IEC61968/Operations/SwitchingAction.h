///////////////////////////////////////////////////////////
//  SwitchingAction.h
//  Implementation of the Class SwitchingAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGACTION_H
#define SWITCHINGACTION_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/Crew.h"
#include "IEC61968/Common/Operator.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Atomic switching action.
		 */
		class SwitchingAction : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			SwitchingAction();
			virtual ~SwitchingAction();
			/**
			 * Free text description of this activity.
			 */
			IEC61970::Base::Domain::String description;
			/**
			 * Actual date and time of this switching step.
			 */
			IEC61970::Base::Domain::DateTime executedDateTime;
			/**
			 * If true, the sequence number serves for presentation purposes only, and the
			 * activity itself may be executed at any time.
			 */
			IEC61970::Base::Domain::Boolean isFreeSequence;
			/**
			 * Date and time when the crew was given the instruction to execute the action;
			 * not applicable if the action is performed by operator remote control.
			 */
			IEC61970::Base::Domain::DateTime issuedDateTime;
			/**
			 * Planned date and time of this switching step.
			 */
			IEC61970::Base::Domain::DateTime plannedDateTime;
			std::list<IEC61968::Common::Crew*> Crew;
			/**
			 * Operator responsible for this switching step.
			 */
			IEC61968::Common::Operator *Operator;

		};

	}

}
#endif // SWITCHINGACTION_H
