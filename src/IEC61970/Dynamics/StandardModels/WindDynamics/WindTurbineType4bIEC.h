///////////////////////////////////////////////////////////
//  WindTurbineType4bIEC.h
//  Implementation of the Class WindTurbineType4bIEC
//  Created on:      28-Jan-2016 12:48:01
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_6516D11F_26F4_4bda_ABC6_499B23A69557__INCLUDED_)
#define EA_6516D11F_26F4_4bda_ABC6_499B23A69557__INCLUDED_

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
				 * Reference: IEC Standard 61400-27-1, section 6.5.5.3.
				 */
				class WindTurbineType4bIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC
				{

				public:
					WindTurbineType4bIEC();
					virtual ~WindTurbineType4bIEC();

				};

			}

		}

	}

}
#endif // !defined(EA_6516D11F_26F4_4bda_ABC6_499B23A69557__INCLUDED_)
