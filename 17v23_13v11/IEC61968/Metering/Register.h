///////////////////////////////////////////////////////////
//  Register.h
//  Implementation of the Class Register
///////////////////////////////////////////////////////////

#ifndef REGISTER_H
#define REGISTER_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/TimeInterval.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/Channel.h"
#include "IEC61968/Metering/EndDeviceFunction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * A device that indicates or records units of the commodity or other quantity
		 * measured.
		 */
		class Register : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Register();
			virtual ~Register();
			/**
			 * If true, the data it produces is  calculated or measured by a device other than
			 * a physical end device/meter. Otherwise, any data streams it produces are
			 * measured by the hardware of the end device/meter itself. 
			 */
			IEC61970::Base::Domain::Boolean isVirtual;
			/**
			 * Number of digits (dials on a mechanical meter) to the left of the decimal place;
			 * default is normally 5.
			 */
			IEC61970::Base::Domain::Integer leftDigitCount;
			/**
			 * Number of digits (dials on a mechanical meter) to the right of the decimal
			 * place.
			 */
			IEC61970::Base::Domain::Integer rightDigitCount;
			/**
			 * Clock time interval for register to beging/cease accumulating time of usage (e.
			 * g., start at 8:00 am, stop at 5:00 pm).
			 */
			IEC61970::Base::Domain::TimeInterval touTier;
			/**
			 * Name used for the time of use tier (also known as bin or bucket).  For example,
			 * "peak", "off-peak", "TOU Category A", etc. 
			 */
			IEC61970::Base::Domain::String touTierName;
			/**
			 * All channels that collect/report values from this register.
			 */
			std::list<IEC61968::Metering::Channel*> Channels;
			/**
			 * End device function metering quantities displayed by this register.
			 */
			IEC61968::Metering::EndDeviceFunction *EndDeviceFunction;

		};

	}

}
#endif // REGISTER_H
