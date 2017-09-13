///////////////////////////////////////////////////////////
//  SwitchSchedule.h
//  Implementation of the Class SwitchSchedule
//  Original author: KLH
///////////////////////////////////////////////////////////

#ifndef SWITCHSCHEDULE_H
#define SWITCHSCHEDULE_H

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A schedule of switch positions.  If RegularTimePoint.value1 is 0, the switch is
			 * open.  If 1, the switch is closed.  
			 */
			class SwitchSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				SwitchSchedule();
				virtual ~SwitchSchedule();

			};

		}

	}

}
#endif // SWITCHSCHEDULE_H
