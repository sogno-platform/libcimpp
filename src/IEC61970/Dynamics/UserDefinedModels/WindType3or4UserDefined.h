///////////////////////////////////////////////////////////
//  WindType3or4UserDefined.h
//  Implementation of the Class WindType3or4UserDefined
//  Created on:      28-Jan-2016 12:48:02
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_1C03EC92_B917_4a7a_A050_423A3B4B7A1E__INCLUDED_)
#define EA_1C03EC92_B917_4a7a_A050_423A3B4B7A1E__INCLUDED_

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
#endif // !defined(EA_1C03EC92_B917_4a7a_A050_423A3B4B7A1E__INCLUDED_)
