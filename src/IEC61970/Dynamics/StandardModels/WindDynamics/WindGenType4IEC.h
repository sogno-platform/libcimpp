///////////////////////////////////////////////////////////
//  WindGenType4IEC.h
//  Implementation of the Class WindGenType4IEC
//  Created on:      28-Jan-2016 12:47:53
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_81B1B395_3AF5_43c4_A7F8_FEF2DA1E95F6__INCLUDED_)
#define EA_81B1B395_3AF5_43c4_A7F8_FEF2DA1E95F6__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
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
				 * IEC Type 4 generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.3.4.
				 */
				class WindGenType4IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC
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

				};

			}

		}

	}

}
#endif // !defined(EA_81B1B395_3AF5_43c4_A7F8_FEF2DA1E95F6__INCLUDED_)
