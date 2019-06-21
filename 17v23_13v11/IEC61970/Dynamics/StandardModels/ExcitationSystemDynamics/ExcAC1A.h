///////////////////////////////////////////////////////////
//  ExcAC1A.h
//  Implementation of the Class ExcAC1A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAC1A_H
#define EXCAC1A_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/PU.h"
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
				 * Modified IEEE AC1A alternator-supplied rectifier excitation system with
				 * different rate feedback source.
				 */
				class ExcAC1A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC1A();
					virtual ~ExcAC1A();
					/**
					 * Indicates if both HV gate and LV gate are active (HVLVgates).
					 * true = gates are used
					 * false = gates are not used.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean hvlvgates;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 400.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc). Typical
					 * Value = 0.2.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances (Kd).
					 * Typical Value = 0.38.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (Kf).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Coefficient to allow different usage of the model (Kf1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf1;
					/**
					 * Coefficient to allow different usage of the model (Kf2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kf2;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve1,
					 * back of commutating reactance (Se[Ve1]).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve2,
					 * back of commutating reactance (Se[Ve2]).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>c</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>amax</sub>).  Typical Value = 14.5.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>amin</sub>).  Typical Value = -14.5.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve1).  Typical Value = 4.18.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve2).  Typical Value = 3.14.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Maximum voltage regulator outputs (Vrmax).  Typical Value = 6.03.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (Rrmin).  Typical Value = -5.43.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCAC1A_H
