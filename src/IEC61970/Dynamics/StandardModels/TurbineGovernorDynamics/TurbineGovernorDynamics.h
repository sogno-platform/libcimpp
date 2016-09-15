///////////////////////////////////////////////////////////
//  TurbineGovernorDynamics.h
//  Implementation of the Class TurbineGovernorDynamics
//  Created on:      28-Jan-2016 12:47:26
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_5DB79AD6_73E6_4686_BCB9_3D27B45E8543__INCLUDED_)
#define EA_5DB79AD6_73E6_4686_BCB9_3D27B45E8543__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/AsynchronousMachineDynamics/AsynchronousMachineDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Turbine-governor function block whose behavior is described by reference to a
				 * standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class TurbineGovernorDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					TurbineGovernorDynamics();
					virtual ~TurbineGovernorDynamics();
					/**
					 * Asynchronous machine model with which this turbine-governor model is associated.
					 */
					IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics *AsynchronousMachineDynamics;

				};

			}

		}

	}

}
#endif // !defined(EA_5DB79AD6_73E6_4686_BCB9_3D27B45E8543__INCLUDED_)
