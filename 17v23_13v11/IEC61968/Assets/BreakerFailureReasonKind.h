///////////////////////////////////////////////////////////
//  BreakerFailureReasonKind.h
//  Implementation of the Class BreakerFailureReasonKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef BREAKERFAILUREREASONKIND_H
#define BREAKERFAILUREREASONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Reason for breaker failure.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class BreakerFailureReasonKind
		{
			 _undef = -1, 	blastValveFailure,
			bushingFailure,
			closeCoilOpenShortedFailed,
			contaminatedAir,
			contaminatedArcChutes,
			contaminatedGas,
			contaminatedGasAir,
			controlCircuitFailure,
			degradedLubrication,
			externalOrInternalContamination,
			highPressureAirPlant,
			highResistanceLoadPath,
			highResistancePath,
			interrupterContactFailure,
			interrupterFailure,
			linkageFailure,
			lossOfOil,
			lossOfVacuum,
			lowGasPressure,
			mechanismFailure,
			mechanismOrLinkageFailure,
			oilRelatedFailure,
			poorOilQuality,
			rackingMechanismFailure,
			resistorFailure,
			resistorGradingCapacitorFailure,
			SF6BlastValveFailure,
			SF6PufferFailure,
			solidDielectricFailure,
			storedEnergyFailure,
			tripCoilOpenShortedFailed
		};

	}

}
#endif // BREAKERFAILUREREASONKIND_H
