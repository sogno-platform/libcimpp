///////////////////////////////////////////////////////////
//  RemoteControl.h
//  Implementation of the Class RemoteControl
///////////////////////////////////////////////////////////

#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/SCADA/RemotePoint.h"
#include "IEC61970/Base/Meas/Control.h"

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Remote controls are ouputs that are sent by the remote unit to actuators in the
			 * process.
			 */
			class RemoteControl : public IEC61970::Base::SCADA::RemotePoint
			{

			public:
				RemoteControl();
				virtual ~RemoteControl();
				/**
				 * The maximum set point value accepted by the remote control point.
				 */
				IEC61970::Base::Domain::Float actuatorMaximum;
				/**
				 * The minimum set point value accepted by the remote control point.
				 */
				IEC61970::Base::Domain::Float actuatorMinimum;
				/**
				 * Set to true if the actuator is remotely controlled.
				 */
				IEC61970::Base::Domain::Boolean remoteControlled;
				/**
				 * The Control for the RemoteControl point.
				 */
				IEC61970::Base::Meas::Control *Control;

			};

		}

	}

}
#endif // REMOTECONTROL_H
