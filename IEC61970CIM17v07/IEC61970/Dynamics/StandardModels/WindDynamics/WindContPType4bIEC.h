///////////////////////////////////////////////////////////
//  WindContPType4bIEC.h
//  Implementation of the Class WindContPType4bIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTPTYPE4BIEC_H
#define WINDCONTPTYPE4BIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4bIEC.h"
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
				 * P control model Type 4B.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.5.
				 */
				class WindContPType4bIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContPType4bIEC();
					virtual ~WindContPType4bIEC();
					/**
					 * Maximum wind turbine power ramp rate (<i>dp</i><sub>max</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpmax;
					/**
					 * Time constant in aerodynamic power response (<i>T</i><sub>paero</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpaero;
					/**
					 * Time constant in power order lag (<i>T</i><sub>pord</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpord;
					/**
					 * Voltage measurement filter time constant (<i>T</i><sub>ufilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufilt;
					/**
					 * Wind turbine type 4B model with which this wind control P type 4B model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC *WindTurbineType4bIEC;

				};

			}

		}

	}

}
#endif // WINDCONTPTYPE4BIEC_H
