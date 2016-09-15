///////////////////////////////////////////////////////////
//  GovGAST4.h
//  Implementation of the Class GovGAST4
//  Created on:      28-Jan-2016 12:45:02
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_79A27B12_B7B9_4b40_8DF0_E279F1D6DF7E__INCLUDED_)
#define EA_79A27B12_B7B9_4b40_8DF0_E279F1D6DF7E__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Generic turbogas.
				 */
				class GovGAST4 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGAST4();
					virtual ~GovGAST4();
					/**
					 * Droop (bp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU bp;
					/**
					 * Compressor gain (K<sub>tm</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ktm;
					/**
					 * Fuel flow maximum negative error value (MN<sub>EF</sub>).  Typical Value = -0.
					 * 05.
					 */
					IEC61970::Base::Domain::PU mnef;
					/**
					 * Fuel flow maximum positive error value (MX<sub>EF</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU mxef;
					/**
					 * Minimum valve opening (RYMN).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU rymn;
					/**
					 * Maximum valve opening (RYMX).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU rymx;
					/**
					 * Maximum gate opening velocity (T<sub>A</sub>).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Maximum gate closing velocity (T<sub>c</sub>).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Fuel control time constant (T<sub>cm</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tcm;
					/**
					 * Compressor discharge volume time constant (T<sub>m</sub>).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds tm;
					/**
					 * Time constant of fuel valve positioner (T<sub>y</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tv;

				};

			}

		}

	}

}
#endif // !defined(EA_79A27B12_B7B9_4b40_8DF0_E279F1D6DF7E__INCLUDED_)
