///////////////////////////////////////////////////////////
//  SteamSupply.h
//  Implementation of the Class SteamSupply
//  Created on:      28-Jan-2016 12:46:48
///////////////////////////////////////////////////////////

#if !defined(EA_A1A89E01_2B80_4b12_A1F3_76A2639DFE57__INCLUDED_)
#define EA_A1A89E01_2B80_4b12_A1F3_76A2639DFE57__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/SteamTurbine.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Steam supply for steam turbine.
				 */
				class SteamSupply : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					SteamSupply();
					virtual ~SteamSupply();
					/**
					 * Rating of steam supply.
					 */
					IEC61970::Base::Domain::Float steamSupplyRating;
					/**
					 * Steam turbines may have steam supplied by a steam supply.
					 */
					std::list<IEC61970::Base::Generation::GenerationTrainingSimulation::SteamTurbine*> SteamTurbines;

				};

			}

		}

	}

}
#endif // !defined(EA_A1A89E01_2B80_4b12_A1F3_76A2639DFE57__INCLUDED_)
