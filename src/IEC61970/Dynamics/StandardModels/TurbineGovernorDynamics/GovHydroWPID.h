///////////////////////////////////////////////////////////
//  GovHydroWPID.h
//  Implementation of the Class GovHydroWPID
//  Created on:      28-Jan-2016 12:45:10
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_C6D34D77_C17F_4535_8A77_C59AE64225F9__INCLUDED_)
#define EA_C6D34D77_C17F_4535_8A77_C59AE64225F9__INCLUDED_

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
				 * Woodward PID Hydro Governor.
				 */
				class GovHydroWPID : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroWPID();
					virtual ~GovHydroWPID();
					/**
					 * Turbine damping factor (D).  Unit = delta P / delta speed.
					 */
					IEC61970::Base::Domain::PU d;
					/**
					 * Gate opening Limit Maximum (Gatmax).
					 */
					IEC61970::Base::Domain::PU gatmax;
					/**
					 * Gate opening Limit Minimum (Gatmin).
					 */
					IEC61970::Base::Domain::PU gatmin;
					/**
					 * Gate position 1 (Gv1).
					 */
					IEC61970::Base::Domain::PU gv1;
					/**
					 * Gate position 2 (Gv2). 
					 */
					IEC61970::Base::Domain::PU gv2;
					/**
					 * Gate position 3 (Gv3).
					 */
					IEC61970::Base::Domain::PU gv3;
					/**
					 * Derivative gain (Kd).  Typical Value = 1.11.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Reset gain (Ki).  Typical Value = 0.36.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Proportional gain (Kp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Base for power values  (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Output at Gv1 PU of MWbase (Pgv1).
					 */
					IEC61970::Base::Domain::PU pgv1;
					/**
					 * Output at Gv2 PU of MWbase (Pgv2).
					 */
					IEC61970::Base::Domain::PU pgv2;
					/**
					 * Output at Gv3 PU of MWbase (Pgv3). 
					 */
					IEC61970::Base::Domain::PU pgv3;
					/**
					 * Maximum Power Output (Pmax).
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum Power Output (Pmin).
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Permanent drop (Reg).
					 */
					IEC61970::Base::Domain::PU reg;
					/**
					 * Controller time constant (Ta) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Gate servo time constant (Tb) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Speed detector time constant (Treg).
					 */
					IEC61970::Base::Domain::Seconds treg;
					/**
					 * Water inertia time constant (Tw) (>0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU velmax;
					/**
					 * Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU velmin;

				};

			}

		}

	}

}
#endif // !defined(EA_C6D34D77_C17F_4535_8A77_C59AE64225F9__INCLUDED_)
