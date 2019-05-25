///////////////////////////////////////////////////////////
//  InspectionAnalogKind.h
//  Implementation of the Class InspectionAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INSPECTIONANALOGKIND_H
#define INSPECTIONANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs typically recorded during a field inspection.
		 */
		enum class InspectionAnalogKind
		{
			/**
			 * Can apply to whole breaker or any individual pole.
			 */
			 _undef = -1, 	SF6PressureReading,
			AirPressureReading,
			airPressureHPSystemReading,
			compressorHourMeterReading,
			/**
			 * Can apply to whole breaker or any individual pole.
			 */
			airPressureLPSystemReading
		};

	}

}
#endif // INSPECTIONANALOGKIND_H
