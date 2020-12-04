///////////////////////////////////////////////////////////
//  EndDevice.h
//  Implementation of the Class EndDevice
///////////////////////////////////////////////////////////

#ifndef ENDDEVICE_H
#define ENDDEVICE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Minutes.h"
#include "IEC61968/Metering/EndDeviceInfo.h"
#include "IEC61968/Metering/EndDeviceFunction.h"
#include "IEC61968/Assets/AssetContainer.h"
#include "IEC61968/DER/DispatchablePowerCapability.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Asset container that performs one or more end device functions. One type of end
		 * device is a meter which can perform metering, load management,
		 * connect/disconnect, accounting functions, etc. Some end devices, such as ones
		 * monitoring and controlling air conditioners, refrigerators, pool pumps may be
		 * connected to a meter. All end devices may have communication capability defined
		 * by the associated communication function(s). An end device may be owned by a
		 * consumer, a service provider, utility or otherwise.
		 * There may be a related end device function that identifies a sensor or control
		 * point within a metering application or communications systems (e.g., water, gas,
		 * electricity).
		 * Some devices may use an optical port that conforms to the ANSI C12.18 standard
		 * for communications.
		 */
		class EndDevice : public IEC61968::Assets::AssetContainer
		{

		public:
			EndDevice();
			virtual ~EndDevice();
			/**
			 * Automated meter reading (AMR) or other communication system responsible for
			 * communications to this end device.
			 */
			IEC61970::Base::Domain::String amrSystem;
			/**
			 * Installation code.
			 */
			IEC61970::Base::Domain::String installCode;
			/**
			 * If true, this is a premises area network (PAN) device.
			 */
			IEC61970::Base::Domain::Boolean isPan;
			IEC61970::Base::Domain::Boolean isSmartInverter;
			/**
			 * If true, there is no physical device. As an example, a virtual meter can be
			 * defined to aggregate the consumption for two or more physical meters. Otherwise,
			 * this is a physical hardware device.
			 */
			IEC61970::Base::Domain::Boolean isVirtual;
			/**
			 * Time zone offset relative to GMT for the location of this end device.
			 */
			IEC61970::Base::Domain::Minutes timeZoneOffset;
			/**
			 * End device data.
			 */
			IEC61968::Metering::EndDeviceInfo *EndDeviceInfo;
			/**
			 * All end device functions this end device performs.
			 */
			std::list<IEC61968::Metering::EndDeviceFunction*> EndDeviceFunctions;
			std::list<IEC61968::DER::DispatchablePowerCapability*> DispatchablePowerCapability;

		};

	}

}
#endif // ENDDEVICE_H
