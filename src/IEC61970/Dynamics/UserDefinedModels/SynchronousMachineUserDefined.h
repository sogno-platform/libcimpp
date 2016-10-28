///////////////////////////////////////////////////////////
//  SynchronousMachineUserDefined.h
//  Implementation of the Class SynchronousMachineUserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINEUSERDEFINED_H
#define SYNCHRONOUSMACHINEUSERDEFINED_H

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
#endif // SYNCHRONOUSMACHINEUSERDEFINED_H
