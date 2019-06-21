///////////////////////////////////////////////////////////
//  EndDeviceControl.h
//  Implementation of the Class EndDeviceControl
///////////////////////////////////////////////////////////

#ifndef ENDDEVICECONTROL_H
#define ENDDEVICECONTROL_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/FloatQuantity.h"
#include "IEC61968/Metering/EndDeviceTiming.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Metering/UsagePointGroup.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/EndDevice.h"
#include "IEC61968/Metering/EndDeviceAction.h"
#include "IEC61968/Metering/EndDeviceControlType.h"
#include "IEC61968/Metering/UsagePoint.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Instructs an end device (or an end device group) to perform a specified action.
		 */
		class EndDeviceControl : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			EndDeviceControl();
			virtual ~EndDeviceControl();
			/**
			 * Level of a demand response program request, where 0=emergency. Note: Attribute
			 * is not defined on DemandResponseProgram as it is not its inherent property (it
			 * serves to control it).
			 */
			IEC61970::Base::Domain::Integer drProgramLevel;
			/**
			 * Whether a demand response program request is mandatory. Note: Attribute is not
			 * defined on DemandResponseProgram as it is not its inherent property (it serves
			 * to control it).
			 */
			IEC61970::Base::Domain::Boolean drProgramMandatory;
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
			 * (if applicable) Price signal used as parameter for this end device control.
			 */
			IEC61970::Base::Domain::FloatQuantity priceSignal;
			/**
			 * Timing for the control actions performed on the device identified in the end
			 * device control.
			 */
			IEC61968::Metering::EndDeviceTiming primaryDeviceTiming;
			/**
			 * Reason for the control action that allows to determine how to continue
			 * processing. For example, disconnect meter command may require different
			 * processing by the receiving system if it has been issued for a network-related
			 * reason (protection) or for a payment-related reason.
			 */
			IEC61970::Base::Domain::String reason;
			/**
			 * (if control has scheduled duration) Date and time interval the control has been
			 * scheduled to execute within.
			 */
			IEC61970::Base::Domain::DateTimeInterval scheduledInterval;
			/**
			 * Timing for the control actions performed by devices that are responding to
			 * event related information sent to the primary device indicated in the end
			 * device control.  For example, load control actions performed by a PAN device in
			 * response to demand response event information sent to a PAN gateway server.
			 */
			IEC61968::Metering::EndDeviceTiming secondaryDeviceTiming;
			/**
			 * All usage point groups receiving commands from this end device control.
			 */
			std::list<IEC61968::Metering::UsagePointGroup*> UsagePointGroups;
			/**
			 * All end devices receiving commands from this end device control.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;
			/**
			 * End device action issued by this end device control.
			 */
			IEC61968::Metering::EndDeviceAction *EndDeviceAction;
			/**
			 * Type of this end device control.
			 */
			IEC61968::Metering::EndDeviceControlType *EndDeviceControlType;
			/**
			 * All usage points receiving commands from this end device control.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;

		};

	}

}
#endif // ENDDEVICECONTROL_H
