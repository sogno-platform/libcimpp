///////////////////////////////////////////////////////////
//  WindTurbineType3or4IEC.h
//  Implementation of the Class WindTurbineType3or4IEC
//  Created on:      28-Jan-2016 12:48:00
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_C63C159D_BB87_4790_9E57_4524A58A7BFC__INCLUDED_)
#define EA_C63C159D_BB87_4790_9E57_4524A58A7BFC__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Parent class supporting relationships to IEC wind turbines Type 3 and 4 and
				 * wind plant including their control models.
				 */
				class WindTurbineType3or4IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics
				{

				public:
					WindTurbineType3or4IEC();
					virtual ~WindTurbineType3or4IEC();

				};

			}

		}

	}

}
#endif // !defined(EA_C63C159D_BB87_4790_9E57_4524A58A7BFC__INCLUDED_)
