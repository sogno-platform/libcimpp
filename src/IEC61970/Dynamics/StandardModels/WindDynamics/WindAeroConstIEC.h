///////////////////////////////////////////////////////////
//  WindAeroConstIEC.h
//  Implementation of the Class WindAeroConstIEC
//  Created on:      28-Jan-2016 12:47:45
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_F3BD5160_A395_4f08_B1B0_8D6E5AEE8789__INCLUDED_)
#define EA_F3BD5160_A395_4f08_B1B0_8D6E5AEE8789__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType1IEC.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * The constant aerodynamic torque model assumes that the aerodynamic torque is
				 * constant.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.1.1.
				 */
				class WindAeroConstIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindAeroConstIEC();
					virtual ~WindAeroConstIEC();
					/**
					 * Wind turbine type 1 model with which this wind aerodynamic model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1IEC *WindGenTurbineType1IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_F3BD5160_A395_4f08_B1B0_8D6E5AEE8789__INCLUDED_)
