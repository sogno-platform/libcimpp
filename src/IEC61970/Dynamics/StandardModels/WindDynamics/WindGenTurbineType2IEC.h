///////////////////////////////////////////////////////////
//  WindGenTurbineType2IEC.h
//  Implementation of the Class WindGenTurbineType2IEC
//  Created on:      28-Jan-2016 12:47:51
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_71EE546B_4401_407c_B6D4_6BE58786F9EA__INCLUDED_)
#define EA_71EE546B_4401_407c_B6D4_6BE58786F9EA__INCLUDED_

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
#endif // !defined(EA_71EE546B_4401_407c_B6D4_6BE58786F9EA__INCLUDED_)
