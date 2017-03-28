///////////////////////////////////////////////////////////
//  UnderexcitationLimiterDynamics.h
//  Implementation of the Class UnderexcitationLimiterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef UNDEREXCITATIONLIMITERDYNAMICS_H
#define UNDEREXCITATIONLIMITERDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace UnderexcitationLimiterDynamics
			{
				/**
				 * Underexcitation limiter function block whose behaviour is described by
				 * reference to a standard model <font color="#0f0f0f">or by definition of a user-
				 * defined model.</font>
				 */
				class UnderexcitationLimiterDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					UnderexcitationLimiterDynamics();
					virtual ~UnderexcitationLimiterDynamics();
					/**
					 * Excitation system model with which this underexcitation limiter model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;
					/**
					 * Remote input signal used by this underexcitation limiter model.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // UNDEREXCITATIONLIMITERDYNAMICS_H
