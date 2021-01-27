///////////////////////////////////////////////////////////
//  WindTurbineType4IEC.h
//  Implementation of the Class WindTurbineType4IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE4IEC_H
#define WINDTURBINETYPE4IEC_H

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
				 * Parent class supporting relationships to IEC wind turbines Type 4 including
				 * their control models.
				 */
				class WindTurbineType4IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC
				{

				public:
					WindTurbineType4IEC();
					virtual ~WindTurbineType4IEC();

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE4IEC_H
