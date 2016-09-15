///////////////////////////////////////////////////////////
//  HydroPumpOpSchedule.h
//  Implementation of the Class HydroPumpOpSchedule
//  Created on:      28-Jan-2016 12:45:21
///////////////////////////////////////////////////////////

#if !defined(EA_DF3E789D_7217_4c43_ACEE_C65ABDC32625__INCLUDED_)
#define EA_DF3E789D_7217_4c43_ACEE_C65ABDC32625__INCLUDED_

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
#endif // !defined(EA_DF3E789D_7217_4c43_ACEE_C65ABDC32625__INCLUDED_)
