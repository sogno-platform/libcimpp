///////////////////////////////////////////////////////////
//  VoltageAdjusterUserDefined.h
//  Implementation of the Class VoltageAdjusterUserDefined
//  Created on:      28-Jan-2016 12:47:35
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_10E3EA7E_C6CD_4bdf_B169_99096CC33DCC__INCLUDED_)
#define EA_10E3EA7E_C6CD_4bdf_B169_99096CC33DCC__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/VoltageAdjusterDynamics/VoltageAdjusterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * <font color="#0f0f0f">Voltage adjuster</font> function block whose dynamic
			 * behaviour is described by <font color="#0f0f0f">a user-defined model.</font>
			 */
			class VoltageAdjusterUserDefined : public IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics
			{

			public:
				VoltageAdjusterUserDefined();
				virtual ~VoltageAdjusterUserDefined();
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
#endif // !defined(EA_10E3EA7E_C6CD_4bdf_B169_99096CC33DCC__INCLUDED_)
