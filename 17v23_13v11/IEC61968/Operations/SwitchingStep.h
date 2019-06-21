///////////////////////////////////////////////////////////
//  SwitchingStep.h
//  Implementation of the Class SwitchingStep
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef SWITCHINGSTEP_H
#define SWITCHINGSTEP_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Operations/SwitchingStepGroup.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * A step in a Switching Step Group.
		 */
		class SwitchingStep : public BaseClass
		{

		public:
			SwitchingStep();
			virtual ~SwitchingStep();
			/**
			 * the sequence number of the switching step within the switching step group
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			IEC61968::Operations::SwitchingStepGroup *SwitchingStepGroup;
			IEC61968::Operations::SwitchingAction *SwitchingAction;

		};

	}

}
#endif // SWITCHINGSTEP_H
