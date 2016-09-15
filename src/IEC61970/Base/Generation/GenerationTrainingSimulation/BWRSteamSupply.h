///////////////////////////////////////////////////////////
//  BWRSteamSupply.h
//  Implementation of the Class BWRSteamSupply
//  Created on:      28-Jan-2016 12:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_E561CCB7_73CB_495a_A497_CD127CFADBBA__INCLUDED_)
#define EA_E561CCB7_73CB_495a_A497_CD127CFADBBA__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/SteamSupply.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Boiling water reactor used as a steam supply to a steam turbine.
				 */
				class BWRSteamSupply : public IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply
				{

				public:
					BWRSteamSupply();
					virtual ~BWRSteamSupply();
					/**
					 * High power limit.
					 */
					IEC61970::Base::Domain::PU highPowerLimit;
					/**
					 * In-core thermal time constant.
					 */
					IEC61970::Base::Domain::Seconds inCoreThermalTC;
					/**
					 * Integral gain.
					 */
					IEC61970::Base::Domain::Float integralGain;
					/**
					 * Initial lower limit.
					 */
					IEC61970::Base::Domain::PU lowerLimit;
					/**
					 * Low power limit.
					 */
					IEC61970::Base::Domain::PU lowPowerLimit;
					/**
					 * Pressure limit.
					 */
					IEC61970::Base::Domain::PU pressureLimit;
					/**
					 * Pressure setpoint gain adjuster.
					 */
					IEC61970::Base::Domain::Float pressureSetpointGA;
					/**
					 * Pressure setpoint time constant.
					 */
					IEC61970::Base::Domain::Seconds pressureSetpointTC1;
					/**
					 * Pressure setpoint time constant.
					 */
					IEC61970::Base::Domain::Seconds pressureSetpointTC2;
					/**
					 * Proportional gain.
					 */
					IEC61970::Base::Domain::Float proportionalGain;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux1;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux2;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux3;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux4;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux5;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux6;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux7;
					/**
					 * Coefficient for modeling the effect of off-nominal frequency and voltage on
					 * recirculation and core flow, which affects the BWR power output.
					 */
					IEC61970::Base::Domain::PU rfAux8;
					/**
					 * Rod pattern.
					 */
					IEC61970::Base::Domain::PU rodPattern;
					/**
					 * Constant associated with rod pattern.
					 */
					IEC61970::Base::Domain::Float rodPatternConstant;
					/**
					 * Initial upper limit.
					 */
					IEC61970::Base::Domain::PU upperLimit;

				};

			}

		}

	}

}
#endif // !defined(EA_E561CCB7_73CB_495a_A497_CD127CFADBBA__INCLUDED_)
