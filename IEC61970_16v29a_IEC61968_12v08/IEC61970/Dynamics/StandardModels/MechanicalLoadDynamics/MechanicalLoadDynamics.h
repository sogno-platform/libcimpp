///////////////////////////////////////////////////////////
//  MechanicalLoadDynamics.h
//  Implementation of the Class MechanicalLoadDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef MECHANICALLOADDYNAMICS_H
#define MECHANICALLOADDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/AsynchronousMachineDynamics/AsynchronousMachineDynamics.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace MechanicalLoadDynamics
			{
				/**
				 * Mechanical load function block whose behavior is described by reference to a
				 * standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class MechanicalLoadDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					MechanicalLoadDynamics();
					virtual ~MechanicalLoadDynamics();
					/**
					 * Asynchronous machine model with which this mechanical load model is associated.
					 */
					IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics *AsynchronousMachineDynamics;
					/**
					 * Synchronous machine model with which this mechanical load model is associated.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics *SynchronousMachineDynamics;

				};

			}

		}

	}

}
#endif // MECHANICALLOADDYNAMICS_H
