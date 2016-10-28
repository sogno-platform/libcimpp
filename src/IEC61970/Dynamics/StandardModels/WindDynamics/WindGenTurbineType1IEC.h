///////////////////////////////////////////////////////////
//  WindGenTurbineType1IEC.h
//  Implementation of the Class WindGenTurbineType1IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTURBINETYPE1IEC_H
#define WINDGENTURBINETYPE1IEC_H

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
#endif // WINDGENTURBINETYPE1IEC_H
