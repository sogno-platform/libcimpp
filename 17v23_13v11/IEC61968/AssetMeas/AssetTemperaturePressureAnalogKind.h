///////////////////////////////////////////////////////////
//  AssetTemperaturePressureAnalogKind.h
//  Implementation of the Class AssetTemperaturePressureAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETTEMPERATUREPRESSUREANALOGKIND_H
#define ASSETTEMPERATUREPRESSUREANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing temperatures or pressures related to assets.
		 */
		enum class AssetTemperaturePressureAnalogKind
		{
			/**
			 * Oil temperature at valve (in °C).
			 */
			 _undef = -1, 	oilTemperatureAtValve,
			/**
			 * Oil pressure at valve (in KPa).
			 */
			oilPressureAtValve
		};

	}

}
#endif // ASSETTEMPERATUREPRESSUREANALOGKIND_H
