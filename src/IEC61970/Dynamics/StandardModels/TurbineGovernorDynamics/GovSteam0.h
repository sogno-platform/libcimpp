///////////////////////////////////////////////////////////
//  GovSteam0.h
//  Implementation of the Class GovSteam0
//  Created on:      28-Jan-2016 12:45:11
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_2AC38B6F_B096_419e_BF40_159ADB958C31__INCLUDED_)
#define EA_2AC38B6F_B096_419e_BF40_159ADB958C31__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
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
				 * A simplified steam turbine governor model.
				 */
				class GovSteam0 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteam0();
					virtual ~GovSteam0();
					/**
					 * Turbine damping coefficient (Dt).  Unit = delta P / delta speed. Typical Value
					 * = 0.
					 */
					IEC61970::Base::Domain::PU dt;
					/**
					 * Base for power values (MWbase)  (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Permanent droop (R).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Steam bowl time constant (T1).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Numerator time constant of T2/T3 block (T2).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Reheater time constant (T3).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Maximum valve position, PU of mwcap (Vmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum valve position, PU of mwcap (Vmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vmin;

				};

			}

		}

	}

}
#endif // !defined(EA_2AC38B6F_B096_419e_BF40_159ADB958C31__INCLUDED_)
