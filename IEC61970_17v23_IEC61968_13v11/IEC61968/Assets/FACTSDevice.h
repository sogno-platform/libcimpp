///////////////////////////////////////////////////////////
//  FACTSDevice.h
//  Implementation of the Class FACTSDevice
///////////////////////////////////////////////////////////

#ifndef FACTSDEVICE_H
#define FACTSDEVICE_H

#include "IEC61968/InfIEC61968/InfAssets/FACTSDeviceKind.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * FACTS device asset.
		 */
		class FACTSDevice : public IEC61968::Assets::Asset
		{

		public:
			FACTSDevice();
			virtual ~FACTSDevice();
			/**
			 * Kind of FACTS device.
			 */
			IEC61968::InfIEC61968::InfAssets::FACTSDeviceKind kind = IEC61968::InfIEC61968::InfAssets::FACTSDeviceKind::_undef;

		};

	}

}
#endif // FACTSDEVICE_H
