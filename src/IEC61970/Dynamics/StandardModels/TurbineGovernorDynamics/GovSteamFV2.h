///////////////////////////////////////////////////////////
//  GovSteamFV2.h
//  Implementation of the Class GovSteamFV2
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVSTEAMFV2_H
#define GOVSTEAMFV2_H

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
				 * Steam turbine governor with reheat time constants and modeling of the effects
				 * of fast valve closing to reduce mechanical power.
				 */
				class GovSteamFV2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteamFV2();
					virtual ~GovSteamFV2();
					/**
					 * (Dt).
					 */
					IEC61970::Base::Domain::PU dt;
					/**
					 * Fraction of the turbine power developed by turbine sections not involved in
					 * fast valving (K).
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Alternate Base used instead of Machine base in equipment model if necessary
					 * (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * (R).
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Governor time constant (T1).
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Reheater time constant (T3).
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Time after initial time for valve to close (Ta).
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Time after initial time for valve to begin opening (Tb).
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Time after initial time for valve to become fully open (Tc).
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Initial time to begin fast valving (Ti).
					 */
					IEC61970::Base::Domain::Seconds ti;
					/**
					 * Time constant with which power falls off after intercept valve closure (Tt).
					 */
					IEC61970::Base::Domain::Seconds tt;
					/**
					 * (Vmax).
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * (Vmin).
					 */
					IEC61970::Base::Domain::PU vmin;

				};

			}

		}

	}

}
#endif // GOVSTEAMFV2_H
