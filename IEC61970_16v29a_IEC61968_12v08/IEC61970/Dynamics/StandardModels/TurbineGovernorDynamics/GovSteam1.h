///////////////////////////////////////////////////////////
//  GovSteam1.h
//  Implementation of the Class GovSteam1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVSTEAM1_H
#define GOVSTEAM1_H

#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Steam turbine governor model, based on the GovSteamIEEE1 model  (with optional
				 * deadband and nonlinear valve gain added). 
				 */
				class GovSteam1 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteam1();
					virtual ~GovSteam1();
					/**
					 * Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Unintentional deadband (db2).  Unit = MW.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::ActivePower db2;
					/**
					 * Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency eps;
					/**
					 * Nonlinear gain valve position point 1 (GV1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv1;
					/**
					 * Nonlinear gain valve position point 2 (GV2).  Typical Value = 0.4.
					 */
					IEC61970::Base::Domain::PU gv2;
					/**
					 * Nonlinear gain valve position point 3 (GV3).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU gv3;
					/**
					 * Nonlinear gain valve position point 4 (GV4).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::PU gv4;
					/**
					 * Nonlinear gain valve position point 5 (GV5).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU gv5;
					/**
					 * Nonlinear gain valve position point 6 (GV6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv6;
					/**
					 * Governor gain (reciprocal of droop) (K) (>0).  Typical Value = 25.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Fraction of HP shaft power after first boiler pass (K1).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Float k1;
					/**
					 * Fraction of LP shaft power after first boiler pass (K2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float k2;
					/**
					 * Fraction of HP shaft power after second boiler pass (K3).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float k3;
					/**
					 * Fraction of LP shaft power after second boiler pass (K4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float k4;
					/**
					 * Fraction of HP shaft power after third boiler pass (K5).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Float k5;
					/**
					 * Fraction of LP shaft power after third boiler pass (K6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float k6;
					/**
					 * Fraction of HP shaft power after fourth boiler pass (K7).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float k7;
					/**
					 * Fraction of LP shaft power after fourth boiler pass (K8).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float k8;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Nonlinear gain power value point 1 (Pgv1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv1;
					/**
					 * Nonlinear gain power value point 2 (Pgv2).  Typical Value = 0.75.
					 */
					IEC61970::Base::Domain::PU pgv2;
					/**
					 * Nonlinear gain power value point 3 (Pgv3).  Typical Value = 0.91.
					 */
					IEC61970::Base::Domain::PU pgv3;
					/**
					 * Nonlinear gain power value point 4 (Pgv4).  Typical Value = 0.98.
					 */
					IEC61970::Base::Domain::PU pgv4;
					/**
					 * Nonlinear gain power value point 5 (Pgv5).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pgv5;
					/**
					 * Nonlinear gain power value point 6 (Pgv6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv6;
					/**
					 * Maximum valve opening (Pmax) (> Pmin).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum valve opening (Pmin) (>=0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Intentional deadband indicator.
					 * true = intentional deadband is applied
					 * false = intentional deadband is not applied.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean sdb1;
					/**
					 * Unintentional deadband location.
					 * true = intentional deadband is applied before point "A"
					 * false = intentional deadband is applied after point "A".
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean sdb2;
					/**
					 * Governor lag time constant (T1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Governor lead time constant (T2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Valve positioner time constant (T3<i>) </i>(>0).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Inlet piping/steam bowl time constant (T4).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Time constant of second boiler pass (T5).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Time constant of third boiler pass (T6).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time constant of fourth boiler pass (T7).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Maximum valve closing velocity (Uc) (<0).  Unit = PU/sec.  Typical Value = -10.
					 */
					IEC61970::Base::Domain::Float uc;
					/**
					 * Maximum valve opening velocity (Uo) (>0).  Unit = PU/sec.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float uo;
					/**
					 * Nonlinear valve characteristic.
					 * true = nonlinear valve characteristic is used
					 * false = nonlinear valve characteristic is not used.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean valve;

				};

			}

		}

	}

}
#endif // GOVSTEAM1_H
