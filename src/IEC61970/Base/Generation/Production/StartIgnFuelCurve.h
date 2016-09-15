///////////////////////////////////////////////////////////
//  StartIgnFuelCurve.h
//  Implementation of the Class StartIgnFuelCurve
//  Created on:      28-Jan-2016 12:46:44
///////////////////////////////////////////////////////////

#if !defined(EA_F8F9FFF2_CF75_4f0d_AB65_1783A02AB4D7__INCLUDED_)
#define EA_F8F9FFF2_CF75_4f0d_AB65_1783A02AB4D7__INCLUDED_

#include "IEC61970/Base/Generation/Production/FuelType.h"
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
				 * The quantity of ignition fuel (Y-axis) used to restart and repay the auxiliary
				 * power consumed versus the number of hours (X-axis) the unit was off line.
				 */
				class StartIgnFuelCurve : public IEC61970::Base::Core::Curve
				{

				public:
					StartIgnFuelCurve();
					virtual ~StartIgnFuelCurve();
					/**
					 * Type of ignition fuel.
					 */
					IEC61970::Base::Generation::Production::FuelType ignitionFuelType;

				};

			}

		}

	}

}
#endif // !defined(EA_F8F9FFF2_CF75_4f0d_AB65_1783A02AB4D7__INCLUDED_)
