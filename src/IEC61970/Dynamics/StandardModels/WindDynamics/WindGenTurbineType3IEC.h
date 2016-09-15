///////////////////////////////////////////////////////////
//  WindGenTurbineType3IEC.h
//  Implementation of the Class WindGenTurbineType3IEC
//  Created on:      28-Jan-2016 12:47:52
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_78C0D721_359B_4269_875D_BAD9695DB353__INCLUDED_)
#define EA_78C0D721_359B_4269_875D_BAD9695DB353__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Generator model for wind turbines of IEC type 3A and 3B.
				 */
				class WindGenTurbineType3IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC
				{

				public:
					WindGenTurbineType3IEC();
					virtual ~WindGenTurbineType3IEC();
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

				};

			}

		}

	}

}
#endif // !defined(EA_78C0D721_359B_4269_875D_BAD9695DB353__INCLUDED_)
