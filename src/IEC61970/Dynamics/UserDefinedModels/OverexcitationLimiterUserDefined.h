///////////////////////////////////////////////////////////
//  OverexcitationLimiterUserDefined.h
//  Implementation of the Class OverexcitationLimiterUserDefined
//  Created on:      28-Jan-2016 12:45:54
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_B5D96AC9_4460_4b28_B7D9_298DDAD7DEB6__INCLUDED_)
#define EA_B5D96AC9_4460_4b28_B7D9_298DDAD7DEB6__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/OverexcitationLimiterDynamics/OverexcitationLimiterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Overexcitation limiter system function block whose dynamic behaviour is
			 * described by <font color="#0f0f0f">a user-defined model.</font>
			 */
			class OverexcitationLimiterUserDefined : public IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics
			{

			public:
				OverexcitationLimiterUserDefined();
				virtual ~OverexcitationLimiterUserDefined();
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
#endif // !defined(EA_B5D96AC9_4460_4b28_B7D9_298DDAD7DEB6__INCLUDED_)
