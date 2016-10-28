///////////////////////////////////////////////////////////
//  WindPlantUserDefined.h
//  Implementation of the Class WindPlantUserDefined
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPLANTUSERDEFINED_H
#define WINDPLANTUSERDEFINED_H

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
#endif // WINDPLANTUSERDEFINED_H
