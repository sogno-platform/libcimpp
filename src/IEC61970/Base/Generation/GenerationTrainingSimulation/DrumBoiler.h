///////////////////////////////////////////////////////////
//  DrumBoiler.h
//  Implementation of the Class DrumBoiler
//  Created on:      28-Jan-2016 12:44:10
///////////////////////////////////////////////////////////

#if !defined(EA_BBE8B600_B8C7_4216_B66D_2873665A3EF9__INCLUDED_)
#define EA_BBE8B600_B8C7_4216_B66D_2873665A3EF9__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
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
				 * Drum boiler.
				 */
				class DrumBoiler : public IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply
				{

				public:
					DrumBoiler();
					virtual ~DrumBoiler();
					/**
					 * Rating of drum boiler in steam units.
					 */
					IEC61970::Base::Domain::Float drumBoilerRating;

				};

			}

		}

	}

}
#endif // !defined(EA_BBE8B600_B8C7_4216_B66D_2873665A3EF9__INCLUDED_)
