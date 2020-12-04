///////////////////////////////////////////////////////////
//  AsynchronousMachineUserDefined.h
//  Implementation of the Class AsynchronousMachineUserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASYNCHRONOUSMACHINEUSERDEFINED_H
#define ASYNCHRONOUSMACHINEUSERDEFINED_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/AsynchronousMachineDynamics/AsynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Asynchronous machine whose dynamic behaviour is described by a user-defined
			 * model.
			 */
			class AsynchronousMachineUserDefined : public IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics
			{

			public:
				AsynchronousMachineUserDefined();
				virtual ~AsynchronousMachineUserDefined();
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
#endif // ASYNCHRONOUSMACHINEUSERDEFINED_H
