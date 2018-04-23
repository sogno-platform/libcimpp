///////////////////////////////////////////////////////////
//  SolarGeneratingUnit.h
//  Implementation of the Class SolarGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SOLARGENERATINGUNIT_H
#define SOLARGENERATINGUNIT_H

#include <list>

#include "Sinergien/Communication/communicationRequirement.h"
#include "Sinergien/EnergyGrid/SimulationData/WeatherData.h"
#include "Sinergien/Communication/Modems/ComMod.h"
#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A solar thermal generating unit.
				 */
				class SolarGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					SolarGeneratingUnit();
					virtual ~SolarGeneratingUnit();
					Sinergien::Communication::communicationRequirement *m_communicationRequirement;
					Sinergien::EnergyGrid::SimulationData::WeatherData *m_WeatherData;
					std::list<Sinergien::Communication::Modems::ComMod*> m_ComMod;

				};

			}

		}

	}

}
#endif // SOLARGENERATINGUNIT_H
