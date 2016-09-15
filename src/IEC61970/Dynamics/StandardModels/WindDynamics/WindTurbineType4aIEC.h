///////////////////////////////////////////////////////////
//  WindTurbineType4aIEC.h
//  Implementation of the Class WindTurbineType4aIEC
//  Created on:      28-Jan-2016 12:48:00
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_8396A6A9_4348_491d_8669_C129A85242C7__INCLUDED_)
#define EA_8396A6A9_4348_491d_8669_C129A85242C7__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenType4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Wind turbine IEC Type 4A.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 6.5.5.2.
				 */
				class WindTurbineType4aIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC
				{

				public:
					WindTurbineType4aIEC();
					virtual ~WindTurbineType4aIEC();

				};

			}

		}

	}

}
#endif // !defined(EA_8396A6A9_4348_491d_8669_C129A85242C7__INCLUDED_)
