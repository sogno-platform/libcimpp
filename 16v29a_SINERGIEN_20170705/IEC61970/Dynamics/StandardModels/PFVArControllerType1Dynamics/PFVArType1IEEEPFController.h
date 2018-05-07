///////////////////////////////////////////////////////////
//  PFVArType1IEEEPFController.h
//  Implementation of the Class PFVArType1IEEEPFController
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef PFVARTYPE1IEEEPFCONTROLLER_H
#define PFVARTYPE1IEEEPFCONTROLLER_H

#include "IEC61970/Base/Domain/Boolean.h"
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
				 * The class represents IEEE PF Controller Type 1 which operates by moving the
				 * voltage reference directly.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 11.2. 
				 */
				class PFVArType1IEEEPFController : public IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics
				{

				public:
					PFVArType1IEEEPFController();
					virtual ~PFVArType1IEEEPFController();
					/**
					 * Overexcitation Flag (<i>OVEX</i>)
					 * true = overexcited
					 * false = underexcited.
					 */
					IEC61970::Base::Domain::Boolean ovex;
					/**
					 * PF controller time delay (<i>T</i><i><sub>PFC</sub></i>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tpfc;
					/**
					 * Minimum machine terminal current needed to enable pf/var controller
					 * (<i>V</i><i><sub>ITMIN</sub></i>).
					 */
					IEC61970::Base::Domain::PU vitmin;
					/**
					 * Synchronous machine power factor (<i>V</i><i><sub>PF</sub></i>).
					 */
					IEC61970::Base::Domain::PU vpf;
					/**
					 * PF controller dead band (<i>V</i><i><sub>PFC_BW</sub></i>).  Typical Value = 0.
					 * 05.
					 */
					IEC61970::Base::Domain::Float vpfcbw;
					/**
					 * PF controller reference (<i>V</i><i><sub>PFREF</sub></i>).
					 */
					IEC61970::Base::Domain::PU vpfref;
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
#endif // PFVARTYPE1IEEEPFCONTROLLER_H
