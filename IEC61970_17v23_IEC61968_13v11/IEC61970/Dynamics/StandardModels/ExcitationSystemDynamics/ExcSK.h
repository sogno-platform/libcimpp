///////////////////////////////////////////////////////////
//  ExcSK.h
//  Implementation of the Class ExcSK
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCSK_H
#define EXCSK_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
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
				 * Slovakian Excitation System Model.  UEL and secondary voltage control are
				 * included in this model. When this model is used, there cannot be a separate
				 * underexcitation limiter or VAr controller model.
				 */
				class ExcSK : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcSK();
					virtual ~ExcSK();
					/**
					 * Field voltage clipping limit (Efdmax). 
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Field voltage clipping limit (Efdmin). 
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * Maximum field voltage output (Emax).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU emax;
					/**
					 * Minimum field voltage output (Emin).  Typical Value = -20.
					 */
					IEC61970::Base::Domain::PU emin;
					/**
					 * Gain (K).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Parameter of underexcitation limit (K1).  Typical Value = 0.1364.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Parameter of underexcitation limit (K2).  Typical Value = -0.3861.
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * PI controller gain (Kc).  Typical Value = 70.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Rectifier regulation factor (Kce).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kce;
					/**
					 * Exciter internal reactance (Kd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * P controller gain (Kgob).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU kgob;
					/**
					 * PI controller gain (Kp).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * PI controller gain of integral component (Kqi).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kqi;
					/**
					 * Rate of rise of the reactive power (Kqob). 
					 */
					IEC61970::Base::Domain::PU kqob;
					/**
					 * PI controller gain (Kqp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kqp;
					/**
					 * Dead band of reactive power (nq).  Determines the range of sensitivity.
					 * Typical Value = 0.001.
					 */
					IEC61970::Base::Domain::PU nq;
					/**
					 * Secondary voltage control state (Qc_on_off).
					 * true = secondary voltage control is ON
					 * false = secondary voltage control is OFF.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean qconoff;
					/**
					 * Desired value (setpoint) of reactive power, manual setting (Qz). 
					 */
					IEC61970::Base::Domain::PU qz;
					/**
					 * Selector to apply automatic calculation in secondary controller model.
					 * true = automatic calculation is activated
					 * false = manual set is active; the use of desired value of reactive power (Qz)
					 * is required.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean remote;
					/**
					 * Apparent power of the unit (Sbase).  Unit = MVA.  Typical Value = 259.
					 */
					IEC61970::Base::Domain::ApparentPower sbase;
					/**
					 * PI controller phase lead time constant (Tc).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Time constant of gain block (Te).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * PI controller phase lead time constant (Ti).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds ti;
					/**
					 * Time constant (Tp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Voltage transducer time constant (Tr).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds tr;
					/**
					 * Maximum error (Uimax).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU uimax;
					/**
					 * Minimum error (UImin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU uimin;
					/**
					 * Maximum controller output (URmax).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU urmax;
					/**
					 * Minimum controller output (URmin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU urmin;
					/**
					 * Maximum terminal voltage input (Vtmax).  Determines the range of voltage dead
					 * band.  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU vtmax;
					/**
					 * Minimum terminal voltage input (Vtmin).  Determines the range of voltage dead
					 * band.  Typical Value = 0.95.
					 */
					IEC61970::Base::Domain::PU vtmin;
					/**
					 * Maximum output (Yp).  Minimum output = 0.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU yp;

				};

			}

		}

	}

}
#endif // EXCSK_H
