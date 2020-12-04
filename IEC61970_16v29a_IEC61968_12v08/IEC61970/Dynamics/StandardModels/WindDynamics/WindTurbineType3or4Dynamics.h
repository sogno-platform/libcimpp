///////////////////////////////////////////////////////////
//  WindTurbineType3or4Dynamics.h
//  Implementation of the Class WindTurbineType3or4Dynamics
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE3OR4DYNAMICS_H
#define WINDTURBINETYPE3OR4DYNAMICS_H

#include "IEC61970/Base/Wires/EnergySource.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Parent class supporting relationships to wind turbines Type 3 and 4 and wind
				 * plant including their control models.
				 */
				class WindTurbineType3or4Dynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					WindTurbineType3or4Dynamics();
					virtual ~WindTurbineType3or4Dynamics();
					/**
					 * Energy Source (current source) with which this wind Type 3 or 4 dynamics model
					 * is asoociated.
					 */
					IEC61970::Base::Wires::EnergySource *EnergySource;
					/**
					 * Remote input signal used by these wind turbine Type 3 or 4 models.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE3OR4DYNAMICS_H
