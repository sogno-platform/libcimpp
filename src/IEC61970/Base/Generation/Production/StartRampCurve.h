///////////////////////////////////////////////////////////
//  StartRampCurve.h
//  Implementation of the Class StartRampCurve
//  Created on:      28-Jan-2016 12:46:45
///////////////////////////////////////////////////////////

#if !defined(EA_0C30D1F4_0358_49ff_B266_9877EC1EC0C1__INCLUDED_)
#define EA_0C30D1F4_0358_49ff_B266_9877EC1EC0C1__INCLUDED_

#include "IEC61970/Base/Domain/ActivePowerChangeRate.h"
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
				 * Rate in gross active power/minute (Y-axis) at which a unit can be loaded versus
				 * the number of hours (X-axis) the unit was off line.
				 */
				class StartRampCurve : public IEC61970::Base::Core::Curve
				{

				public:
					StartRampCurve();
					virtual ~StartRampCurve();
					/**
					 * The startup ramp rate in gross for a unit that is on hot standby.
					 */
					IEC61970::Base::Domain::ActivePowerChangeRate hotStandbyRamp;

				};

			}

		}

	}

}
#endif // !defined(EA_0C30D1F4_0358_49ff_B266_9877EC1EC0C1__INCLUDED_)
