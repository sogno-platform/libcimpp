///////////////////////////////////////////////////////////
//  ExcPIC.h
//  Implementation of the Class ExcPIC
//  Created on:      28-Jan-2016 12:44:41
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_09E99CD3_C5A9_4e07_A190_D2FBEDE84F77__INCLUDED_)
#define EA_09E99CD3_C5A9_4e07_A190_D2FBEDE84F77__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
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
				 * Proportional/Integral Regulator Excitation System Model.  This model can be
				 * used to represent excitation systems with a proportional-integral (PI) voltage
				 * regulator controller. 
				 */
				class ExcPIC : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcPIC();
					virtual ~ExcPIC();
					/**
					 * Field voltage value 1 (E1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU e1;
					/**
					 * Field voltage value 2 (E2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU e2;
					/**
					 * Exciter maximum limit (Efdmax).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Exciter minimum limit (Efdmin).  Typical Value = -0.87.
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * PI controller gain (Ka).  Typical Value = 3.15.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter regulation factor (Kc).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Exciter constant (Ke).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Rate feedback gain (Kf).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Current source gain (Ki).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Potential source gain (Kp).  Typical Value = 6.5.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Saturation factor at E1 (Se1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU se1;
					/**
					 * Saturation factor at E2 (Se2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU se2;
					/**
					 * PI controller time constant (Ta1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ta1;
					/**
					 * Voltage regulator time constant (Ta2).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds ta2;
					/**
					 * Lead time constant (Ta3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta3;
					/**
					 * Lag time constant (Ta4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta4;
					/**
					 * Exciter time constant (Te).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Rate feedback time constant (Tf1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Rate feedback lag time constant (Tf2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * PI maximum limit (Vr1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vr1;
					/**
					 * PI minimum limit (Vr2).  Typical Value = -0.87.
					 */
					IEC61970::Base::Domain::PU vr2;
					/**
					 * Voltage regulator maximum limit (Vrmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Voltage regulator minimum limit (Vrmin).  Typical Value = -0.87.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_09E99CD3_C5A9_4e07_A190_D2FBEDE84F77__INCLUDED_)
