///////////////////////////////////////////////////////////
//  SeasonDayTypeSchedule.h
//  Implementation of the Class SeasonDayTypeSchedule
//  Created on:      28-Jan-2016 12:46:38
///////////////////////////////////////////////////////////

#if !defined(EA_D29E211D_4993_4098_93FA_8D701E684908__INCLUDED_)
#define EA_D29E211D_4993_4098_93FA_8D701E684908__INCLUDED_

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
#endif // !defined(EA_D29E211D_4993_4098_93FA_8D701E684908__INCLUDED_)
