///////////////////////////////////////////////////////////
//  HeatRecoveryBoiler.h
//  Implementation of the Class HeatRecoveryBoiler
//  Created on:      28-Jan-2016 12:45:18
///////////////////////////////////////////////////////////

#if !defined(EA_8D8FBA31_C335_48ab_847E_0305CC41AB67__INCLUDED_)
#define EA_8D8FBA31_C335_48ab_847E_0305CC41AB67__INCLUDED_

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
#endif // !defined(EA_8D8FBA31_C335_48ab_847E_0305CC41AB67__INCLUDED_)
