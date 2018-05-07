///////////////////////////////////////////////////////////
//  WindGeneratingUnit.h
//  Implementation of the Class WindGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef WINDGENERATINGUNIT_H
#define WINDGENERATINGUNIT_H

#include <list>

#include "IEC61970/Base/Generation/Production/WindGenUnitKind.h"
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
				 * A wind driven generating unit.  May be used to represent a single turbine or an
				 * aggregation.  
				 */
				class WindGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					WindGeneratingUnit();
					virtual ~WindGeneratingUnit();
					/**
					 * The kind of wind generating unit
					 */
					IEC61970::Base::Generation::Production::WindGenUnitKind windGenUnitType = IEC61970::Base::Generation::Production::WindGenUnitKind::_undef;
					Sinergien::Communication::communicationRequirement *m_communicationRequirement;
					Sinergien::EnergyGrid::SimulationData::WeatherData *m_WeatherData;
					std::list<Sinergien::Communication::Modems::ComMod*> m_ComMod;

				};

			}

		}

	}

}
#endif // WINDGENERATINGUNIT_H
