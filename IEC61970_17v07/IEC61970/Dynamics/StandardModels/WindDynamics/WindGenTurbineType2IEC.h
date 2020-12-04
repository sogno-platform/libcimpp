///////////////////////////////////////////////////////////
//  WindGenTurbineType2IEC.h
//  Implementation of the Class WindGenTurbineType2IEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTURBINETYPE2IEC_H
#define WINDGENTURBINETYPE2IEC_H

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
				 * Wind turbine IEC Type 2.
				 * 
				 * Reference: IEC Standard 61400-27-1, section 6.5.3.
				 */
				class WindGenTurbineType2IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC
				{

				public:
					WindGenTurbineType2IEC();
					virtual ~WindGenTurbineType2IEC();

				};

			}

		}

	}

}
#endif // WINDGENTURBINETYPE2IEC_H
