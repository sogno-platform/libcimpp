///////////////////////////////////////////////////////////
//  DayType.h
//  Implementation of the Class DayType
///////////////////////////////////////////////////////////

#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <list>

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Group of similar days.   For example it could be used to represent weekdays,
			 * weekend, or holidays.
			 */
			class DayType : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DayType();
				virtual ~DayType();
				/**
				 * Schedules that use this DayType.
				 */
				std::list<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*> SeasonDayTypeSchedules;

			};

		}

	}

}
#endif // DAYTYPE_H
