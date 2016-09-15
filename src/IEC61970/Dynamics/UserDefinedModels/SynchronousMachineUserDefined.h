///////////////////////////////////////////////////////////
//  SynchronousMachineUserDefined.h
//  Implementation of the Class SynchronousMachineUserDefined
//  Created on:      28-Jan-2016 12:47:09
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_32049E0E_10F7_4262_B21E_F495B3394795__INCLUDED_)
#define EA_32049E0E_10F7_4262_B21E_F495B3394795__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Synchronous machine whose dynamic behaviour is described by a user-defined
			 * model.
			 */
			class SynchronousMachineUserDefined : public IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics
			{

			public:
				SynchronousMachineUserDefined();
				virtual ~SynchronousMachineUserDefined();
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
#endif // !defined(EA_32049E0E_10F7_4262_B21E_F495B3394795__INCLUDED_)
