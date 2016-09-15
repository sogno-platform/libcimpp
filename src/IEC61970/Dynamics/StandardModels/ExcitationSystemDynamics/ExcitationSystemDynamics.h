///////////////////////////////////////////////////////////
//  ExcitationSystemDynamics.h
//  Implementation of the Class ExcitationSystemDynamics
//  Created on:      28-Jan-2016 12:44:39
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1B9D2987_1D99_456b_AD5F_D2ECC82D2409__INCLUDED_)
#define EA_1B9D2987_1D99_456b_AD5F_D2ECC82D2409__INCLUDED_

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
#endif // !defined(EA_1B9D2987_1D99_456b_AD5F_D2ECC82D2409__INCLUDED_)
