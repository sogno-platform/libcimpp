///////////////////////////////////////////////////////////
//  WindTurbineType3IEC.h
//  Implementation of the Class WindTurbineType3IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE3IEC_H
#define WINDTURBINETYPE3IEC_H

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
				 * Parent class supporting relationships to IEC wind turbines Type 3 including
				 * their control models.
				 */
				class WindTurbineType3IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC
				{

				public:
					WindTurbineType3IEC();
					virtual ~WindTurbineType3IEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE3IEC_H
