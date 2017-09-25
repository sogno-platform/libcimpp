///////////////////////////////////////////////////////////
//  FossilSteamSupply.h
//  Implementation of the Class FossilSteamSupply
///////////////////////////////////////////////////////////

#ifndef FOSSILSTEAMSUPPLY_H
#define FOSSILSTEAMSUPPLY_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/BoilerControlMode.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Integer.h"
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
				 * Fossil fueled boiler (e.g., coal, oil, gas).
				 */
				class FossilSteamSupply : public IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply
				{

				public:
					FossilSteamSupply();
					virtual ~FossilSteamSupply();
					/**
					 * Off nominal frequency effect on auxiliary real power. Per unit active power
					 * variation versus per unit frequency variation.
					 */
					IEC61970::Base::Domain::PU auxPowerVersusFrequency;
					/**
					 * Off nominal voltage effect on auxiliary real power. Per unit active power
					 * variation versus per unit voltage variation.
					 */
					IEC61970::Base::Domain::PU auxPowerVersusVoltage;
					/**
					 * The control mode of the boiler.
					 */
					IEC61970::Base::Generation::GenerationTrainingSimulation::BoilerControlMode boilerControlMode;
					/**
					 * Active power error bias ratio.
					 */
					IEC61970::Base::Domain::Float controlErrorBiasP;
					/**
					 * Integral constant.
					 */
					IEC61970::Base::Domain::Float controlIC;
					/**
					 * Proportional constant.
					 */
					IEC61970::Base::Domain::Float controlPC;
					/**
					 * Pressure error bias ratio.
					 */
					IEC61970::Base::Domain::Float controlPEB;
					/**
					 * Pressure error deadband.
					 */
					IEC61970::Base::Domain::PU controlPED;
					/**
					 * Time constant.
					 */
					IEC61970::Base::Domain::Float controlTC;
					/**
					 * Feedwater integral gain ratio.
					 */
					IEC61970::Base::Domain::Float feedWaterIG;
					/**
					 * Feedwater proportional gain ratio.
					 */
					IEC61970::Base::Domain::Float feedWaterPG;
					/**
					 * Feedwater time constant rato.
					 */
					IEC61970::Base::Domain::Seconds feedWaterTC;
					/**
					 * Fuel demand limit.
					 */
					IEC61970::Base::Domain::PU fuelDemandLimit;
					/**
					 * Fuel delay.
					 */
					IEC61970::Base::Domain::Seconds fuelSupplyDelay;
					/**
					 * Fuel supply time constant.
					 */
					IEC61970::Base::Domain::Seconds fuelSupplyTC;
					/**
					 * Active power maximum error rate limit.
					 */
					IEC61970::Base::Domain::Float maxErrorRateP;
					/**
					 * Mechanical power sensor lag.
					 */
					IEC61970::Base::Domain::Seconds mechPowerSensorLag;
					/**
					 * Active power minimum error rate limit.
					 */
					IEC61970::Base::Domain::Float minErrorRateP;
					/**
					 * Pressure control derivative gain ratio.
					 */
					IEC61970::Base::Domain::Float pressureCtrlDG;
					/**
					 * Pressure control integral gain ratio.
					 */
					IEC61970::Base::Domain::Float pressureCtrlIG;
					/**
					 * Pressure control proportional gain ratio.
					 */
					IEC61970::Base::Domain::Float pressureCtrlPG;
					/**
					 * Pressure feedback indicator.
					 */
					IEC61970::Base::Domain::Integer pressureFeedback;
					/**
					 * Drum/primary superheater capacity.
					 */
					IEC61970::Base::Domain::Float superHeater1Capacity;
					/**
					 * Secondary superheater capacity.
					 */
					IEC61970::Base::Domain::Float superHeater2Capacity;
					/**
					 * Superheater pipe pressure drop constant.
					 */
					IEC61970::Base::Domain::Float superHeaterPipePD;
					/**
					 * Throttle pressure setpoint.
					 */
					IEC61970::Base::Domain::PU throttlePressureSP;

				};

			}

		}

	}

}
#endif // FOSSILSTEAMSUPPLY_H
