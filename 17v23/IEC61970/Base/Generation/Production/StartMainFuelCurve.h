///////////////////////////////////////////////////////////
//  StartMainFuelCurve.h
//  Implementation of the Class StartMainFuelCurve
///////////////////////////////////////////////////////////

#ifndef STARTMAINFUELCURVE_H
#define STARTMAINFUELCURVE_H

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
				 * The quantity of main fuel (Y-axis) used to restart and repay the auxiliary
				 * power consumed versus the number of hours (X-axis) the unit was off line.
				 */
				class StartMainFuelCurve : public IEC61970::Base::Core::Curve
				{

				public:
					StartMainFuelCurve();
					virtual ~StartMainFuelCurve();
					/**
					 * Type of main fuel.
					 */
					IEC61970::Base::Generation::Production::FuelType mainFuelType = IEC61970::Base::Generation::Production::FuelType::_undef;

				};

			}

		}

	}

}
#endif // STARTMAINFUELCURVE_H
