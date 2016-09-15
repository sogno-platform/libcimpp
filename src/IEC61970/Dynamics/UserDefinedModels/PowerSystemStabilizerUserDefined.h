///////////////////////////////////////////////////////////
//  PowerSystemStabilizerUserDefined.h
//  Implementation of the Class PowerSystemStabilizerUserDefined
//  Created on:      28-Jan-2016 12:46:10
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_E4F3072E_9E9A_462e_B870_0729C01CFE50__INCLUDED_)
#define EA_E4F3072E_9E9A_462e_B870_0729C01CFE50__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/PowerSystemStabilizerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * <font color="#0f0f0f">Power system stabilizer</font> function block whose
			 * dynamic behaviour is described by <font color="#0f0f0f">a user-defined model.
			 * </font>
			 */
			class PowerSystemStabilizerUserDefined : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
			{

			public:
				PowerSystemStabilizerUserDefined();
				virtual ~PowerSystemStabilizerUserDefined();
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
#endif // !defined(EA_E4F3072E_9E9A_462e_B870_0729C01CFE50__INCLUDED_)
