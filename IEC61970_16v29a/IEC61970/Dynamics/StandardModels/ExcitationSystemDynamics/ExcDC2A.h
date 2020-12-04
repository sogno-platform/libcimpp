///////////////////////////////////////////////////////////
//  ExcDC2A.h
//  Implementation of the Class ExcDC2A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCDC2A_H
#define EXCDC2A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Modified IEEE DC2A direct current commutator exciters with speed input, one
				 * more leg block in feedback loop and without underexcitation limiters (UEL)
				 * inputs.  DC type 2 excitation system model with added speed multiplier, added
				 * lead-lag, and voltage-dependent limits.
				 */
				class ExcDC2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcDC2A();
					virtual ~ExcDC2A();
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value =
					 * 3.05.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value =
					 * 2.29.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * (exclim).  IEEE standard is ambiguous about lower limit on exciter output.
					 * true = a lower limit of zero is applied to integrator output
					 * false = a lower limit of zero is not applied to integrator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean exclim;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 300.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (Ke).  If Ke is entered as zero,
					 * the model calculates an effective value of Ke such that the initial condition
					 * value of Vr is zero. The zero value of Ke is not changed.  If Ke is entered as
					 * non-zero, its value is used directly, without change.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gain (Kf).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd1
					 * (Se[Eefd1]).  Typical Value = 0.279.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd2
					 * (Se[Efd2]).  Typical Value = 0.117.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 1.33.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 0.675.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Excitation control system stabilizer time constant (Tf1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 4.95.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -4.9.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * (Vtlim).
					 * true = limiter at the block [Ka/(1+sTa)] is dependent on Vt
					 * false = limiter at the block is not dependent on Vt.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean vtlim;

				};

			}

		}

	}

}
#endif // EXCDC2A_H
