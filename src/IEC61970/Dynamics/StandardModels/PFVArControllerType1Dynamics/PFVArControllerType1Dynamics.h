///////////////////////////////////////////////////////////
//  PFVArControllerType1Dynamics.h
//  Implementation of the Class PFVArControllerType1Dynamics
//  Created on:      28-Jan-2016 12:45:59
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_9F76CBE8_8440_45ca_BF92_0B39E8C4B314__INCLUDED_)
#define EA_9F76CBE8_8440_45ca_BF92_0B39E8C4B314__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
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
#endif // !defined(EA_9F76CBE8_8440_45ca_BF92_0B39E8C4B314__INCLUDED_)
