///////////////////////////////////////////////////////////
//  ConformLoadSchedule.h
//  Implementation of the Class ConformLoadSchedule
//  Created on:      28-Jan-2016 12:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_03E139CC_07DE_4291_B475_233966D184D2__INCLUDED_)
#define EA_03E139CC_07DE_4291_B475_233966D184D2__INCLUDED_

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
#endif // !defined(EA_03E139CC_07DE_4291_B475_233966D184D2__INCLUDED_)
