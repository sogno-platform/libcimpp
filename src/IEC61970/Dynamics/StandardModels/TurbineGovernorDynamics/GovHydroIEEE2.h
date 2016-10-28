///////////////////////////////////////////////////////////
//  GovHydroIEEE2.h
//  Implementation of the Class GovHydroIEEE2
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVHYDROIEEE2_H
#define GOVHYDROIEEE2_H

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
				 * IEEE hydro turbine governor model represents plants with straightforward
				 * penstock configurations and hydraulic-dashpot governors.
				 * 
				 * Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and
				 * Systems</font>
				 * <font color="#0f0f0f">November/December 1973, Volume PAS-92, Number 6</font>
				 * <font color="#0f0f0f"><i><u>Dynamic Models for Steam and Hydro Turbines in
				 * Power System Studies</u></i>, Page 1904.</font>
				 */
				class GovHydroIEEE2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroIEEE2();
					virtual ~GovHydroIEEE2();
					/**
					 * Turbine numerator multiplier (Aturb).  Typical Value = -1.
					 */
					IEC61970::Base::Domain::PU aturb;
					/**
					 * Turbine denominator multiplier (Bturb).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU bturb;
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
					 * Turbine gain (Kturb).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kturb;
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
					 * Maximum gate opening (Pmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Minimum gate opening (Pmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Permanent droop (Rperm).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU rperm;
					/**
					 * Temporary droop (Rtemp).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU rtemp;
					/**
					 * Gate servo time constant (Tg).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Pilot servo valve time constant (Tp).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Dashpot time constant (Tr).  Typical Value = 12.
					 */
					IEC61970::Base::Domain::Seconds tr;
					/**
					 * Water inertia time constant (Tw).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Maximum gate closing velocity (Uc) (<0).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::Float uc;
					/**
					 * Maximum gate opening velocity (Uo). Unit = PU/sec.  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float uo;

				};

			}

		}

	}

}
#endif // GOVHYDROIEEE2_H
