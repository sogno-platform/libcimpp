///////////////////////////////////////////////////////////
//  StartIgnFuelCurve.h
//  Implementation of the Class StartIgnFuelCurve
///////////////////////////////////////////////////////////

#ifndef STARTIGNFUELCURVE_H
#define STARTIGNFUELCURVE_H

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
#endif // STARTIGNFUELCURVE_H
