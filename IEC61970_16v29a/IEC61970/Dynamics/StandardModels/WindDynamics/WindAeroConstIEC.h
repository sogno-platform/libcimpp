///////////////////////////////////////////////////////////
//  WindAeroConstIEC.h
//  Implementation of the Class WindAeroConstIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDAEROCONSTIEC_H
#define WINDAEROCONSTIEC_H

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType1aIEC.h"

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
				 * Reference: IEC Standard 61400-27-1 Section 5.6.1.1.
				 */
				class WindAeroConstIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindAeroConstIEC();
					virtual ~WindAeroConstIEC();
					/**
					 * Wind turbine type 1A model with which this wind aerodynamic model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1aIEC *WindGenTurbineType1aIEC;

				};

			}

		}

	}

}
#endif // WINDAEROCONSTIEC_H
