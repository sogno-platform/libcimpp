///////////////////////////////////////////////////////////
//  Subcritical.h
//  Implementation of the Class Subcritical
//  Created on:      28-Jan-2016 12:46:52
///////////////////////////////////////////////////////////

#if !defined(EA_240A860A_1031_4b9a_9A4A_5856361D5E42__INCLUDED_)
#define EA_240A860A_1031_4b9a_9A4A_5856361D5E42__INCLUDED_

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
#endif // !defined(EA_240A860A_1031_4b9a_9A4A_5856361D5E42__INCLUDED_)
