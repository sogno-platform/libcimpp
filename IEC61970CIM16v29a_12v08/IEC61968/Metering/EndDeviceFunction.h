///////////////////////////////////////////////////////////
//  EndDeviceFunction.h
//  Implementation of the Class EndDeviceFunction
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEFUNCTION_H
#define ENDDEVICEFUNCTION_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Assets/AssetFunction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Function performed by an end device such as a meter, communication equipment,
		 * controllers, etc.
		 */
		class EndDeviceFunction : public IEC61968::Assets::AssetFunction
		{

		public:
			EndDeviceFunction();
			virtual ~EndDeviceFunction();
			/**
			 * True if the function is enabled.
			 */
			IEC61970::Base::Domain::Boolean enabled;

		};

	}

}
#endif // ENDDEVICEFUNCTION_H
