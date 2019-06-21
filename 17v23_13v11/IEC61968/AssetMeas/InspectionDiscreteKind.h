///////////////////////////////////////////////////////////
//  InspectionDiscreteKind.h
//  Implementation of the Class InspectionDiscreteKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INSPECTIONDISCRETEKIND_H
#define INSPECTIONDISCRETEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Discretes representing breaker inspection result.
		 */
		enum class InspectionDiscreteKind
		{
			/**
			 * Any visible damage and/or oil/air/SF<sub>6</sub> leaks?.
			 */
			 _undef = -1, 	visibleDamageOrLeaks,
			/**
			 * Is the control cabinet heater on?
			 */
			controlCabinetHeaterOn,
			/**
			 * Are bushing oil levels OK?
			 */
			bushingOilLevelsOK,
			/**
			 * Are the oil tank levels OK?
			 */
			oilTankLevelsOK,
			/**
			 * Is the spring pressure reading OK? Can apply to whole breaker or any individual
			 * pole.
			 */
			springPressureReadingOK,
			/**
			 * Is the circuit switcher gas indicator normal?
			 */
			gasIndicatorNormal,
			/**
			 * Is the hydraulic oil level OK? Can apply to any individual pole.
			 */
			hydraulicOilLevelOK,
			/**
			 * Hydraulic fluid level OK?
			 */
			hydraulicFluidLevelOK,
			/**
			 * Check oil level OK?
			 */
			checkOilLevelOK,
			/**
			 * Can apply to whole breaker or any individual pole.
			 */
			operationCount,
			/**
			 * Can apply to any individual pole.
			 */
			motorOperationsCount,
			pumpMotorOperationCount,
			lowToHighPressureCount
		};

	}

}
#endif // INSPECTIONDISCRETEKIND_H
