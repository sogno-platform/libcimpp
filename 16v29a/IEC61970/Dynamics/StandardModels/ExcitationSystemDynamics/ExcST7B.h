///////////////////////////////////////////////////////////
//  ExcST7B.h
//  Implementation of the Class ExcST7B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST7B_H
#define EXCST7B_H

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
				 * Modified IEEE ST7B static excitation system without stator current limiter
				 * (SCL) and current compensator (DROOP) inputs.
				 */
				class ExcST7B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST7B();
					virtual ~ExcST7B();
					/**
					 * High-value gate feedback gain (Kh).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Voltage regulator integral gain (Kia).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kia;
					/**
					 * Low-value gate feedback gain (Kl).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kl;
					/**
					 * Voltage regulator proportional gain (Kpa).  Typical Value = 40.
					 */
					IEC61970::Base::Domain::PU kpa;
					/**
					 * OEL input selector (OELin). Typical Value = noOELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7BOELselectorKind oelin;
					/**
					 * Regulator lag time constant (Tb).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Regulator lead time constant (Tc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Feedback time constant of inner loop field voltage regulator (Tg).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Feedback time constant (Tia).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tia;
					/**
					 * Rectifier firing time constant (Ts).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ts;
					/**
					 * UEL input selector (UELin). Typical Value = noUELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7BUELselectorKind uelin;
					/**
					 * Maximum voltage reference signal (Vmax).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum voltage reference signal (Vmin).  Typical Value = 0.9.
					 */
					IEC61970::Base::Domain::PU vmin;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -4.5.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCST7B_H
