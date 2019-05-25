///////////////////////////////////////////////////////////
//  BreakerRepairItemKind.h
//  Implementation of the Class BreakerRepairItemKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef BREAKERREPAIRITEMKIND_H
#define BREAKERREPAIRITEMKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Breaker components and problem areas which can be the focus of a repair work
		 * task.
		 */
		enum class BreakerRepairItemKind
		{
			 _undef = -1, 	airCompressor,
			auxiliarySwitchAndLinkage,
			busConnection,
			checkValve,
			closeCoil,
			contactor,
			controlCircuit,
			corrosion,
			gasDensitySupervision,
			heaterOrThermostat,
			hydraulicFluidLeak,
			interrupterAssembly,
			positionIndicator,
			pressureSwitch,
			pumpOrMotor,
			relay,
			SF6GasLeak,
			storedEnergySystem,
			tripCoil,
			tripControlValve,
			wiring,
			other
		};

	}

}
#endif // BREAKERREPAIRITEMKIND_H
