///////////////////////////////////////////////////////////
//  WindMechIEC.h
//  Implementation of the Class WindMechIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDMECHIEC_H
#define WINDMECHIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4bIEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2IEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Two mass model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.2.1.
				 */
				class WindMechIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindMechIEC();
					virtual ~WindMechIEC();
					/**
					 * Drive train damping (<i>c</i><i><sub>drt</sub></i><i>)</i>. It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU cdrt;
					/**
					 * Inertia constant of generator (<i>H</i><sub>gen</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds hgen;
					/**
					 * Inertia constant of wind turbine rotor (<i>H</i><sub>WTR</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds hwtr;
					/**
					 * Drive train stiffness (<i>k</i><i><sub>drt</sub></i>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU kdrt;
					/**
					 * Wind turbine type 4B model with which this wind mechanical model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC *WindTurbineType4bIEC;
					/**
					 * Wind generator type 1 or 2 model with which this wind mechanical model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC *WindTurbineType1or2IEC;
					/**
					 * Wind turbine Type 3 model with which this wind mechanical model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC *WindGenTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDMECHIEC_H
