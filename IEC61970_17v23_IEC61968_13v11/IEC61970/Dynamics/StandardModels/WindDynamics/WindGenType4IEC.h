///////////////////////////////////////////////////////////
//  WindGenType4IEC.h
//  Implementation of the Class WindGenType4IEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDGENTYPE4IEC_H
#define WINDGENTYPE4IEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4bIEC.h"
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
				 * IEC Type 4 generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.3.4.
				 */
				class WindGenType4IEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindGenType4IEC();
					virtual ~WindGenType4IEC();
					/**
					 * Maximum active current ramp rate (di<sub>pmax</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU dipmax;
					/**
					 * Maximum reactive current ramp rate (di<sub>qmax</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU diqmax;
					/**
					 * Minimum reactive current ramp rate (d<i>i</i><sub>qmin</sub>). It is case
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU diqmin;
					/**
					 * Time constant (T<sub>g</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Wind turbine type 4B model with which this wind generator type 4 model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC *WindTurbineType4bIEC;
					/**
					 * Wind turbine type 4A model with which this wind generator type 4 model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC *WindTurbineType4aIEC;

				};

			}

		}

	}

}
#endif // WINDGENTYPE4IEC_H
