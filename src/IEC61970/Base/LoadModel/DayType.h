///////////////////////////////////////////////////////////
//  DayType.h
//  Implementation of the Class DayType
//  Created on:      28-Jan-2016 12:43:54
///////////////////////////////////////////////////////////

#if !defined(EA_C169DAF2_1C7E_43e4_81FD_B2B4207B2D7F__INCLUDED_)
#define EA_C169DAF2_1C7E_43e4_81FD_B2B4207B2D7F__INCLUDED_

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
#endif // !defined(EA_C169DAF2_1C7E_43e4_81FD_B2B4207B2D7F__INCLUDED_)
