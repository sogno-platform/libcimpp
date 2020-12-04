///////////////////////////////////////////////////////////
//  EndDeviceCapability.h
//  Implementation of the Class EndDeviceCapability
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICECAPABILITY_H
#define ENDDEVICECAPABILITY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Boolean.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Inherent capabilities of an end device (i.e., the functions it supports).
		 */
		class EndDeviceCapability : public BaseClass
		{

		public:
			EndDeviceCapability();
			virtual ~EndDeviceCapability();
			/**
			 * True if autonomous DST (daylight saving time) function is supported.
			 */
			IEC61970::Base::Domain::Boolean autonomousDst;
			/**
			 * True if communication function is supported.
			 */
			IEC61970::Base::Domain::Boolean communication;
			/**
			 * True if connect and disconnect function is supported.
			 */
			IEC61970::Base::Domain::Boolean connectDisconnect;
			/**
			 * True if demand response function is supported.
			 */
			IEC61970::Base::Domain::Boolean demandResponse;
			/**
			 * True if electric metering function is supported.
			 */
			IEC61970::Base::Domain::Boolean electricMetering;
			/**
			 * True if gas metering function is supported.
			 */
			IEC61970::Base::Domain::Boolean gasMetering;
			/**
			 * True if metrology function is supported.
			 */
			IEC61970::Base::Domain::Boolean metrology;
			/**
			 * True if on request read function is supported.
			 */
			IEC61970::Base::Domain::Boolean onRequestRead;
			/**
			 * True if outage history function is supported.
			 */
			IEC61970::Base::Domain::Boolean outageHistory;
			/**
			 * True if device performs pressure compensation for metered quantities.
			 */
			IEC61970::Base::Domain::Boolean pressureCompensation;
			/**
			 * True if pricing information is supported.
			 */
			IEC61970::Base::Domain::Boolean pricingInfo;
			/**
			 * True if device produces pulse outputs.
			 */
			IEC61970::Base::Domain::Boolean pulseOutput;
			/**
			 * True if relays programming function is supported.
			 */
			IEC61970::Base::Domain::Boolean relaysProgramming;
			/**
			 * True if reverse flow function is supported.
			 */
			IEC61970::Base::Domain::Boolean reverseFlow;
			/**
			 * True if device performs super compressibility compensation for metered
			 * quantities.
			 */
			IEC61970::Base::Domain::Boolean superCompressibilityCompensation;
			/**
			 * True if device performs temperature compensation for metered quantities.
			 */
			IEC61970::Base::Domain::Boolean temperatureCompensation;
			/**
			 * True if the displaying of text messages is supported.
			 */
			IEC61970::Base::Domain::Boolean textMessage;
			/**
			 * True if water metering function is supported.
			 */
			IEC61970::Base::Domain::Boolean waterMetering;

		};

	}

}
#endif // ENDDEVICECAPABILITY_H
