///////////////////////////////////////////////////////////
//  LoadUserDefined.h
//  Implementation of the Class LoadUserDefined
//  Created on:      28-Jan-2016 12:45:38
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_B5B45F2D_81B0_4862_8B2E_1891D90AF82F__INCLUDED_)
#define EA_B5B45F2D_81B0_4862_8B2E_1891D90AF82F__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/LoadDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Load whose dynamic behaviour is described by a user-defined model.
			 */
			class LoadUserDefined : public IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics
			{

			public:
				LoadUserDefined();
				virtual ~LoadUserDefined();
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
#endif // !defined(EA_B5B45F2D_81B0_4862_8B2E_1891D90AF82F__INCLUDED_)
