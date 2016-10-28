///////////////////////////////////////////////////////////
//  GovHydro4.h
//  Implementation of the Class GovHydro4
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVHYDRO4_H
#define GOVHYDRO4_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Frequency.h"
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
				 * Hydro turbine and governor. Represents plants with straight-forward penstock
				 * configurations and hydraulic governors of traditional 'dashpot' type.  This
				 * model can be used to represent simple, Francis, Pelton or Kaplan turbines.
				 */
				class GovHydro4 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydro4();
					virtual ~GovHydro4();
					/**
					 * Turbine gain (At).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU at;
					/**
					 * Kaplan blade servo point 0 (Bgv0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU bgv0;
					/**
					 * Kaplan blade servo point 1 (Bgv1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU bgv1;
					/**
					 * Kaplan blade servo point 2 (Bgv2).
					 * Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.1.
					 */
					IEC61970::Base::Domain::PU bgv2;
					/**
					 * Kaplan blade servo point 3 (Bgv3).
					 * Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.667.
					 */
					IEC61970::Base::Domain::PU bgv3;
					/**
					 * Kaplan blade servo point 4 (Bgv4).
					 * Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.9.
					 */
					IEC61970::Base::Domain::PU bgv4;
					/**
					 * Kaplan blade servo point 5 (Bgv5).
					 * Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1.
					 */
					IEC61970::Base::Domain::PU bgv5;
					/**
					 * Maximum blade adjustment factor (Bmax).
					 * Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1.1276.
					 */
					IEC61970::Base::Domain::Float bmax;
					/**
					 * Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::ActivePower db2;
					/**
					 * Turbine damping factor (Dturb).  Unit = delta P (PU of MWbase) / delta speed
					 * (PU).
					 * Typical Value = 0.5.  Typical Value Francis = 1.1, Kaplan = 1.1.
					 */
					IEC61970::Base::Domain::PU dturb;
					/**
					 * Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency eps;
					/**
					 * Maximum gate opening, PU of MWbase (Gmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU gmax;
					/**
					 * Minimum gate opening, PU of MWbase (Gmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gmin;
					/**
					 * Nonlinear gain point 0, PU gv (Gv0).
					 * Typical Value = 0.  Typical Value Francis = 0.1, Kaplan = 0.1.
					 */
					IEC61970::Base::Domain::PU gv0;
					/**
					 * Nonlinear gain point 1, PU gv (Gv1).
					 * Typical Value = 0.  Typical Value Francis = 0.4, Kaplan = 0.4.
					 */
					IEC61970::Base::Domain::PU gv1;
					/**
					 * Nonlinear gain point 2, PU gv (Gv2).
					 * Typical Value = 0.  Typical Value Francis = 0.5, Kaplan = 0.5.
					 */
					IEC61970::Base::Domain::PU gv2;
					/**
					 * Nonlinear gain point 3, PU gv (Gv3).
					 * Typical Value = 0.  Typical Value Francis = 0.7, Kaplan = 0.7.
					 */
					IEC61970::Base::Domain::PU gv3;
					/**
					 * Nonlinear gain point 4, PU gv (Gv4).
					 * Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.8.
					 */
					IEC61970::Base::Domain::PU gv4;
					/**
					 * Nonlinear gain point 5, PU gv (Gv5).
					 * Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.9.
					 */
					IEC61970::Base::Domain::PU gv5;
					/**
					 * Head available at dam (hdam).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU hdam;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Nonlinear gain point 0, PU power (Pgv0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU pgv0;
					/**
					 * Nonlinear gain point 1, PU power (Pgv1).
					 * Typical Value = 0.  Typical Value Francis = 0.42, Kaplan = 0.35.
					 */
					IEC61970::Base::Domain::PU pgv1;
					/**
					 * Nonlinear gain point 2, PU power (Pgv2).
					 * Typical Value = 0.  Typical Value Francis = 0.56, Kaplan = 0.468.
					 */
					IEC61970::Base::Domain::PU pgv2;
					/**
					 * Nonlinear gain point 3, PU power (Pgv3).
					 * Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.796.
					 */
					IEC61970::Base::Domain::PU pgv3;
					/**
					 * Nonlinear gain point 4, PU power (Pgv4).
					 * Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.917.
					 */
					IEC61970::Base::Domain::PU pgv4;
					/**
					 * Nonlinear gain point 5, PU power (Pgv5).
					 * Typical Value = 0.  Typical Value Francis = 0.97, Kaplan = 0.99.
					 */
					IEC61970::Base::Domain::PU pgv5;
					/**
					 * No-load flow at nominal head (Qnl).
					 * Typical Value = 0.08.  Typical Value Francis = 0, Kaplan = 0.
					 */
					IEC61970::Base::Domain::PU qn1;
					/**
					 * Permanent droop (Rperm).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds rperm;
					/**
					 * Temporary droop (Rtemp).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds rtemp;
					/**
					 * Blade servo time constant (Tblade).  Typical Value = 100.
					 */
					IEC61970::Base::Domain::Seconds tblade;
					/**
					 * Gate servo time constant (Tg) (>0).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Pilot servo time constant (Tp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Dashpot time constant (Tr) (>0).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tr;
					/**
					 * Water inertia time constant (Tw) (>0).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Max gate closing velocity (Uc).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Float uc;
					/**
					 * Max gate opening velocity (Uo).  Typical Vlaue = 0.2.
					 */
					IEC61970::Base::Domain::Float uo;

				};

			}

		}

	}

}
#endif // GOVHYDRO4_H
