///////////////////////////////////////////////////////////
//  OilAnalysisMoistureAnalogKind.h
//  Implementation of the Class OilAnalysisMoistureAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISMOISTUREANALOGKIND_H
#define OILANALYSISMOISTUREANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil moisture analysis result.
		 */
		enum class OilAnalysisMoistureAnalogKind
		{
			/**
			 * Moisture measured via coulometric Karl Fischer titration (in ppm, specifically
			 * milligram/kilogram).
			 */
			 _undef = -1, 	waterContent,
			/**
			 * Water content by infrared sensor (in ppm, specifically milligram/kilogram).
			 */
			waterContentMonitoredViaInfrared,
			/**
			 * Water content by capacitance sensor (in ppm, specifically milligram/kilogram).
			 */
			waterContentMonitoredViaCapacitance,
			/**
			 * Water content by aluminum oxide sensor (in ppm, specifically
			 * milligram/kilogram).
			 */
			waterContentMonitoredViaAluminumOxide,
			/**
			 * Water content by other sensor (in ppm, specifically milligram/kilogram).
			 */
			waterContentMonitoredViaOther,
			/**
			 * Relative saturation of water in fluid (in percent).
			 */
			relativeSaturation,
			/**
			 * Calculated relative saturation of water in fluid (in percent).
			 */
			relativeSaturationCalculated,
			/**
			 * Dew point (in °C). Is usually a negative value.
			 */
			dewPoint
		};

	}

}
#endif // OILANALYSISMOISTUREANALOGKIND_H
