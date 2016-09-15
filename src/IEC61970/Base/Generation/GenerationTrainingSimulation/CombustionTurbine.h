///////////////////////////////////////////////////////////
//  CombustionTurbine.h
//  Implementation of the Class CombustionTurbine
//  Created on:      28-Jan-2016 12:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_2CC83846_81B2_4e93_8427_C71F47460E0E__INCLUDED_)
#define EA_2CC83846_81B2_4e93_8427_C71F47460E0E__INCLUDED_

#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Generation/Production/AirCompressor.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/PrimeMover.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/CTTempActivePowerCurve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * A prime mover that is typically fueled by gas or light oil.
				 */
				class CombustionTurbine : public IEC61970::Base::Generation::GenerationTrainingSimulation::PrimeMover
				{

				public:
					CombustionTurbine();
					virtual ~CombustionTurbine();
					/**
					 * Default ambient temperature to be used in modeling applications.
					 */
					IEC61970::Base::Domain::Temperature ambientTemp;
					/**
					 * Off-nominal frequency effect on turbine auxiliaries. Per unit reduction in
					 * auxiliary active power consumption versus per unit reduction in frequency (from
					 * rated frequency).
					 */
					IEC61970::Base::Domain::PU auxPowerVersusFrequency;
					/**
					 * Off-nominal voltage effect on turbine auxiliaries. Per unit reduction in
					 * auxiliary active power consumption versus per unit reduction in auxiliary bus
					 * voltage (from a specified voltage level).
					 */
					IEC61970::Base::Domain::PU auxPowerVersusVoltage;
					/**
					 * Off-nominal frequency effect on turbine capability. Per unit reduction in unit
					 * active power capability versus per unit reduction in frequency (from rated
					 * frequency).
					 */
					IEC61970::Base::Domain::PU capabilityVersusFrequency;
					/**
					 * Flag that is set to true if the combustion turbine is associated with a heat
					 * recovery boiler.
					 */
					IEC61970::Base::Domain::Boolean heatRecoveryFlag;
					/**
					 * Per unit change in power per (versus) unit change in ambient temperature.
					 */
					IEC61970::Base::Domain::PU powerVariationByTemp;
					/**
					 * Reference temperature at which the output of the turbine was defined.
					 */
					IEC61970::Base::Domain::Temperature referenceTemp;
					/**
					 * The time constant for the turbine.
					 */
					IEC61970::Base::Domain::Seconds timeConstant;
					/**
					 * A CAES air compressor is driven by combustion turbine.
					 */
					IEC61970::Base::Generation::Production::AirCompressor *AirCompressor;
					/**
					 * A combustion turbine may have an active power versus ambient temperature
					 * relationship.
					 */
					IEC61970::Base::Generation::GenerationTrainingSimulation::CTTempActivePowerCurve *CTTempActivePowerCurve;

				};

			}

		}

	}

}
#endif // !defined(EA_2CC83846_81B2_4e93_8427_C71F47460E0E__INCLUDED_)
