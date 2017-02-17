///////////////////////////////////////////////////////////
//  ExcREXS.h
//  Implementation of the Class ExcREXS
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCREXS_H
#define EXCREXS_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcREXSFeedbackSignalKind.h"
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
				 * General Purpose Rotating Excitation System Model.  This model can be used to
				 * represent a wide range of excitation systems whose DC power source is an AC or
				 * DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system
				 * models. 
				 */
				class ExcREXS : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcREXS();
					virtual ~ExcREXS();
					/**
					 * Field voltage value 1 (E1).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU e1;
					/**
					 * Field voltage value 2 (E2).  Typical Value = 4.
					 */
					IEC61970::Base::Domain::PU e2;
					/**
					 * Rate feedback signal flag (Fbf). Typical Value = fieldCurrent.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcREXSFeedbackSignalKind fbf;
					/**
					 * Limit type flag (Flimf).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU flimf;
					/**
					 * Rectifier regulation factor (Kc).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Exciter regulation factor (Kd).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter field proportional constant (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Field voltage feedback gain (Kefd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kefd;
					/**
					 * Rate feedback gain (Kf).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds kf;
					/**
					 * Field voltage controller feedback gain (Kh).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Field Current Regulator Integral Gain (Kii).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kii;
					/**
					 * Field Current Regulator Proportional Gain (Kip).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kip;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Voltage Regulator Integral Gain (Kvi).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kvi;
					/**
					 * Voltage Regulator Proportional Gain (Kvp).  Typical Value = 2800.
					 */
					IEC61970::Base::Domain::PU kvp;
					/**
					 * V/Hz limiter gain (Kvphz).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kvphz;
					/**
					 * Pickup speed of V/Hz limiter (Nvphz).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU nvphz;
					/**
					 * Saturation factor at E1 (Se1).  Typical Value = 0.0001.
					 */
					IEC61970::Base::Domain::PU se1;
					/**
					 * Saturation factor at E2 (Se2).  Typical Value = 0.001.
					 */
					IEC61970::Base::Domain::PU se2;
					/**
					 * Voltage Regulator time constant (Ta).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Lag time constant (Tb1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb1;
					/**
					 * Lag time constant (Tb2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb2;
					/**
					 * Lead time constant (Tc1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc1;
					/**
					 * Lead time constant (Tc2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc2;
					/**
					 * Exciter field time constant (Te).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Rate feedback time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Feedback lead time constant (Tf1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Feedback lag time constant (Tf2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * Field current Bridge time constant (Tp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Maximum compounding voltage (Vcmax).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vcmax;
					/**
					 * Maximum Exciter Field Current (Vfmax).  Typical Value = 47.
					 */
					IEC61970::Base::Domain::PU vfmax;
					/**
					 * Minimum Exciter Field Current (Vfmin).  Typical Value = -20.
					 */
					IEC61970::Base::Domain::PU vfmin;
					/**
					 * Voltage Regulator Input Limit (Vimax).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Maximum controller output (Vrmax).  Typical Value = 47.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum controller output (Vrmin).  Typical Value = -20.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Exciter compounding reactance (Xc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU xc;

				};

			}

		}

	}

}
#endif // EXCREXS_H
