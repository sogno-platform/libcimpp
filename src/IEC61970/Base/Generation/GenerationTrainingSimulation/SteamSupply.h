///////////////////////////////////////////////////////////
//  SteamSupply.h
//  Implementation of the Class SteamSupply
///////////////////////////////////////////////////////////

#ifndef STEAMSUPPLY_H
#define STEAMSUPPLY_H

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
#endif // STEAMSUPPLY_H
