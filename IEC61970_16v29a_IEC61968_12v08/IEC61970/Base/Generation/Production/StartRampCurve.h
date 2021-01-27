///////////////////////////////////////////////////////////
//  StartRampCurve.h
//  Implementation of the Class StartRampCurve
///////////////////////////////////////////////////////////

#ifndef STARTRAMPCURVE_H
#define STARTRAMPCURVE_H

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
#endif // STARTRAMPCURVE_H
