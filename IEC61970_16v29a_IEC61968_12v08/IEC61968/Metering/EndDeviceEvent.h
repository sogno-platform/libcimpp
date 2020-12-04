///////////////////////////////////////////////////////////
//  EndDeviceEvent.h
//  Implementation of the Class EndDeviceEvent
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEEVENT_H
#define ENDDEVICEEVENT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Metering/EndDeviceEventType.h"
#include "IEC61968/Metering/EndDeviceEventDetail.h"
#include "IEC61968/Common/ActivityRecord.h"
#include "IEC61968/Metering/EndDevice.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Event detected by a device function associated with the end device.
		 */
		class EndDeviceEvent : public IEC61968::Common::ActivityRecord
		{

		public:
			EndDeviceEvent();
			virtual ~EndDeviceEvent();
			/**
			 * Unique identifier of the business entity originating an end device control.
			 */
			IEC61970::Base::Domain::String issuerID;
			/**
			 * Identifier assigned by the initiator (e.g. retail electric provider) of an end
			 * device control action to uniquely identify the demand response event, text
			 * message, or other subject of the control action. Can be used when cancelling an
			 * event or text message request or to identify the originating event or text
			 * message in a consequential end device event.
			 */
			IEC61970::Base::Domain::String issuerTrackingID;
			/**
			 * (if user initiated) ID of user who initiated this end device event.
			 */
			IEC61970::Base::Domain::String userID;
			/**
			 * Usage point for which this end device event is reported.
			 */
			IEC61968::Metering::UsagePoint *UsagePoint;
			/**
			 * Type of this end device event.
			 */
			IEC61968::Metering::EndDeviceEventType *EndDeviceEventType;
			/**
			 * All details of this end device event.
			 */
			std::list<IEC61968::Metering::EndDeviceEventDetail*> EndDeviceEventDetails;
			/**
			 * End device that reported this end device event.
			 */
			IEC61968::Metering::EndDevice *EndDevice;

		};

	}

}
#endif // ENDDEVICEEVENT_H
