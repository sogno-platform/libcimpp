///////////////////////////////////////////////////////////
//  OverexcitationLimiterDynamics.h
//  Implementation of the Class OverexcitationLimiterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OVEREXCITATIONLIMITERDYNAMICS_H
#define OVEREXCITATIONLIMITERDYNAMICS_H

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
#endif // OVEREXCITATIONLIMITERDYNAMICS_H
