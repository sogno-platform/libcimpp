///////////////////////////////////////////////////////////
//  ControlAction.h
//  Implementation of the Class ControlAction
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef CONTROLACTION_H
#define CONTROLACTION_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/Control.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Control executed as a switching step.
		 */
		class ControlAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			ControlAction();
			virtual ~ControlAction();
			/**
			 * The analog value used for the analog control, the raise/lower control and the
			 * set point control
			 */
			IEC61970::Base::Domain::Float analogValue;
			/**
			 * The integer value used for the command or the accumulator reset.
			 */
			IEC61970::Base::Domain::Integer discreteValue;
			IEC61970::Base::Meas::Control *Control;

		};

	}

}
#endif // CONTROLACTION_H
