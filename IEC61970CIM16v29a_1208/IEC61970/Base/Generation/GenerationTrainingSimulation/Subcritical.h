///////////////////////////////////////////////////////////
//  Subcritical.h
//  Implementation of the Class Subcritical
///////////////////////////////////////////////////////////

#ifndef SUBCRITICAL_H
#define SUBCRITICAL_H

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
				 * Once-through subcritical boiler.
				 */
				class Subcritical : public IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply
				{

				public:
					Subcritical();
					virtual ~Subcritical();

				};

			}

		}

	}

}
#endif // SUBCRITICAL_H
