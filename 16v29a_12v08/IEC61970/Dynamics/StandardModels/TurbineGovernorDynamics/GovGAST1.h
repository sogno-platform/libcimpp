///////////////////////////////////////////////////////////
//  GovGAST1.h
//  Implementation of the Class GovGAST1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVGAST1_H
#define GOVGAST1_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/ActivePower.h"
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
				 * Modified single shaft gas turbine.
				 */
				class GovGAST1 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGAST1();
					virtual ~GovGAST1();
					/**
					 * Turbine power time constant numerator scale factor (a).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Float a;
					/**
					 * Turbine power time constant denominator scale factor (b).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float b;
					/**
					 * Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::ActivePower db2;
					/**
					 * Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency eps;
					/**
					 * Fuel flow at zero power output (Fidle).  Typical Value = 0.18.
					 */
					IEC61970::Base::Domain::PU fidle;
					/**
					 * Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gv1;
					/**
					 * Nonlinear gain point 2,PU gv (Gv2).  Typical Value = 0.
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
					 * Governor gain (Ka).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Temperature limiter gain (Kt).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU kt;
					/**
					 * Ambient temperature load limit (Lmax).  Lmax is the turbine power output
					 * corresponding to the limiting exhaust gas temperature.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU lmax;
					/**
					 * Valve position change allowed at fast rate (Loadinc).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU loadinc;
					/**
					 * Maximum long term fuel valve opening rate (Ltrate).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Float ltrate;
					/**
					 * Base for power values (MWbase) (> 0).  Unit = MW.
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
					 * Permanent droop (R).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Maximum fuel valve opening rate (Rmax).  Unit = PU/sec.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float rmax;
					/**
					 * Governor mechanism time constant (T1).  T1 represents the natural valve
					 * positioning time constant of the governor for small disturbances, as seen when
					 * rate limiting is not in effect.  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Turbine power time constant (T2).  T2 represents delay due to internal energy
					 * storage of the gas turbine engine. T2 can be used to give a rough approximation
					 * to the delay associated with acceleration of the compressor spool of a multi-
					 * shaft engine, or with the compressibility of gas in the plenum of the free
					 * power turbine of an aero-derivative unit, for example.  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Turbine exhaust temperature time constant (T3).  T3 represents delay in the
					 * exhaust temperature and load limiting system. Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Governor lead time constant (T4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Governor lag time constant (T5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Valve position averaging time constant (Tltr).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tltr;
					/**
					 * Maximum turbine power, PU of MWbase (Vmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum turbine power, PU of MWbase (Vmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vmin;

				};

			}

		}

	}

}
#endif // GOVGAST1_H
