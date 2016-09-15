///////////////////////////////////////////////////////////
//  RegulationSchedule.h
//  Implementation of the Class RegulationSchedule
//  Created on:      28-Jan-2016 12:46:30
///////////////////////////////////////////////////////////

#if !defined(EA_E9472FAE_01B9_4579_A412_E30247101067__INCLUDED_)
#define EA_E9472FAE_01B9_4579_A412_E30247101067__INCLUDED_

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
#endif // !defined(EA_E9472FAE_01B9_4579_A412_E30247101067__INCLUDED_)
