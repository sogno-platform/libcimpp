///////////////////////////////////////////////////////////
//  ExcIEEEST7B.h
//  Implementation of the Class ExcIEEEST7B
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEST7B_H
#define EXCIEEEST7B_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcST7BOELselectorKind.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcST7BUELselectorKind.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST7B model. This model is
				 * representative of static potential-source excitation systems. In this system,
				 * the AVR consists of a PI voltage regulator. A phase lead-lag filter in series
				 * allows introduction of a derivative function, typically used with brushless
				 * excitation systems. In that case, the regulator is of the PID type. In addition,
				 * the terminal voltage channel includes a phase lead-lag filter.  The AVR
				 * includes the appropriate inputs on its reference for overexcitation limiter
				 * (OEL1), underexcitation limiter (UEL), stator current limiter (SCL), and
				 * current compensator (DROOP). All these limitations, when they work at voltage
				 * reference level, keep the PSS (VS signal from Type PSS1A, PSS2A, or PSS2B) in
				 * operation. However, the UEL limitation can also be transferred to the high
				 * value (HV) gate acting on the output signal. In addition, the output signal
				 * passes through a low value (LV) gate for a ceiling overexcitation limiter
				 * (OEL2).
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.7. 
				 */
				class ExcIEEEST7B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST7B();
					virtual ~ExcIEEEST7B();
					/**
					 * High-value gate feedback gain (K<sub>H</sub>).  Typical Value 1.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Voltage regulator integral gain (K<sub>IA</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kia;
					/**
					 * Low-value gate feedback gain (K<sub>L</sub>).  Typical Value 1.
					 */
					IEC61970::Base::Domain::PU kl;
					/**
					 * Voltage regulator proportional gain (K<sub>PA</sub>).  Typical Value = 40.
					 */
					IEC61970::Base::Domain::PU kpa;
					/**
					 * OEL input selector (OELin). Typical Value = noOELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7BOELselectorKind oelin;
					/**
					 * Regulator lag time constant (T<sub>B</sub>).  Typical Value 1.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Regulator lead time constant (T<sub>C</sub>).  Typical Value 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Feedback time constant of inner loop field voltage regulator (T<sub>G</sub>).
					 * Typical Value 1.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Feedback time constant (T<sub>IA</sub>).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tia;
					/**
					 * UEL input selector (UELin). Typical Value = noUELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7BUELselectorKind uelin;
					/**
					 * Maximum voltage reference signal (V<sub>MAX</sub>).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum voltage reference signal (V<sub>MIN</sub>).  Typical Value = 0.9.
					 */
					IEC61970::Base::Domain::PU vmin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -4.5.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCIEEEST7B_H
