///////////////////////////////////////////////////////////
//  ExcIEEEST1AUELselectorKind.h
//  Implementation of the Class ExcIEEEST1AUELselectorKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef EXCIEEEST1AUELSELECTORKIND_H
#define EXCIEEEST1AUELSELECTORKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of connection for the UEL input used in ExcIEEEST1A.
				 */
				enum class ExcIEEEST1AUELselectorKind
				{
					/**
					 * Ignore UEL signal.
					 */
					 _undef = -1, 	ignoreUELsignal,
					/**
					 * UEL input HV gate with voltage regulator output.
					 */
					inputHVgateVoltageOutput,
					/**
					 * UEL input HV gate with error signal.
					 */
					inputHVgateErrorSignal,
					/**
					 * UEL input added to error signal.
					 */
					inputAddedToErrorSignal
				};

			}

		}

	}

}
#endif // EXCIEEEST1AUELSELECTORKIND_H
