///////////////////////////////////////////////////////////
//  Supercritical.h
//  Implementation of the Class Supercritical
///////////////////////////////////////////////////////////

#ifndef SUPERCRITICAL_H
#define SUPERCRITICAL_H

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
#endif // SUPERCRITICAL_H
