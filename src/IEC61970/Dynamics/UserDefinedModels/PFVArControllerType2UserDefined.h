///////////////////////////////////////////////////////////
//  PFVArControllerType2UserDefined.h
//  Implementation of the Class PFVArControllerType2UserDefined
//  Created on:      28-Jan-2016 12:46:00
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_B4FC347C_8626_4a6e_98FC_2ECD2C72F060__INCLUDED_)
#define EA_B4FC347C_8626_4a6e_98FC_2ECD2C72F060__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/PFVArControllerType2Dynamics/PFVArControllerType2Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Power Factor or VAr controller Type II function block whose dynamic behaviour
			 * is described by <font color="#0f0f0f">a user-defined model.</font>
			 */
			class PFVArControllerType2UserDefined : public IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics
			{

			public:
				PFVArControllerType2UserDefined();
				virtual ~PFVArControllerType2UserDefined();
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
#endif // !defined(EA_B4FC347C_8626_4a6e_98FC_2ECD2C72F060__INCLUDED_)
