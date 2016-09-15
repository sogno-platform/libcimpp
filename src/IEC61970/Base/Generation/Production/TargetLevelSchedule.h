///////////////////////////////////////////////////////////
//  TargetLevelSchedule.h
//  Implementation of the Class TargetLevelSchedule
//  Created on:      28-Jan-2016 12:47:12
///////////////////////////////////////////////////////////

#if !defined(EA_684A97A7_57D8_4317_8A0E_5485BC7D6218__INCLUDED_)
#define EA_684A97A7_57D8_4317_8A0E_5485BC7D6218__INCLUDED_

#include "IEC61970/Base/Domain/WaterLevel.h"
#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Reservoir water level targets from advanced studies or "rule curves". Typically
				 * in one hour increments for up to 10 days.
				 */
				class TargetLevelSchedule : public IEC61970::Base::Core::Curve
				{

				public:
					TargetLevelSchedule();
					virtual ~TargetLevelSchedule();
					/**
					 * High target level limit, above which the reservoir operation will be penalized.
					 */
					IEC61970::Base::Domain::WaterLevel highLevelLimit;
					/**
					 * Low target level limit, below which the reservoir operation will be penalized.
					 */
					IEC61970::Base::Domain::WaterLevel lowLevelLimit;

				};

			}

		}

	}

}
#endif // !defined(EA_684A97A7_57D8_4317_8A0E_5485BC7D6218__INCLUDED_)
