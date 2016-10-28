///////////////////////////////////////////////////////////
//  WindTurbineType4aIEC.h
//  Implementation of the Class WindTurbineType4aIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE4AIEC_H
#define WINDTURBINETYPE4AIEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenType4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Wind turbine IEC Type 4A.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 6.5.5.2.
				 */
				class WindTurbineType4aIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC
				{

				public:
					WindTurbineType4aIEC();
					virtual ~WindTurbineType4aIEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE4AIEC_H
