///////////////////////////////////////////////////////////
//  HeatInputCurve.h
//  Implementation of the Class HeatInputCurve
//  Created on:      28-Jan-2016 12:45:17
///////////////////////////////////////////////////////////

#if !defined(EA_7F48E6D2_8EEB_4cf4_9950_4E341B7211B0__INCLUDED_)
#define EA_7F48E6D2_8EEB_4cf4_9950_4E341B7211B0__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/HeatRate.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Relationship between unit heat input in energy per time for main fuel (Y1-axis)
				 * and supplemental fuel (Y2-axis) versus unit output in active power (X-axis).
				 * The quantity of main fuel used to sustain generation at this output level is
				 * prorated for throttling between definition points. The quantity of supplemental
				 * fuel used at this output level is fixed and not prorated.
				 */
				class HeatInputCurve : public IEC61970::Base::Core::Curve
				{

				public:
					HeatInputCurve();
					virtual ~HeatInputCurve();
					/**
					 * Power output - auxiliary power multiplier adjustment factor.
					 */
					IEC61970::Base::Domain::PU auxPowerMult;
					/**
					 * Power output - auxiliary power offset adjustment factor.
					 */
					IEC61970::Base::Domain::ActivePower auxPowerOffset;
					/**
					 * Heat input - efficiency multiplier adjustment factor.
					 */
					IEC61970::Base::Domain::PU heatInputEff;
					/**
					 * Heat input - offset adjustment factor.
					 */
					IEC61970::Base::Generation::Production::HeatRate heatInputOffset;
					/**
					 * Flag is set to true when output is expressed in net active power.
					 */
					IEC61970::Base::Domain::Boolean isNetGrossP;

				};

			}

		}

	}

}
#endif // !defined(EA_7F48E6D2_8EEB_4cf4_9950_4E341B7211B0__INCLUDED_)
