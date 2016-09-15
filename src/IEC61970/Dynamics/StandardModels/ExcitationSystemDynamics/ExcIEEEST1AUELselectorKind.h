///////////////////////////////////////////////////////////
//  ExcIEEEST1AUELselectorKind.h
//  Implementation of the Class ExcIEEEST1AUELselectorKind
//  Created on:      28-Jan-2016 12:44:36
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_EE714C91_454E_46db_8835_F566F526F8BA__INCLUDED_)
#define EA_EE714C91_454E_46db_8835_F566F526F8BA__INCLUDED_

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
					ignoreUELsignal,
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
#endif // !defined(EA_EE714C91_454E_46db_8835_F566F526F8BA__INCLUDED_)
