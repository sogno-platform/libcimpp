///////////////////////////////////////////////////////////
//  WindGenType3IEC.h
//  Implementation of the Class WindGenType3IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTYPE3IEC_H
#define WINDGENTYPE3IEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Parent class supporting relationships to IEC wind turbines Type 3 generator
				 * models of IEC type 3A and 3B.
				 */
				class WindGenType3IEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindGenType3IEC();
					virtual ~WindGenType3IEC();
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
					 * Electromagnetic transient reactance (x<sub>S</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU xs;
					/**
					 * Wind turbine type 3 model with which this wind generator type 3 is associated. 
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC *WindTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDGENTYPE3IEC_H
