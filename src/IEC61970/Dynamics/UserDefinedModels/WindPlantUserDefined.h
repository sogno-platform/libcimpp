///////////////////////////////////////////////////////////
//  WindPlantUserDefined.h
//  Implementation of the Class WindPlantUserDefined
//  Created on:      28-Jan-2016 12:47:57
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_A90DAB80_129E_43d3_A722_4C909234B273__INCLUDED_)
#define EA_A90DAB80_129E_43d3_A722_4C909234B273__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/UserDefinedModels/ProprietaryParameterDynamics.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPlantDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Wind plant function block whose dynamic behaviour is described by <font
			 * color="#0f0f0f">a user-defined model.</font>
			 */
			class WindPlantUserDefined : public IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics
			{

			public:
				WindPlantUserDefined();
				virtual ~WindPlantUserDefined();
				/**
				 * Behaviour is based on proprietary model as opposed to detailed model.
				 * true = user-defined model is proprietary with behaviour mutually understood by
				 * sending and receiving applications and parameters passed as general attributes
				 * false = user-defined model is explicitly defined in terms of control blocks and
				 * their input and output signals.
				 */
				IEC61970::Base::Domain::Boolean proprietary;
				/**
				 * Parameter of this proprietary user-defined model.
				 */
				std::list<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*> ProprietaryParameterDynamics;

			};

		}

	}

}
#endif // !defined(EA_A90DAB80_129E_43d3_A722_4C909234B273__INCLUDED_)
