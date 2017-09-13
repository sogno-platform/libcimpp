///////////////////////////////////////////////////////////
//  PFVArControllerType2UserDefined.h
//  Implementation of the Class PFVArControllerType2UserDefined
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PFVARCONTROLLERTYPE2USERDEFINED_H
#define PFVARCONTROLLERTYPE2USERDEFINED_H

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
#endif // PFVARCONTROLLERTYPE2USERDEFINED_H
