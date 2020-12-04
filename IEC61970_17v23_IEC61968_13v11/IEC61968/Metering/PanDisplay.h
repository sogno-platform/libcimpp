///////////////////////////////////////////////////////////
//  PanDisplay.h
//  Implementation of the Class PanDisplay
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PANDISPLAY_H
#define PANDISPLAY_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Metering/TransmissionModeKind.h"
#include "IEC61968/Metering/EndDeviceAction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * PAN action/command used to issue the displaying of text messages on PAN devices.
		 */
		class PanDisplay : public IEC61968::Metering::EndDeviceAction
		{

		public:
			PanDisplay();
			virtual ~PanDisplay();
			/**
			 * If true, the requesting entity (e.g. retail electric provider) requires
			 * confirmation of the successful display of the text message.
			 */
			IEC61970::Base::Domain::Boolean confirmationRequired;
			/**
			 * Priority associated with the text message to be displayed.
			 */
			IEC61970::Base::Domain::String priority;
			/**
			 * Text to be displayed by a PAN device.
			 */
			IEC61970::Base::Domain::String textMessage;
			/**
			 * Transmission mode to be used for this PAN display control.
			 */
			IEC61968::Metering::TransmissionModeKind transmissionMode = IEC61968::Metering::TransmissionModeKind::_undef;

		};

	}

}
#endif // PANDISPLAY_H
