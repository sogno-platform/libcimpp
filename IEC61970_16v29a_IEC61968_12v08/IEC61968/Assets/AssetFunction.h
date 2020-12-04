///////////////////////////////////////////////////////////
//  AssetFunction.h
//  Implementation of the Class AssetFunction
///////////////////////////////////////////////////////////

#ifndef ASSETFUNCTION_H
#define ASSETFUNCTION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Function performed by an asset.
		 */
		class AssetFunction : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			AssetFunction();
			virtual ~AssetFunction();
			/**
			 * Configuration specified for this function.
			 */
			IEC61970::Base::Domain::String configID;
			/**
			 * Firmware version.
			 */
			IEC61970::Base::Domain::String firmwareID;
			/**
			 * Hardware version.
			 */
			IEC61970::Base::Domain::String hardwareID;
			/**
			 * Password needed to access this function.
			 */
			IEC61970::Base::Domain::String password;
			/**
			 * Name of program.
			 */
			IEC61970::Base::Domain::String programID;

		};

	}

}
#endif // ASSETFUNCTION_H
