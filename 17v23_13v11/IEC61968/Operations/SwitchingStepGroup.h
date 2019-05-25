///////////////////////////////////////////////////////////
//  SwitchingStepGroup.h
//  Implementation of the Class SwitchingStepGroup
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINGSTEPGROUP_H
#define SWITCHINGSTEPGROUP_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * A logical step, grouping atomic switching steps that are important to
		 * distinguish when they may change topology (e.g. placing a jumper between two
		 * cuts).
		 */
		class SwitchingStepGroup : public BaseClass
		{

		public:
			SwitchingStepGroup();
			virtual ~SwitchingStepGroup();
			/**
			 * Descriptive information concerning the switching step group.
			 */
			IEC61970::Base::Domain::String description;
			/**
			 * If true, the sequence number serves for presentation purposes only, and the
			 * activity itself may be executed at any time.
			 */
			IEC61970::Base::Domain::Boolean isFreeSequence;
			/**
			 * Describes the overall purpose of the steps in this switching step group.
			 */
			IEC61970::Base::Domain::String purpose;
			/**
			 * Order of this activity in the sequence of activities within the switching plan.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;

		};

	}

}
#endif // SWITCHINGSTEPGROUP_H
