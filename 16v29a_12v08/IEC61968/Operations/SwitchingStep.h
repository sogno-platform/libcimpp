///////////////////////////////////////////////////////////
//  SwitchingStep.h
//  Implementation of the Class SwitchingStep
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGSTEP_H
#define SWITCHINGSTEP_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Operator.h"
#include "IEC61968/Common/CrewMember.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Atomic switching step; can be part of a switching step group, or of the
		 * switching plan.
		 */
		class SwitchingStep : public BaseClass
		{

		public:
			SwitchingStep();
			virtual ~SwitchingStep();
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
			 * Planned date and time of this switching step.
			 */
			IEC61970::Base::Domain::DateTime plannedDateTime;
			/**
			 * Order of this activity in the sequence of activities within the switching plan.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * Operator responsible for this switching step.
			 */
			IEC61968::Common::Operator *Operator;
			/**
			 * Crew member responsible for this switching step.
			 */
			IEC61968::Common::CrewMember *CrewMember;

		};

	}

}
#endif // SWITCHINGSTEP_H
