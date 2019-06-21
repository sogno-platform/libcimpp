///////////////////////////////////////////////////////////
//  AssetTemperaturePressureAnalog.h
//  Implementation of the Class AssetTemperaturePressureAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETTEMPERATUREPRESSUREANALOG_H
#define ASSETTEMPERATUREPRESSUREANALOG_H

#include "IEC61968/AssetMeas/AssetTemperaturePressureAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Temperature or pressure type of asset analog.
		 */
		class AssetTemperaturePressureAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			AssetTemperaturePressureAnalog();
			virtual ~AssetTemperaturePressureAnalog();
			/**
			 * Kind of analog representing temperature or pressure related to an asset.
			 */
			IEC61968::AssetMeas::AssetTemperaturePressureAnalogKind kind = IEC61968::AssetMeas::AssetTemperaturePressureAnalogKind::_undef;

		};

	}

}
#endif // ASSETTEMPERATUREPRESSUREANALOG_H
