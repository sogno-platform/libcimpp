///////////////////////////////////////////////////////////
//  WindGenTurbineType1bIEC.h
//  Implementation of the Class WindGenTurbineType1bIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTURBINETYPE1BIEC_H
#define WINDGENTURBINETYPE1BIEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPitchContPowerIEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Wind turbine IEC Type 1B.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 5.5.2.3.
				 */
				class WindGenTurbineType1bIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC
				{

				public:
					WindGenTurbineType1bIEC();
					virtual ~WindGenTurbineType1bIEC();
					/**
					 * Pitch control power model associated with this wind turbine type 1B model.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC *WindPitchContPowerIEC;

				};

			}

		}

	}

}
#endif // WINDGENTURBINETYPE1BIEC_H
