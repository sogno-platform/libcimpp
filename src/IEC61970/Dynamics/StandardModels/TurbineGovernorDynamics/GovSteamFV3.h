///////////////////////////////////////////////////////////
//  GovSteamFV3.h
//  Implementation of the Class GovSteamFV3
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVSTEAMFV3_H
#define GOVSTEAMFV3_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Simplified GovSteamIEEE1 Steam turbine governor model with Prmax limit and fast
				 * valving.
				 */
				class GovSteamFV3 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteamFV3();
					virtual ~GovSteamFV3();
					/**
					 * Governor gain, (reciprocal of droop) (K).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Fraction of turbine power developed after first boiler pass (K1).  Typical
					 * Value = 0.2.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Fraction of turbine power developed after second boiler pass (K2).  Typical
					 * Value = 0.2.
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Fraction of hp turbine power developed after crossover or third boiler pass
					 * (K3). Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Maximum valve opening, PU of MWbase (Pmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum valve opening, PU of MWbase (Pmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Max. pressure in reheater (Prmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU prmax;
					/**
					 * Governor lead time constant (T1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Governor lag time constant (T2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Valve positioner time constant (T3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Inlet piping/steam bowl time constant (T4).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Time constant of second boiler pass (i.e. reheater) (T5).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Time constant of crossover or third boiler pass (T6).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time to close intercept valve (IV) (Ta).  Typical Value = 0.97.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Time until IV starts to reopen (Tb).  Typical Value = 0.98.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Time until IV is fully open (Tc).  Typical Value = 0.99.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Maximum valve closing velocity (Uc).  Unit = PU/sec.  Typical Value = -1.
					 */
					IEC61970::Base::Domain::Float uc;
					/**
					 * Maximum valve opening velocity (Uo).  Unit = PU/sec.  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float uo;

				};

			}

		}

	}

}
#endif // GOVSTEAMFV3_H
