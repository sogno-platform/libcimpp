///////////////////////////////////////////////////////////
//  PFVArControllerType1UserDefined.h
//  Implementation of the Class PFVArControllerType1UserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PFVARCONTROLLERTYPE1USERDEFINED_H
#define PFVARCONTROLLERTYPE1USERDEFINED_H

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
#endif // PFVARCONTROLLERTYPE1USERDEFINED_H
