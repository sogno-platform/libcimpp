///////////////////////////////////////////////////////////
//  WindType3or4UserDefined.h
//  Implementation of the Class WindType3or4UserDefined
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDTYPE3OR4USERDEFINED_H
#define WINDTYPE3OR4USERDEFINED_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/UserDefinedModels/ProprietaryParameterDynamics.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Wind Type 3 or Type 4 function block whose dynamic behaviour is described by
			 * <font color="#0f0f0f">a user-defined model.</font>
			 */
			class WindType3or4UserDefined : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics
			{

			public:
				WindType3or4UserDefined();
				virtual ~WindType3or4UserDefined();
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
#endif // WINDTYPE3OR4USERDEFINED_H
