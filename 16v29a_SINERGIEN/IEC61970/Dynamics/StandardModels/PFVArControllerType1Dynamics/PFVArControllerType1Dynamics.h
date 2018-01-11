///////////////////////////////////////////////////////////
//  PFVArControllerType1Dynamics.h
//  Implementation of the Class PFVArControllerType1Dynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PFVARCONTROLLERTYPE1DYNAMICS_H
#define PFVARCONTROLLERTYPE1DYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PFVArControllerType1Dynamics
			{
				/**
				 * Power Factor or VAr controller Type I function block whose behaviour is
				 * described by reference to a standard model <font color="#0f0f0f">or by
				 * definition of a user-defined model.</font>
				 */
				class PFVArControllerType1Dynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					PFVArControllerType1Dynamics();
					virtual ~PFVArControllerType1Dynamics();
					/**
					 * Excitation system model with which this Power Factor or VAr controller Type I
					 * model is associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;
					/**
					 * Remote input signal used by this Power Factor or VAr controller Type I model.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // PFVARCONTROLLERTYPE1DYNAMICS_H
