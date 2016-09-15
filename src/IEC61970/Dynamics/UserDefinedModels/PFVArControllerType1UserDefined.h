///////////////////////////////////////////////////////////
//  PFVArControllerType1UserDefined.h
//  Implementation of the Class PFVArControllerType1UserDefined
//  Created on:      28-Jan-2016 12:45:59
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_1E17BC74_871D_4758_A06E_50FE778E2EE2__INCLUDED_)
#define EA_1E17BC74_871D_4758_A06E_50FE778E2EE2__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/PFVArControllerType1Dynamics/PFVArControllerType1Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Power Factor or VAr controller Type I function block whose dynamic behaviour is
			 * described by <font color="#0f0f0f">a user-defined model.</font>
			 */
			class PFVArControllerType1UserDefined : public IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics
			{

			public:
				PFVArControllerType1UserDefined();
				virtual ~PFVArControllerType1UserDefined();
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
#endif // !defined(EA_1E17BC74_871D_4758_A06E_50FE778E2EE2__INCLUDED_)
