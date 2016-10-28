///////////////////////////////////////////////////////////
//  LoadUserDefined.h
//  Implementation of the Class LoadUserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef LOADUSERDEFINED_H
#define LOADUSERDEFINED_H

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
#endif // LOADUSERDEFINED_H
