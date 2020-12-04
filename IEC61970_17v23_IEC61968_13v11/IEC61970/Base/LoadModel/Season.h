///////////////////////////////////////////////////////////
//  Season.h
//  Implementation of the Class Season
///////////////////////////////////////////////////////////

#ifndef SEASON_H
#define SEASON_H

#include <list>

#include "IEC61970/Base/Domain/MonthDay.h"
#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * A specified time period of the year.
			 */
			class Season : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Season();
				virtual ~Season();
				/**
				 * Date season ends.
				 */
				IEC61970::Base::Domain::MonthDay endDate;
				/**
				 * Date season starts.
				 */
				IEC61970::Base::Domain::MonthDay startDate;
				/**
				 * Schedules that use this Season.
				 */
				std::list<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*> SeasonDayTypeSchedules;

			};

		}

	}

}
#endif // SEASON_H
