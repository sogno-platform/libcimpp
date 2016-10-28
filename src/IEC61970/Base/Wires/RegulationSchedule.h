///////////////////////////////////////////////////////////
//  RegulationSchedule.h
//  Implementation of the Class RegulationSchedule
///////////////////////////////////////////////////////////

#ifndef REGULATIONSCHEDULE_H
#define REGULATIONSCHEDULE_H

#include <list>

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"
#include "IEC61970/Base/Wires/RegulatingControl.h"
#include "IEC61970/Base/Wires/VoltageControlZone.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A pre-established pattern over time for a controlled variable, e.g., busbar
			 * voltage.
			 */
			class RegulationSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				RegulationSchedule();
				virtual ~RegulationSchedule();
				/**
				 * Regulating controls that have this Schedule.
				 */
				IEC61970::Base::Wires::RegulatingControl *RegulatingControl;
				/**
				 * A VoltageControlZone may have a  voltage regulation schedule.
				 */
				std::list<IEC61970::Base::Wires::VoltageControlZone*> VoltageControlZones;

			};

		}

	}

}
#endif // REGULATIONSCHEDULE_H
