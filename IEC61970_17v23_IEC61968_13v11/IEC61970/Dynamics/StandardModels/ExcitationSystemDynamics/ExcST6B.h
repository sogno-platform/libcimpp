///////////////////////////////////////////////////////////
//  ExcST6B.h
//  Implementation of the Class ExcST6B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST6B_H
#define EXCST6B_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcST6BOELselectorKind.h"
#include "IEC61970/Base/Domain/Seconds.h"
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
				 * Modified IEEE ST6B static excitation system with PID controller and optional
				 * inner feedbacks loop.
				 */
				class ExcST6B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST6B();
					virtual ~ExcST6B();
					/**
					 * Exciter output current limit reference (Ilr).  Typical Value = 4.164.
					 */
					IEC61970::Base::Domain::PU ilr;
					/**
					 * Selector (K1).
					 * true = feedback is from Ifd
					 * false = feedback is not from Ifd.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean k1;
					/**
					 * Exciter output current limit adjustment (Kcl).  Typical Value = 1.0577.
					 */
					IEC61970::Base::Domain::PU kcl;
					/**
					 * Pre-control gain constant of the inner loop field regulator (Kff).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU kff;
					/**
					 * Feedback gain constant of the inner loop field regulator (Kg).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Voltage regulator integral gain (Kia).  Typical Value = 45.094.
					 */
					IEC61970::Base::Domain::PU kia;
					/**
					 * Exciter output current limit adjustment (Kcl).  Typical Value = 17.33.
					 */
					IEC61970::Base::Domain::PU klr;
					/**
					 * Forward gain constant of the inner loop field regulator (Km).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU km;
					/**
					 * Voltage regulator proportional gain (Kpa).  Typical Value = 18.038.
					 */
					IEC61970::Base::Domain::PU kpa;
					/**
					 * Voltage regulator derivative gain (Kvd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kvd;
					/**
					 * OEL input selector (OELin). Typical Value = noOELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST6BOELselectorKind oelin = IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST6BOELselectorKind::_undef;
					/**
					 * Feedback time constant of inner loop field voltage regulator (Tg).  Typical
					 * Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Rectifier firing time constant (Ts).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ts;
					/**
					 * Voltage regulator derivative gain (Tvd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tvd;
					/**
					 * Maximum voltage regulator output (Vamax).  Typical Value = 4.81.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (Vamin).  Typical Value = -3.85.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Selector (Vilim).
					 * true = Vimin-Vimax limiter is active
					 * false = Vimin-Vimax limiter is not active.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean vilim;
					/**
					 * Maximum voltage regulator input limit (Vimax).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (Vimin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Selector (Vmult).
					 * true = multiply regulator output by terminal voltage
					 * false = do not multiply regulator output by terminal voltage.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean vmult;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 4.81.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -3.85.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Excitation source reactance (Xc).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU xc;

				};

			}

		}

	}

}
#endif // EXCST6B_H
