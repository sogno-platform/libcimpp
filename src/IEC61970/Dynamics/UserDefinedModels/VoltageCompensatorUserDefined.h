///////////////////////////////////////////////////////////
//  VoltageCompensatorUserDefined.h
//  Implementation of the Class VoltageCompensatorUserDefined
//  Created on:      28-Jan-2016 12:47:37
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_C168FAB7_C8C5_4baa_B1B3_26D2DE16A08E__INCLUDED_)
#define EA_C168FAB7_C8C5_4baa_B1B3_26D2DE16A08E__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/VoltageCompensatorDynamics/VoltageCompensatorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Voltage compensator function block whose dynamic behaviour is described by
			 * <font color="#0f0f0f">a user-defined model.</font>
			 */
			class VoltageCompensatorUserDefined : public IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics
			{

			public:
				VoltageCompensatorUserDefined();
				virtual ~VoltageCompensatorUserDefined();
				/**
				 * Behaviour is based on proprietary model as opposed to detailed model.
				 * true = user-defined model is proprietary with behaviour mutually understood by
				 * sending and receiving applications and parameters passed as general attributes
				 * false = user-defined model is explicitly defined in terms of control blocks and
				 * their input and output signals.
				 */
				IEC61970::Base::Domain::Boolean proprietary;

			};

		}

	}

}
#endif // !defined(EA_C168FAB7_C8C5_4baa_B1B3_26D2DE16A08E__INCLUDED_)
