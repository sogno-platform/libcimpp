///////////////////////////////////////////////////////////
//  GovHydro1.h
//  Implementation of the Class GovHydro1
//  Created on:      28-Jan-2016 12:45:04
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_3A957599_A4EE_47d9_91D6_4B16E91EA75C__INCLUDED_)
#define EA_3A957599_A4EE_47d9_91D6_4B16E91EA75C__INCLUDED_

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
				 * Basic Hydro turbine governor model.
				 */
				class GovHydro1 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydro1();
					virtual ~GovHydro1();
					/**
					 * Turbine gain (At) (>0).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU at;
					/**
					 * Turbine damping factor (Dturb) (>=0).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU dturb;
					/**
					 * Maximum gate opening (Gmax) (>0).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU gmax;
					/**
					 * Minimum gate opening (Gmin) (>=0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU gmin;
					/**
					 * Turbine nominal head (hdam).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU hdam;
					/**
					 * Base for power values (MWbase) (> 0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * No-load flow at nominal head (qnl) (>=0).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::PU qnl;
					/**
					 * Permanent droop (R) (>0).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::PU rperm;
					/**
					 * Temporary droop (r) (>R).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU rtemp;
					/**
					 * Filter time constant (<i>Tf</i>) (>0).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Gate servo time constant (Tg) (>0).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Washout time constant (Tr) (>0).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tr;
					/**
					 * Water inertia time constant (Tw) (>0).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tw;
					/**
					 * Maximum gate velocity (Vlem) (>0).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Float velm;

				};

			}

		}

	}

}
#endif // !defined(EA_3A957599_A4EE_47d9_91D6_4B16E91EA75C__INCLUDED_)
