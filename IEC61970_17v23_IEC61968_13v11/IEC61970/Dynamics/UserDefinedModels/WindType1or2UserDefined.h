///////////////////////////////////////////////////////////
//  WindType1or2UserDefined.h
//  Implementation of the Class WindType1or2UserDefined
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTYPE1OR2USERDEFINED_H
#define WINDTYPE1OR2USERDEFINED_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/UserDefinedModels/ProprietaryParameterDynamics.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Wind Type 1 or Type 2 function block whose dynamic behaviour is described by
			 * <font color="#0f0f0f">a user-defined model.</font>
			 */
			class WindType1or2UserDefined : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics
			{

			public:
				WindType1or2UserDefined();
				virtual ~WindType1or2UserDefined();
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
#endif // WINDTYPE1OR2USERDEFINED_H
