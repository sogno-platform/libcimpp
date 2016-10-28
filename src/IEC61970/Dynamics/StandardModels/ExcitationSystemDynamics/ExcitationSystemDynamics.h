///////////////////////////////////////////////////////////
//  ExcitationSystemDynamics.h
//  Implementation of the Class ExcitationSystemDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCITATIONSYSTEMDYNAMICS_H
#define EXCITATIONSYSTEMDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Excitation system function block whose behavior is described by reference to a
				 * standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class ExcitationSystemDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					ExcitationSystemDynamics();
					virtual ~ExcitationSystemDynamics();
					/**
					 * Synchronous machine model with which this excitation system model is associated.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics *SynchronousMachineDynamics;

				};

			}

		}

	}

}
#endif // EXCITATIONSYSTEMDYNAMICS_H
