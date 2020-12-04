///////////////////////////////////////////////////////////
//  InflowForecast.h
//  Implementation of the Class InflowForecast
///////////////////////////////////////////////////////////

#ifndef INFLOWFORECAST_H
#define INFLOWFORECAST_H

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
#endif // INFLOWFORECAST_H
