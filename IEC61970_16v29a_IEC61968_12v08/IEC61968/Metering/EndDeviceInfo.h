///////////////////////////////////////////////////////////
//  EndDeviceInfo.h
//  Implementation of the Class EndDeviceInfo
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEINFO_H
#define ENDDEVICEINFO_H

#include "IEC61968/Metering/EndDeviceCapability.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * End device data.
		 */
		class EndDeviceInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			EndDeviceInfo();
			virtual ~EndDeviceInfo();
			/**
			 * Inherent capabilities of the device (i.e., the functions it supports).
			 */
			IEC61968::Metering::EndDeviceCapability capability;
			/**
			 * If true, this is a solid state end device (as opposed to a mechanical or
			 * electromechanical device).
			 */
			IEC61970::Base::Domain::Boolean isSolidState;
			/**
			 * Number of potential phases the end device supports, typically 0, 1 or 3.
			 */
			IEC61970::Base::Domain::Integer phaseCount;
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;

		};

	}

}
#endif // ENDDEVICEINFO_H
