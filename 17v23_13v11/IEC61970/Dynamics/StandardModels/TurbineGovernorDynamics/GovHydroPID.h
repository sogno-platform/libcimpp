///////////////////////////////////////////////////////////
//  GovHydroPID.h
//  Implementation of the Class GovHydroPID
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVHYDROPID_H
#define GOVHYDROPID_H

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
				 * PID governor and turbine.
				 */
				class GovHydroPID : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroPID();
					virtual ~GovHydroPID();
					/**
					 * Turbine numerator multiplier (Aturb) (note 3).  Typical Value -1.
					 */
					IEC61970::Base::Domain::PU aturb;
					/**
					 * Turbine denominator multiplier (Bturb) (note 3).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU bturb;
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
					 * Input signal switch (Flag).
					 * true = Pe input is used
					 * false = feedback is received from CV.
					 * Flag is normally dependent on Tt.  If Tf is zero, Flag is set to false. If Tf
					 * is not zero, Flag is set to true.  Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean inputSignal;
					/**
					 * Derivative gain (Kd).  Typical Value = 1.11.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Gate servo gain (Kg).  Typical Value = 2.5.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Integral gain (Ki).  Typical Value = 0.36.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Proportional gain (Kp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kp;
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
					 * Steady state droop (R).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Input filter time constant (Td).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Washout time constant (Tf).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Gate servo time constant (Tp).  Typical Value = 0.35.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Power feedback time constant (Tt).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds tt;
					/**
					 * Turbine time constant (Tturb) (note 3).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds tturb;
					/**
					 * Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.14.
					 */
					IEC61970::Base::Domain::Float velcl;
					/**
					 * Maximum gate opening velocity (Velop).  Unit = PU/sec.  Typical Value = 0.09.
					 */
					IEC61970::Base::Domain::Float velop;

				};

			}

		}

	}

}
#endif // GOVHYDROPID_H
