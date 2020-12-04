///////////////////////////////////////////////////////////
//  SimpleEndDeviceFunction.h
//  Implementation of the Class SimpleEndDeviceFunction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SIMPLEENDDEVICEFUNCTION_H
#define SIMPLEENDDEVICEFUNCTION_H

#include "IEC61968/Metering/EndDeviceFunctionKind.h"
#include "IEC61968/Metering/EndDeviceFunction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Simple end device function distinguished by 'kind'. Use this class for
		 * instances that cannot be represented by another end device function
		 * specialisations.
		 */
		class SimpleEndDeviceFunction : public IEC61968::Metering::EndDeviceFunction
		{

		public:
			SimpleEndDeviceFunction();
			virtual ~SimpleEndDeviceFunction();
			/**
			 * Kind of this function.
			 */
			IEC61968::Metering::EndDeviceFunctionKind kind = IEC61968::Metering::EndDeviceFunctionKind::_undef;

		};

	}

}
#endif // SIMPLEENDDEVICEFUNCTION_H
