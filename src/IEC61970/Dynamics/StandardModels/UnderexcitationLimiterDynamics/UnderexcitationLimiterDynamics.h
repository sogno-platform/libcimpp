///////////////////////////////////////////////////////////
//  UnderexcitationLimiterDynamics.h
//  Implementation of the Class UnderexcitationLimiterDynamics
//  Created on:      28-Jan-2016 12:47:28
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_972F5000_17E8_4cd4_AAA2_27A730817C45__INCLUDED_)
#define EA_972F5000_17E8_4cd4_AAA2_27A730817C45__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
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
#endif // !defined(EA_972F5000_17E8_4cd4_AAA2_27A730817C45__INCLUDED_)
