///////////////////////////////////////////////////////////
//  WindTurbineType3or4IEC.h
//  Implementation of the Class WindTurbineType3or4IEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE3OR4IEC_H
#define WINDTURBINETYPE3OR4IEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Parent class supporting relationships to IEC wind turbines Type 3 and 4
				 * including their control models.
				 */
				class WindTurbineType3or4IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics
				{

				public:
					WindTurbineType3or4IEC();
					virtual ~WindTurbineType3or4IEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE3OR4IEC_H
