///////////////////////////////////////////////////////////
//  WindTurbineType1or2IEC.h
//  Implementation of the Class WindTurbineType1or2IEC
//  Created on:      28-Jan-2016 12:47:59
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_C2FC3B49_7832_4dfc_B822_56C62DD5FA4E__INCLUDED_)
#define EA_C2FC3B49_7832_4dfc_B822_56C62DD5FA4E__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Generator model for wind turbine of IEC Type 1 or Type 2 is a standard
				 * asynchronous generator model.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 6.6.3.1.
				 */
				class WindTurbineType1or2IEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics
				{

				public:
					WindTurbineType1or2IEC();
					virtual ~WindTurbineType1or2IEC();

				};

			}

		}

	}

}
#endif // !defined(EA_C2FC3B49_7832_4dfc_B822_56C62DD5FA4E__INCLUDED_)
