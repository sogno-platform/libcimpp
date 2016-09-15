///////////////////////////////////////////////////////////
//  StartMainFuelCurve.h
//  Implementation of the Class StartMainFuelCurve
//  Created on:      28-Jan-2016 12:46:44
///////////////////////////////////////////////////////////

#if !defined(EA_E65437CE_7960_40de_B19A_79D215C9AE1F__INCLUDED_)
#define EA_E65437CE_7960_40de_B19A_79D215C9AE1F__INCLUDED_

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
					IEC61970::Base::Generation::Production::FuelType mainFuelType;

				};

			}

		}

	}

}
#endif // !defined(EA_E65437CE_7960_40de_B19A_79D215C9AE1F__INCLUDED_)
