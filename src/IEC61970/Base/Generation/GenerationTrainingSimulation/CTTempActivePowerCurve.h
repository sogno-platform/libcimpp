///////////////////////////////////////////////////////////
//  CTTempActivePowerCurve.h
//  Implementation of the Class CTTempActivePowerCurve
//  Created on:      28-Jan-2016 12:43:47
///////////////////////////////////////////////////////////

#if !defined(EA_736207AA_2358_46e5_995D_B7766EC6C7B9__INCLUDED_)
#define EA_736207AA_2358_46e5_995D_B7766EC6C7B9__INCLUDED_

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Relationship between the combustion turbine's power output rating in gross
				 * active power (X-axis) and the ambient air temperature (Y-axis).
				 */
				class CTTempActivePowerCurve : public IEC61970::Base::Core::Curve
				{

				public:
					CTTempActivePowerCurve();
					virtual ~CTTempActivePowerCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_736207AA_2358_46e5_995D_B7766EC6C7B9__INCLUDED_)
