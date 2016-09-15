///////////////////////////////////////////////////////////
//  VoltageCompensatorDynamics.h
//  Implementation of the Class VoltageCompensatorDynamics
//  Created on:      28-Jan-2016 12:47:36
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_E4186707_4D4E_45c3_BFFC_996B4E415DBB__INCLUDED_)
#define EA_E4186707_4D4E_45c3_BFFC_996B4E415DBB__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageCompensatorDynamics
			{
				/**
				 * Voltage compensator function block whose behaviour is described by reference to
				 * a standard model <font color="#0f0f0f">or by definition of a user-defined model.
				 * </font>
				 */
				class VoltageCompensatorDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					VoltageCompensatorDynamics();
					virtual ~VoltageCompensatorDynamics();
					/**
					 * Excitation system model with which this voltage compensator is associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;
					/**
					 * Remote input signal used by this voltage compensator model.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // !defined(EA_E4186707_4D4E_45c3_BFFC_996B4E415DBB__INCLUDED_)
