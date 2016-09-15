///////////////////////////////////////////////////////////
//  GovHydroR.h
//  Implementation of the Class GovHydroR
//  Created on:      28-Jan-2016 12:45:09
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_0572708E_800F_4727_BDD5_F8C9303F8595__INCLUDED_)
#define EA_0572708E_800F_4727_BDD5_F8C9303F8595__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Fourth order lead-lag governor and hydro turbine. 
				 */
				class GovHydroR : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroR();
					virtual ~GovHydroR();
					/**
					 * Turbine gain (At).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU at;
					/**
					 * Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::ActivePower db2;
					/**
					 * Turbine damping factor (Dturb).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU dturb;
					/**
					 * Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency eps;
					/**
					 * Maximum governor output (Gmax).  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU gmax;
					/**
					 * Minimum governor output (Gmin).  Typical Value = -0.05.
					 */
					IEC61970::Base::Domain::PU gmin;
					/**
					 * Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv1;
					/**
					 * Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv2;
					/**
					 * Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv3;
					/**
					 * Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv4;
					/**
					 * Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv5;
					/**
					 * Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv6;
					/**
					 * Turbine nominal head (H0).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU h0;
					/**
					 * Input signal switch (Flag).
					 * true = Pe input is used
					 * false = feedback is received from CV.
					 * Flag is normally dependent on Tt.  If Tf is zero, Flag is set to false. If Tf
					 * is not zero, Flag is set to true.  Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean inputSignal;
					/**
					 * Gate servo gain (Kg).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Integral gain (Ki).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv1;
					/**
					 * Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv2;
					/**
					 * Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv3;
					/**
					 * Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv4;
					/**
					 * Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv5;
					/**
					 * Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv6;
					/**
					 * Maximum gate opening, PU of MWbase (Pmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum gate opening, PU of MWbase (Pmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * No-load turbine flow at nominal head (Qnl).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::PU qnl;
					/**
					 * Steady-state droop (R).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Lead time constant 1 (T1).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lag time constant 1 (T2).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead time constant 2 (T3).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lag time constant 2 (T4).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Lead time constant 3 (T5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Lag time constant 3 (T6).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Lead time constant 4 (T7).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Lag time constant 4 (T8).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t8;
					/**
					 * Input filter time constant (Td).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Gate servo time constant (Tp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Power feedback time constant (Tt).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tt;
					/**
					 * Water inertia time constant (Tw).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.2.
					 */
					IEC61970::Base::Domain::Float velcl;
					/**
					 * Maximum gate opening velocity (Velop).  Unit = PU/sec.  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Float velop;

				};

			}

		}

	}

}
#endif // !defined(EA_0572708E_800F_4727_BDD5_F8C9303F8595__INCLUDED_)
