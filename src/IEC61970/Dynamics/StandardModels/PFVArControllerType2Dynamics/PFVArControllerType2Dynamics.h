///////////////////////////////////////////////////////////
//  PFVArControllerType2Dynamics.h
//  Implementation of the Class PFVArControllerType2Dynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PFVARCONTROLLERTYPE2DYNAMICS_H
#define PFVARCONTROLLERTYPE2DYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PFVArControllerType2Dynamics
			{
				/**
				 * Power Factor or VAr controller Type II function block whose behaviour is
				 * described by reference to a standard model <font color="#0f0f0f">or by
				 * definition of a user-defined model.</font>
				 */
				class PFVArControllerType2Dynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					PFVArControllerType2Dynamics();
					virtual ~PFVArControllerType2Dynamics();
					/**
					 * Excitation system model with which this Power Factor or VAr controller Type II
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;

				};

			}

		}

	}

}
#endif // PFVARCONTROLLERTYPE2DYNAMICS_H
