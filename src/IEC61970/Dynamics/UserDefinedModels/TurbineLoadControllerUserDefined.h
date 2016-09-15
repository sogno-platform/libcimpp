///////////////////////////////////////////////////////////
//  TurbineLoadControllerUserDefined.h
//  Implementation of the Class TurbineLoadControllerUserDefined
//  Created on:      28-Jan-2016 12:47:27
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_F4F8CC12_1B53_408f_A7F1_806A66EC01BC__INCLUDED_)
#define EA_F4F8CC12_1B53_408f_A7F1_806A66EC01BC__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/TurbineLoadControllerDynamics/TurbineLoadControllerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Turbine load controller function block whose dynamic behaviour is described by
			 * <font color="#0f0f0f">a user-defined model.</font>
			 */
			class TurbineLoadControllerUserDefined : public IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics
			{

			public:
				TurbineLoadControllerUserDefined();
				virtual ~TurbineLoadControllerUserDefined();
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
#endif // !defined(EA_F4F8CC12_1B53_408f_A7F1_806A66EC01BC__INCLUDED_)
