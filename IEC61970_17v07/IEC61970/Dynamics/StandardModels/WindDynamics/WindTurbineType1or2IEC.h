///////////////////////////////////////////////////////////
//  WindTurbineType1or2IEC.h
//  Implementation of the Class WindTurbineType1or2IEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE1OR2IEC_H
#define WINDTURBINETYPE1OR2IEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Generator model for wind turbine of IEC Type 1 or Type 2 is a standard
				 * asynchronous generator model.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 6.6.3.1.
				 */
				class WindTurbineType1or2IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics
				{

				public:
					WindTurbineType1or2IEC();
					virtual ~WindTurbineType1or2IEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE1OR2IEC_H
