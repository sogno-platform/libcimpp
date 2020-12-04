///////////////////////////////////////////////////////////
//  EndDeviceAction.h
//  Implementation of the Class EndDeviceAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEACTION_H
#define ENDDEVICEACTION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Minutes.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTime.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Action/command performed by an end device on a device other than the end device.
		 */
		class EndDeviceAction : public BaseClass
		{

		public:
			EndDeviceAction();
			virtual ~EndDeviceAction();
			/**
			 * Command text.
			 */
			IEC61970::Base::Domain::String command;
			/**
			 * Amount of time the action of this control is to remain active.
			 */
			IEC61970::Base::Domain::Minutes duration;
			/**
			 * True if the action of this control is indefinite.
			 */
			IEC61970::Base::Domain::Boolean durationIndefinite;
			/**
			 * Start date and time for action of this control.
			 */
			IEC61970::Base::Domain::DateTime startDateTime;

		};

	}

}
#endif // ENDDEVICEACTION_H
