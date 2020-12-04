///////////////////////////////////////////////////////////
//  WindContPType4aIEC.h
//  Implementation of the Class WindContPType4aIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTPTYPE4AIEC_H
#define WINDCONTPTYPE4AIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4aIEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * P control model Type 4A.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.5.
				 */
				class WindContPType4aIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContPType4aIEC();
					virtual ~WindContPType4aIEC();
					/**
					 * Maximum wind turbine power ramp rate (<i>dp</i><sub>maxp4A</sub>). It is
					 * project dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpmaxp4a;
					/**
					 * Time constant in power order lag (<i>T</i><sub>pordp4A</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpordp4a;
					/**
					 * Voltage measurement filter time constant (<i>T</i><sub>ufiltp4A</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufiltp4a;
					/**
					 * Wind turbine type 4A model with which this wind control P type 4A model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC *WindTurbineType4aIEC;

				};

			}

		}

	}

}
#endif // WINDCONTPTYPE4AIEC_H
