///////////////////////////////////////////////////////////
//  VoltageCompensatorDynamics.h
//  Implementation of the Class VoltageCompensatorDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef VOLTAGECOMPENSATORDYNAMICS_H
#define VOLTAGECOMPENSATORDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageCompensatorDynamics
			{
				/**
				 * Voltage compensator function block whose behaviour is described by reference to
				 * a standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class VoltageCompensatorDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					VoltageCompensatorDynamics();
					virtual ~VoltageCompensatorDynamics();
					/**
					 * Excitation system model with which this voltage compensator is associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;
					/**
					 * Remote input signal used by this voltage compensator model.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // VOLTAGECOMPENSATORDYNAMICS_H
