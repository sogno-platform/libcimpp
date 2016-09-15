///////////////////////////////////////////////////////////
//  OverexcitationLimiterDynamics.h
//  Implementation of the Class OverexcitationLimiterDynamics
//  Created on:      28-Jan-2016 12:45:53
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_C1ADD2D2_20C1_432c_859C_A9ADBC2F8B99__INCLUDED_)
#define EA_C1ADD2D2_20C1_432c_859C_A9ADBC2F8B99__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace OverexcitationLimiterDynamics
			{
				/**
				 * <font color="#0f0f0f">O</font>Overexcitation limiter function block whose
				 * behaviour is described by reference to a standard model <font
				 * color="#0f0f0f">or by definition of a user-defined model.</font>
				 */
				class OverexcitationLimiterDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					OverexcitationLimiterDynamics();
					virtual ~OverexcitationLimiterDynamics();
					/**
					 * Excitation system model with which this overexcitation limiter model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;

				};

			}

		}

	}

}
#endif // !defined(EA_C1ADD2D2_20C1_432c_859C_A9ADBC2F8B99__INCLUDED_)
