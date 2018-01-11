///////////////////////////////////////////////////////////
//  WindTurbineType4bIEC.h
//  Implementation of the Class WindTurbineType4bIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE4BIEC_H
#define WINDTURBINETYPE4BIEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4IEC.h"

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
				 * Reference: IEC Standard 61400-27-1, section 5.5.5.2.
				 */
				class WindTurbineType4bIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4IEC
				{

				public:
					WindTurbineType4bIEC();
					virtual ~WindTurbineType4bIEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE4BIEC_H
