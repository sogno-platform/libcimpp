///////////////////////////////////////////////////////////
//  EndDeviceGroup.h
//  Implementation of the Class EndDeviceGroup
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEGROUP_H
#define ENDDEVICEGROUP_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/EndDeviceControl.h"
#include "IEC61968/Metering/EndDevice.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Abstraction for management of group communications within a two-way AMR system
		 * or the data for a group of related end devices. Commands can be issued to all
		 * of the end devices that belong to the group using a defined group address and
		 * the underlying AMR communication infrastructure.
		 */
		class EndDeviceGroup : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			EndDeviceGroup();
			virtual ~EndDeviceGroup();
			/**
			 * Type of this group.
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * All end device controls sending commands to this end device group.
			 */
			std::list<IEC61968::Metering::EndDeviceControl*> EndDeviceControls;
			/**
			 * All end devices this end device group refers to.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;

		};

	}

}
#endif // ENDDEVICEGROUP_H
