///////////////////////////////////////////////////////////
//  PFVArType2IEEEPFController.h
//  Implementation of the Class PFVArType2IEEEPFController
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef PFVARTYPE2IEEEPFCONTROLLER_H
#define PFVARTYPE2IEEEPFCONTROLLER_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/PFVArControllerType2Dynamics/PFVArControllerType2Dynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PFVArControllerType2Dynamics
			{
				/**
				 * The class represents IEEE PF Controller Type 2 which is a summing point type
				 * controller and makes up the outside loop of a two-loop system. This controller
				 * is implemented as a slow PI type controller. The voltage regulator forms the
				 * inner loop and is implemented as a fast controller.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 11.4. 
				 */
				class PFVArType2IEEEPFController : public IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics
				{

				public:
					PFVArType2IEEEPFController();
					virtual ~PFVArType2IEEEPFController();
					/**
					 * Overexcitation or under excitation flag (<i>EXLON</i>)
					 * true = 1 (not in the overexcitation or underexcitation state, integral action
					 * is active)
					 * false = 0 (in the overexcitation or underexcitation state, so integral action
					 * is disabled to allow the limiter to play its role).
					 */
					IEC61970::Base::Domain::Boolean exlon;
					/**
					 * Integral gain of the pf controller (<i>K</i><i><sub>I</sub></i>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Proportional gain of the pf controller (<i>K</i><i><sub>P</sub></i>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Power factor reference (<i>P</i><i><sub>FREF</sub></i>).
					 */
					IEC61970::Base::Domain::PU pfref;
					/**
					 * Maximum output of the pf controller (<i>V</i><i><sub>CLMT</sub></i>).  Typical
					 * Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vclmt;
					/**
					 * Voltage regulator reference (<i>V</i><i><sub>REF</sub></i>).
					 */
					IEC61970::Base::Domain::PU vref;
					/**
					 * Generator sensing voltage (<i>V</i><i><sub>S</sub></i>).
					 */
					IEC61970::Base::Domain::Float vs;

				};

			}

		}

	}

}
#endif // PFVARTYPE2IEEEPFCONTROLLER_H
