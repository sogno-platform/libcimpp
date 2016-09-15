///////////////////////////////////////////////////////////
//  TurbineLoadControllerDynamics.h
//  Implementation of the Class TurbineLoadControllerDynamics
//  Created on:      28-Jan-2016 12:47:27
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_AB5464FD_84FB_4bd4_ABB2_8063B615F102__INCLUDED_)
#define EA_AB5464FD_84FB_4bd4_ABB2_8063B615F102__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

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
#endif // !defined(EA_AB5464FD_84FB_4bd4_ABB2_8063B615F102__INCLUDED_)
