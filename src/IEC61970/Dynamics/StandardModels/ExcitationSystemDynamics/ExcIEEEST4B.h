///////////////////////////////////////////////////////////
//  ExcIEEEST4B.h
//  Implementation of the Class ExcIEEEST4B
//  Created on:      28-Jan-2016 12:44:37
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_A5C02950_BA95_46c5_A1EB_57F5D633BAE2__INCLUDED_)
#define EA_A5C02950_BA95_46c5_A1EB_57F5D633BAE2__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * The class represents IEEE Std 421.5-2005 type ST4B model. This model is a
				 * variation of the Type ST3A model, with a proportional plus integral (PI)
				 * regulator block replacing the lag-lead regulator characteristic that is in the
				 * ST3A model. Both potential and compound source rectifier excitation systems are
				 * modeled.  The PI regulator blocks have non-windup limits that are represented.
				 * The voltage regulator of this model is typically implemented digitally.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.4. 
				 */
				class ExcIEEEST4B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST4B();
					virtual ~ExcIEEEST4B();
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.113.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Feedback gain constant of the inner loop field regulator (K<sub>G</sub>).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Potential circuit gain coefficient (K<sub>I</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Voltage regulator integral gain output (K<sub>IM</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kim;
					/**
					 * Voltage regulator integral gain (K<sub>IR</sub>).  Typical Value = 10.75.
					 */
					IEC61970::Base::Domain::PU kir;
					/**
					 * Potential circuit gain coefficient (K<sub>P</sub>).  Typical Value = 9.3.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator proportional gain output (K<sub>PM</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kpm;
					/**
					 * Voltage regulator proportional gain (K<sub>PR</sub>).  Typical Value = 10.75.
					 */
					IEC61970::Base::Domain::PU kpr;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Potential circuit phase angle (thetap).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::AngleDegrees thetap;
					/**
					 * Maximum excitation voltage (V<sub>BMax</sub>).  Typical Value = 11.63.
					 */
					IEC61970::Base::Domain::PU vbmax;
					/**
					 * Maximum inner loop output (V<sub>MMax</sub>).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU vmmax;
					/**
					 * Minimum inner loop output (V<sub>MMin</sub>).  Typical Value = -99.
					 */
					IEC61970::Base::Domain::PU vmmin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -0.87.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Reactance associated with potential source (X<sub>L</sub>).  Typical Value = 0.
					 * 124.
					 */
					IEC61970::Base::Domain::PU xl;

				};

			}

		}

	}

}
#endif // !defined(EA_A5C02950_BA95_46c5_A1EB_57F5D633BAE2__INCLUDED_)
