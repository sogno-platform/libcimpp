///////////////////////////////////////////////////////////
//  RegularIntervalSchedule.h
//  Implementation of the Class RegularIntervalSchedule
//  Created on:      28-Jan-2016 12:46:28
///////////////////////////////////////////////////////////

#if !defined(EA_70ABC912_C005_4c91_8BEE_DBBAA3BCA5A8__INCLUDED_)
#define EA_70ABC912_C005_4c91_8BEE_DBBAA3BCA5A8__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/RegularTimePoint.h"
#include "IEC61970/Base/Core/BasicIntervalSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The schedule has time points where the time between them is constant.
			 */
			class RegularIntervalSchedule : public IEC61970::Base::Core::BasicIntervalSchedule
			{

			public:
				RegularIntervalSchedule();
				virtual ~RegularIntervalSchedule();
				/**
				 * The time for the last time point.
				 */
				IEC61970::Base::Domain::DateTime endTime;
				/**
				 * The time between each pair of subsequent regular time points in sequence order.
				 */
				IEC61970::Base::Domain::Seconds timeStep;
				/**
				 * The regular interval time point data values that define this schedule.
				 */
				std::list<IEC61970::Base::Core::RegularTimePoint*> TimePoints;

			};

		}

	}

}
#endif // !defined(EA_70ABC912_C005_4c91_8BEE_DBBAA3BCA5A8__INCLUDED_)
