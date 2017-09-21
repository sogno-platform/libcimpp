///////////////////////////////////////////////////////////
//  SeasonDayTypeSchedule.h
//  Implementation of the Class SeasonDayTypeSchedule
///////////////////////////////////////////////////////////

#ifndef SEASONDAYTYPESCHEDULE_H
#define SEASONDAYTYPESCHEDULE_H

#include "IEC61970/Base/Core/RegularIntervalSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * A time schedule covering a 24 hour period, with curve data for a specific type
			 * of season and day.
			 */
			class SeasonDayTypeSchedule : public IEC61970::Base::Core::RegularIntervalSchedule
			{

			public:
				SeasonDayTypeSchedule();
				virtual ~SeasonDayTypeSchedule();

			};

		}

	}

}
#endif // SEASONDAYTYPESCHEDULE_H
