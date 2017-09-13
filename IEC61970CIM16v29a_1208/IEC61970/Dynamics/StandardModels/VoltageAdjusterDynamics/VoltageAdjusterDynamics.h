///////////////////////////////////////////////////////////
//  VoltageAdjusterDynamics.h
//  Implementation of the Class VoltageAdjusterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef VOLTAGEADJUSTERDYNAMICS_H
#define VOLTAGEADJUSTERDYNAMICS_H

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/PFVArControllerType1Dynamics/PFVArControllerType1Dynamics.h"

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
#endif // VOLTAGEADJUSTERDYNAMICS_H
