///////////////////////////////////////////////////////////
//  GovHydroPID2.h
//  Implementation of the Class GovHydroPID2
//  Created on:      28-Jan-2016 12:45:09
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_032A4142_16ED_40c2_B98A_05B270695F49__INCLUDED_)
#define EA_032A4142_16ED_40c2_B98A_05B270695F49__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Hydro turbine and governor. Represents plants with straight forward penstock
				 * configurations and "three term" electro-hydraulic governors (i.e. Woodard
				 * electronic).
				 */
				class GovHydroPID2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroPID2();
					virtual ~GovHydroPID2();
					/**
					 * Factor multiplying Tw (Atw).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU atw;
					/**
					 * Turbine damping factor (D).  Unit = delta P / delta speed.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU d;
					/**
					 * Feedback signal type flag (Flag).
					 * true = use gate position feedback signal
					 * false = use Pe.
					 */
					IEC61970::Base::Domain::Boolean feedbackSignal;
					/**
					 * Gate opening at speed no load (G0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU g0;
					/**
					 * Intermediate gate opening (G1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU g1;
					/**
					 * Intermediate gate opening (G2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU g2;
					/**
					 * Maximum gate opening (Gmax).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gmax;
					/**
					 * Minimum gate opening (Gmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gmin;
					/**
					 * Derivative gain (Kd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Reset gain (Ki).  Unit = PU/ sec.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float ki;
					/**
					 * Proportional gain (Kp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Power at gate opening G1 (P1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU p1;
					/**
					 * Power at gate opening G2 (P2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU p2;
					/**
					 * Power at full opened gate (P3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU p3;
					/**
					 * Permanent drop (Rperm).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU rperm;
					/**
					 * Controller time constant (Ta) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Gate servo time constant (Tb) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Speed detector time constant (Treg).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds treg;
					/**
					 * Water inertia time constant (Tw) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float velmax;
					/**
					 * Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float velmin;

				};

			}

		}

	}

}
#endif // !defined(EA_032A4142_16ED_40c2_B98A_05B270695F49__INCLUDED_)
