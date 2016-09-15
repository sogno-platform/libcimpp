///////////////////////////////////////////////////////////
//  GovSteam2.h
//  Implementation of the Class GovSteam2
//  Created on:      28-Jan-2016 12:45:12
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_DD333F2B_3583_4d7c_89D7_F569D9252504__INCLUDED_)
#define EA_DD333F2B_3583_4d7c_89D7_F569D9252504__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Simplified governor model.
				 */
				class GovSteam2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteam2();
					virtual ~GovSteam2();
					/**
					 * Frequency dead band (DBF).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU dbf;
					/**
					 * Governor gain (reciprocal of droop) (K).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::Float k;
					/**
					 * Fuel flow maximum negative error value (MN<sub>EF</sub>).  Typical Value = -1.
					 */
					IEC61970::Base::Domain::PU mnef;
					/**
					 * Fuel flow maximum positive error value (MX<sub>EF</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU mxef;
					/**
					 * Maximum fuel flow (P<sub>MAX</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum fuel flow (P<sub>MIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Governor lag time constant (T<sub>1</sub>) (>0).  Typical Value = 0.45.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Governor lead time constant (T<sub>2</sub>) (may be 0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t2;

				};

			}

		}

	}

}
#endif // !defined(EA_DD333F2B_3583_4d7c_89D7_F569D9252504__INCLUDED_)
