///////////////////////////////////////////////////////////
//  WindGenType3aIEC.h
//  Implementation of the Class WindGenType3aIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDGENTYPE3AIEC_H
#define WINDGENTYPE3AIEC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenType3IEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * IEC Type 3A generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.3.2.
				 */
				class WindGenType3aIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3IEC
				{

				public:
					WindGenType3aIEC();
					virtual ~WindGenType3aIEC();
					/**
					 * Current PI controller proportional gain (K<sub>Pc</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Float kpc;
					/**
					 * Current PI controller integration time constant (T<sub>Ic</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tic;
					/**
					 * Wind turbine type 4 model with which this wind generator type 3A model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4IEC *WindTurbineType4IEC;

				};

			}

		}

	}

}
#endif // WINDGENTYPE3AIEC_H
