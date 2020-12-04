///////////////////////////////////////////////////////////
//  HydroPumpOpSchedule.h
//  Implementation of the Class HydroPumpOpSchedule
///////////////////////////////////////////////////////////

#ifndef HYDROPUMPOPSCHEDULE_H
#define HYDROPUMPOPSCHEDULE_H

#include "IEC61970/Base/Core/RegularIntervalSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The hydro pump's Operator-approved current operating schedule (or plan),
				 * typically produced with the aid of unit commitment type analyses.The unit's
				 * operating schedule status is typically given as: (0=unavailable) (1=avilable to
				 * startup or shutdown)  (2=must pump).
				 */
				class HydroPumpOpSchedule : public IEC61970::Base::Core::RegularIntervalSchedule
				{

				public:
					HydroPumpOpSchedule();
					virtual ~HydroPumpOpSchedule();

				};

			}

		}

	}

}
#endif // HYDROPUMPOPSCHEDULE_H
