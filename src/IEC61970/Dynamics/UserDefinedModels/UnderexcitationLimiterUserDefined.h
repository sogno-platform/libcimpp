///////////////////////////////////////////////////////////
//  UnderexcitationLimiterUserDefined.h
//  Implementation of the Class UnderexcitationLimiterUserDefined
//  Created on:      28-Jan-2016 12:47:28
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_4A350326_FF58_4a4e_8DF8_0580911FA1C4__INCLUDED_)
#define EA_4A350326_FF58_4a4e_8DF8_0580911FA1C4__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/UnderexcitationLimiterDynamics/UnderexcitationLimiterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Underexcitation limiter function block whose dynamic behaviour is described by
			 * <font color="#0f0f0f">a user-defined model.</font>
			 */
			class UnderexcitationLimiterUserDefined : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
			{

			public:
				UnderexcitationLimiterUserDefined();
				virtual ~UnderexcitationLimiterUserDefined();
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
#endif // !defined(EA_4A350326_FF58_4a4e_8DF8_0580911FA1C4__INCLUDED_)
