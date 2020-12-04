///////////////////////////////////////////////////////////
//  TurbineLoadControllerDynamics.h
//  Implementation of the Class TurbineLoadControllerDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TURBINELOADCONTROLLERDYNAMICS_H
#define TURBINELOADCONTROLLERDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineLoadControllerDynamics
			{
				/**
				 * Turbine load controller function block whose behavior is described by reference
				 * to a standard model <font color="#0f0f0f">or by definition of a user-defined
				 * model.</font>
				 */
				class TurbineLoadControllerDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					TurbineLoadControllerDynamics();
					virtual ~TurbineLoadControllerDynamics();
					/**
					 * Turbine-governor controlled by this turbine load controller.
					 */
					IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics *TurbineGovernorDynamics;

				};

			}

		}

	}

}
#endif // TURBINELOADCONTROLLERDYNAMICS_H
