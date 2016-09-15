///////////////////////////////////////////////////////////
//  TurbineGovernorUserDefined.h
//  Implementation of the Class TurbineGovernorUserDefined
//  Created on:      28-Jan-2016 12:47:26
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_B2368B8A_27AC_44dc_AFDF_2EA1B7B9AC67__INCLUDED_)
#define EA_B2368B8A_27AC_44dc_AFDF_2EA1B7B9AC67__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Turbine-governor function block whose dynamic behaviour is described by <font
			 * color="#0f0f0f">a user-defined model.</font>
			 */
			class TurbineGovernorUserDefined : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
			{

			public:
				TurbineGovernorUserDefined();
				virtual ~TurbineGovernorUserDefined();
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
#endif // !defined(EA_B2368B8A_27AC_44dc_AFDF_2EA1B7B9AC67__INCLUDED_)
