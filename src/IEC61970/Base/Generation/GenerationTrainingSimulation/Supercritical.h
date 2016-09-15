///////////////////////////////////////////////////////////
//  Supercritical.h
//  Implementation of the Class Supercritical
//  Created on:      28-Jan-2016 12:46:54
///////////////////////////////////////////////////////////

#if !defined(EA_C2C33637_F354_402e_9218_D32C80AAE0A6__INCLUDED_)
#define EA_C2C33637_F354_402e_9218_D32C80AAE0A6__INCLUDED_

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
				 * Once-through supercritical boiler.
				 */
				class Supercritical : public IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply
				{

				public:
					Supercritical();
					virtual ~Supercritical();

				};

			}

		}

	}

}
#endif // !defined(EA_C2C33637_F354_402e_9218_D32C80AAE0A6__INCLUDED_)
