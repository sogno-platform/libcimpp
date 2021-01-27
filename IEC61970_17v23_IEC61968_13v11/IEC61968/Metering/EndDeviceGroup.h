///////////////////////////////////////////////////////////
//  EndDeviceGroup.h
//  Implementation of the Class EndDeviceGroup
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEGROUP_H
#define ENDDEVICEGROUP_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Version.h"
#include "IEC61968/Metering/EndDevice.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/EndDeviceControl.h"
#include "IEC61968/DER/DERGroupDispatch.h"
#include "IEC61968/DER/DispatchablePowerCapability.h"
#include "IEC61968/DER/DERMonitorableParameter.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Abstraction for management of group communications within a two-way AMR system
		 * or the data for a group of related end devices. Commands can be issued to all
		 * of the end devices that belong to the group using a defined group address and
		 * the underlying AMR communication infrastructure. A DERGroup and a
		 * PANDeviceGroup is an EndDeviceGroup.
		 */
		class EndDeviceGroup : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			EndDeviceGroup();
			virtual ~EndDeviceGroup();
			IEC61968::Common::Status status;
			/**
			 * Type of this group.
			 */
			IEC61970::Base::Domain::String type;
			IEC61968::Common::Version version;
			/**
			 * All end devices this end device group refers to.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;
			/**
			 * All end device controls sending commands to this end device group.
			 */
			std::list<IEC61968::Metering::EndDeviceControl*> EndDeviceControls;
			std::list<IEC61968::DER::DERGroupDispatch*> DERGroupDispatch;
			IEC61968::DER::DispatchablePowerCapability *DispatchablePowerCapability;
			std::list<IEC61968::DER::DERMonitorableParameter*> DERMonitorableParameter;

		};

	}

}
#endif // ENDDEVICEGROUP_H
