///////////////////////////////////////////////////////////
//  DrumBoiler.h
//  Implementation of the Class DrumBoiler
///////////////////////////////////////////////////////////

#ifndef DRUMBOILER_H
#define DRUMBOILER_H

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
#endif // DRUMBOILER_H
