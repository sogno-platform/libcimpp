///////////////////////////////////////////////////////////
//  WindGenTurbineType3IEC.h
//  Implementation of the Class WindGenTurbineType3IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTURBINETYPE3IEC_H
#define WINDGENTURBINETYPE3IEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Generator model for wind turbines of IEC type 3A and 3B.
				 */
				class WindGenTurbineType3IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC
				{

				public:
					WindGenTurbineType3IEC();
					virtual ~WindGenTurbineType3IEC();
					/**
					 * Maximum active current ramp rate (di<sub>pmax</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU dipmax;
					/**
					 * Maximum reactive current ramp rate (di<sub>qmax</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU diqmax;

				};

			}

		}

	}

}
#endif // WINDGENTURBINETYPE3IEC_H
