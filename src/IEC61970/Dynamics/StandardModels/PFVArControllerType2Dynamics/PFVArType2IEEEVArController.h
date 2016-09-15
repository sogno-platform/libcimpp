///////////////////////////////////////////////////////////
//  PFVArType2IEEEVArController.h
//  Implementation of the Class PFVArType2IEEEVArController
//  Created on:      28-Jan-2016 12:46:02
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_01EE70BE_77B1_4aba_B242_11FA123CFE8C__INCLUDED_)
#define EA_01EE70BE_77B1_4aba_B242_11FA123CFE8C__INCLUDED_

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
				 * The class represents IEEE VAR Controller Type 2 which is a summing point type
				 * controller. It makes up the outside loop of a two-loop system. This controller
				 * is implemented as a slow PI type controller, and the voltage regulator forms
				 * the inner loop and is implemented as a fast controller.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 11.5.
				 */
				class PFVArType2IEEEVArController : public IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics
				{

				public:
					PFVArType2IEEEVArController();
					virtual ~PFVArType2IEEEVArController();
					/**
					 * Overexcitation or under excitation flag (<i>EXLON</i>)
					 * true = 1 (not in the overexcitation or underexcitation state, integral action
					 * is active)
					 * false = 0 (in the overexcitation or underexcitation state, so integral action
					 * is disabled to allow the limiter to play its role).
					 */
					IEC61970::Base::Domain::Boolean exlon;
					/**
					 * Integral gain of the pf controller (<i>K</i><i><sub>I</sub></i>).
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Proportional gain of the pf controller (<i>K</i><i><sub>P</sub></i>).
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Reactive power reference (<i>Q</i><i><sub>REF</sub></i>). 
					 */
					IEC61970::Base::Domain::PU qref;
					/**
					 * Maximum output of the pf controller (<i>V</i><i><sub>CLMT</sub></i>).
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
#endif // !defined(EA_01EE70BE_77B1_4aba_B242_11FA123CFE8C__INCLUDED_)
