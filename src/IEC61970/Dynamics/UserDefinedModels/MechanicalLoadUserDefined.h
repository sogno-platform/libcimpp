///////////////////////////////////////////////////////////
//  MechanicalLoadUserDefined.h
//  Implementation of the Class MechanicalLoadUserDefined
//  Created on:      28-Jan-2016 12:45:42
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_D47DC8B6_5BAC_4ac7_A50B_B188890DA775__INCLUDED_)
#define EA_D47DC8B6_5BAC_4ac7_A50B_B188890DA775__INCLUDED_

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
#endif // !defined(EA_D47DC8B6_5BAC_4ac7_A50B_B188890DA775__INCLUDED_)
