///////////////////////////////////////////////////////////
//  ConformLoadSchedule.h
//  Implementation of the Class ConformLoadSchedule
///////////////////////////////////////////////////////////

#ifndef CONFORMLOADSCHEDULE_H
#define CONFORMLOADSCHEDULE_H

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * A curve of load  versus time (X-axis) showing the active power values (Y1-axis)
			 * and reactive power (Y2-axis) for each unit of the period covered. This curve
			 * represents a typical pattern of load over the time period for a given day type
			 * and season.
			 */
			class ConformLoadSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				ConformLoadSchedule();
				virtual ~ConformLoadSchedule();

			};

		}

	}

}
#endif // CONFORMLOADSCHEDULE_H
