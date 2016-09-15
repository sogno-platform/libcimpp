///////////////////////////////////////////////////////////
//  WindGenTurbineType1IEC.h
//  Implementation of the Class WindGenTurbineType1IEC
//  Created on:      28-Jan-2016 12:47:50
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_F73DE5B7_5654_43a8_A5D6_31EFF067BD36__INCLUDED_)
#define EA_F73DE5B7_5654_43a8_A5D6_31EFF067BD36__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Wind turbine IEC Type 1.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 6.5.2.
				 */
				class WindGenTurbineType1IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC
				{

				public:
					WindGenTurbineType1IEC();
					virtual ~WindGenTurbineType1IEC();

				};

			}

		}

	}

}
#endif // !defined(EA_F73DE5B7_5654_43a8_A5D6_31EFF067BD36__INCLUDED_)
