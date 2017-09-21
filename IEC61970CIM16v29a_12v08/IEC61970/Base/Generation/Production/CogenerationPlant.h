///////////////////////////////////////////////////////////
//  CogenerationPlant.h
//  Implementation of the Class CogenerationPlant
///////////////////////////////////////////////////////////

#ifndef COGENERATIONPLANT_H
#define COGENERATIONPLANT_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/ThermalGeneratingUnit.h"
#include "IEC61970/Base/Generation/Production/SteamSendoutSchedule.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A set of thermal generating units for the production of electrical energy and
				 * process steam (usually from the output of the steam turbines). The steam
				 * sendout is typically used for industrial purposes or for municipal heating and
				 * cooling.
				 */
				class CogenerationPlant : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					CogenerationPlant();
					virtual ~CogenerationPlant();
					/**
					 * The high pressure steam sendout.
					 */
					IEC61970::Base::Domain::Float cogenHPSendoutRating;
					/**
					 * The high pressure steam rating.
					 */
					IEC61970::Base::Domain::Float cogenHPSteamRating;
					/**
					 * The low pressure steam sendout.
					 */
					IEC61970::Base::Domain::Float cogenLPSendoutRating;
					/**
					 * The low pressure steam rating.
					 */
					IEC61970::Base::Domain::Float cogenLPSteamRating;
					/**
					 * The rated output active power of the cogeneration plant.
					 */
					IEC61970::Base::Domain::ActivePower ratedP;
					/**
					 * A thermal generating unit may be a member of a cogeneration plant.
					 */
					std::list<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*> ThermalGeneratingUnits;
					/**
					 * A cogeneration plant has a steam sendout schedule.
					 */
					IEC61970::Base::Generation::Production::SteamSendoutSchedule *SteamSendoutSchedule;

				};

			}

		}

	}

}
#endif // COGENERATIONPLANT_H
