///////////////////////////////////////////////////////////
//  WindTurbineType1or2Dynamics.h
//  Implementation of the Class WindTurbineType1or2Dynamics
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE1OR2DYNAMICS_H
#define WINDTURBINETYPE1OR2DYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/AsynchronousMachineDynamics/AsynchronousMachineDynamics.h"
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
				 * Parent class supporting relationships to wind turbines Type 1 and 2 and their
				 * control models.
				 */
				class WindTurbineType1or2Dynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					WindTurbineType1or2Dynamics();
					virtual ~WindTurbineType1or2Dynamics();
					/**
					 * Asynchronous machine model with which this wind generator type 1 or 2 model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics *AsynchronousMachineDynamics;
					/**
					 * Remote input signal used by this wind generator Type 1 or Type 2 model.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // WINDTURBINETYPE1OR2DYNAMICS_H
