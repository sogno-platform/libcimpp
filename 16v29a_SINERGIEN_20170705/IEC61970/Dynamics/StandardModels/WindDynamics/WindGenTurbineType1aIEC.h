///////////////////////////////////////////////////////////
//  WindGenTurbineType1aIEC.h
//  Implementation of the Class WindGenTurbineType1aIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTURBINETYPE1AIEC_H
#define WINDGENTURBINETYPE1AIEC_H

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
				 * Wind turbine IEC Type 1A.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 5.5.2.2.
				 */
				class WindGenTurbineType1aIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC
				{

				public:
					WindGenTurbineType1aIEC();
					virtual ~WindGenTurbineType1aIEC();

				};

			}

		}

	}

}
#endif // WINDGENTURBINETYPE1AIEC_H
