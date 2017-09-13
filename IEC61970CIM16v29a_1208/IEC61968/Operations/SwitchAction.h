///////////////////////////////////////////////////////////
//  SwitchAction.h
//  Implementation of the Class SwitchAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHACTION_H
#define SWITCHACTION_H

#include "IEC61968/Operations/SwitchActionKind.h"
#include "IEC61970/Base/Wires/Switch.h"
#include "IEC61968/Operations/SwitchingStep.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on switch as a switching step.
		 */
		class SwitchAction : public IEC61968::Operations::SwitchingStep
		{

		public:
			SwitchAction();
			virtual ~SwitchAction();
			/**
			 * Switching action to perform.
			 */
			IEC61968::Operations::SwitchActionKind kind;
			/**
			 * Switch that is the object of this switch action.
			 */
			IEC61970::Base::Wires::Switch *OperatedSwitch;

		};

	}

}
#endif // SWITCHACTION_H
