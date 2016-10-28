///////////////////////////////////////////////////////////
//  PFVArType1IEEEVArController.h
//  Implementation of the Class PFVArType1IEEEVArController
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef PFVARTYPE1IEEEVARCONTROLLER_H
#define PFVARTYPE1IEEEVARCONTROLLER_H

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/PFVArControllerType1Dynamics/PFVArControllerType1Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PFVArControllerType1Dynamics
			{
				/**
				 * The class represents IEEE VAR Controller Type 1 which operates by moving the
				 * voltage reference directly.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 11.3.
				 */
				class PFVArType1IEEEVArController : public IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics
				{

				public:
					PFVArType1IEEEVArController();
					virtual ~PFVArType1IEEEVArController();
					/**
					 * Var controller time delay (<i>T</i><i><sub>VARC</sub></i>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tvarc;
					/**
					 * Synchronous machine power factor (<i>V</i><i><sub>VAR</sub></i>).
					 */
					IEC61970::Base::Domain::PU vvar;
					/**
					 * Var controller dead band (<i>V</i><i><sub>VARC_BW</sub></i>).  Typical Value =
					 * 0.02.
					 */
					IEC61970::Base::Domain::Float vvarcbw;
					/**
					 * Var controller reference (<i>V</i><i><sub>VARREF</sub></i>).
					 */
					IEC61970::Base::Domain::PU vvarref;
					/**
					 * Maximum machine terminal voltage needed for pf/var controller to be enabled
					 * (<i>V</i><i><sub>VTMAX</sub></i>).
					 */
					IEC61970::Base::Domain::PU vvtmax;
					/**
					 * Minimum machine terminal voltage needed to enable pf/var controller
					 * (<i>V</i><i><sub>VTMIN</sub></i>).
					 */
					IEC61970::Base::Domain::PU vvtmin;

				};

			}

		}

	}

}
#endif // PFVARTYPE1IEEEVARCONTROLLER_H
