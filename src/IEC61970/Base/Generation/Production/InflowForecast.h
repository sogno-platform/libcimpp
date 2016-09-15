///////////////////////////////////////////////////////////
//  InflowForecast.h
//  Implementation of the Class InflowForecast
//  Created on:      28-Jan-2016 12:45:28
///////////////////////////////////////////////////////////

#if !defined(EA_E8839FC3_38DA_4df0_90F3_FD686EE41BF7__INCLUDED_)
#define EA_E8839FC3_38DA_4df0_90F3_FD686EE41BF7__INCLUDED_

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
				 * Natural water inflow to a reservoir, usually forecasted from predicted rain and
				 * snowmelt. Typically in one hour increments for up to 10 days. The forecast is
				 * given in average cubic meters per second over the time increment.
				 */
				class InflowForecast : public IEC61970::Base::Core::RegularIntervalSchedule
				{

				public:
					InflowForecast();
					virtual ~InflowForecast();

				};

			}

		}

	}

}
#endif // !defined(EA_E8839FC3_38DA_4df0_90F3_FD686EE41BF7__INCLUDED_)
