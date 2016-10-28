///////////////////////////////////////////////////////////
//  TargetLevelSchedule.h
//  Implementation of the Class TargetLevelSchedule
///////////////////////////////////////////////////////////

#ifndef TARGETLEVELSCHEDULE_H
#define TARGETLEVELSCHEDULE_H

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
#endif // TARGETLEVELSCHEDULE_H
