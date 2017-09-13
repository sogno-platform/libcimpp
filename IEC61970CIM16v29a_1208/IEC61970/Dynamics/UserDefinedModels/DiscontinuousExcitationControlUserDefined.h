///////////////////////////////////////////////////////////
//  DiscontinuousExcitationControlUserDefined.h
//  Implementation of the Class DiscontinuousExcitationControlUserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DISCONTINUOUSEXCITATIONCONTROLUSERDEFINED_H
#define DISCONTINUOUSEXCITATIONCONTROLUSERDEFINED_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/DiscontinuousExcitationControlDynamics/DiscontinuousExcitationControlDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Discontinuous excitation control function block whose dynamic behaviour is
			 * described by <font color="#0f0f0f">a user-defined model.</font>
			 */
			class DiscontinuousExcitationControlUserDefined : public IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics
			{

			public:
				DiscontinuousExcitationControlUserDefined();
				virtual ~DiscontinuousExcitationControlUserDefined();
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
#endif // DISCONTINUOUSEXCITATIONCONTROLUSERDEFINED_H
