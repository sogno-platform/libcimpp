///////////////////////////////////////////////////////////
//  HeatRecoveryBoiler.h
//  Implementation of the Class HeatRecoveryBoiler
///////////////////////////////////////////////////////////

#ifndef HEATRECOVERYBOILER_H
#define HEATRECOVERYBOILER_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/CombustionTurbine.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/FossilSteamSupply.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * The heat recovery system associated with combustion turbines in order to
				 * produce steam for combined cycle plants.
				 */
				class HeatRecoveryBoiler : public IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply
				{

				public:
					HeatRecoveryBoiler();
					virtual ~HeatRecoveryBoiler();
					/**
					 * The steam supply rating in kilopounds per hour, if dual pressure boiler.
					 */
					IEC61970::Base::Domain::Float steamSupplyRating2;
					/**
					 * A combustion turbine may have a heat recovery boiler for making steam.
					 */
					std::list<IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine*> CombustionTurbines;

				};

			}

		}

	}

}
#endif // HEATRECOVERYBOILER_H
