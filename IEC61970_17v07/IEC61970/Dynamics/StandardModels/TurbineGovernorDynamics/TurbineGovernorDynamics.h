///////////////////////////////////////////////////////////
//  TurbineGovernorDynamics.h
//  Implementation of the Class TurbineGovernorDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef TURBINEGOVERNORDYNAMICS_H
#define TURBINEGOVERNORDYNAMICS_H

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
#endif // TURBINEGOVERNORDYNAMICS_H
