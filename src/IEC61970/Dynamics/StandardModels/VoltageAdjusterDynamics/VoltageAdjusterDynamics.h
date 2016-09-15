///////////////////////////////////////////////////////////
//  VoltageAdjusterDynamics.h
//  Implementation of the Class VoltageAdjusterDynamics
//  Created on:      28-Jan-2016 12:47:35
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_2B2CA678_C91F_4171_A40C_2766D5FE1733__INCLUDED_)
#define EA_2B2CA678_C91F_4171_A40C_2766D5FE1733__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/PFVArControllerType1Dynamics/PFVArControllerType1Dynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageAdjusterDynamics
			{
				/**
				 * Voltage adjuster function block whose behaviour is described by reference to a
				 * standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class VoltageAdjusterDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					VoltageAdjusterDynamics();
					virtual ~VoltageAdjusterDynamics();
					/**
					 * Power Factor or VAr controller Type I model with which this voltage adjuster is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics *PFVArControllerType1Dynamics;

				};

			}

		}

	}

}
#endif // !defined(EA_2B2CA678_C91F_4171_A40C_2766D5FE1733__INCLUDED_)
