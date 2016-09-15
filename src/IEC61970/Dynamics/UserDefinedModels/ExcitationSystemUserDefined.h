///////////////////////////////////////////////////////////
//  ExcitationSystemUserDefined.h
//  Implementation of the Class ExcitationSystemUserDefined
//  Created on:      28-Jan-2016 12:44:40
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_591DC669_3F3D_4560_98D0_855DDDDFB57F__INCLUDED_)
#define EA_591DC669_3F3D_4560_98D0_855DDDDFB57F__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Excitation system function block whose dynamic behaviour is described by <font
			 * color="#0f0f0f">a user-defined model.</font>
			 */
			class ExcitationSystemUserDefined : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
			{

			public:
				ExcitationSystemUserDefined();
				virtual ~ExcitationSystemUserDefined();
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
#endif // !defined(EA_591DC669_3F3D_4560_98D0_855DDDDFB57F__INCLUDED_)
