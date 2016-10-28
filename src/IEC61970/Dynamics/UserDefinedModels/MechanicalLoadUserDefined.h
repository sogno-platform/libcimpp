///////////////////////////////////////////////////////////
//  MechanicalLoadUserDefined.h
//  Implementation of the Class MechanicalLoadUserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef MECHANICALLOADUSERDEFINED_H
#define MECHANICALLOADUSERDEFINED_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/MechanicalLoadDynamics/MechanicalLoadDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Mechanical load function block whose dynamic behaviour is described by <font
			 * color="#0f0f0f">a user-defined model.</font>
			 */
			class MechanicalLoadUserDefined : public IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics
			{

			public:
				MechanicalLoadUserDefined();
				virtual ~MechanicalLoadUserDefined();
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
#endif // MECHANICALLOADUSERDEFINED_H
