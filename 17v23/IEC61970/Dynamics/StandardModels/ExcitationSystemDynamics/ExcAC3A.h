///////////////////////////////////////////////////////////
//  ExcAC3A.h
//  Implementation of the Class ExcAC3A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCAC3A_H
#define EXCAC3A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Modified IEEE AC3A alternator-supplied rectifier excitation system with
				 * different field current limit.
				 */
				class ExcAC3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC3A();
					virtual ~ExcAC3A();
					/**
					 * Value of <i>EFD </i>at which feedback gain changes (Efdn).  Typical Value = 2.
					 * 36.
					 */
					IEC61970::Base::Domain::PU efdn;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 45.62.
					 */
					IEC61970::Base::Domain::Seconds ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc).  Typical
					 * Value = 0.104.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances (Kd).
					 * Typical Value = 0.499.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (Kf).  Typical Value = 0.143.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Coefficient to allow different usage of the model (Kf1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kf1;
					/**
					 * Coefficient to allow different usage of the model (Kf2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf2;
					/**
					 * Gain used in the minimum field voltage limiter loop (Klv).  Typical Value = 0.
					 * 194.
					 */
					IEC61970::Base::Domain::PU klv;
					/**
					 * Excitation control system stabilizer gain (Kn).  Typical Value =0.05.
					 */
					IEC61970::Base::Domain::PU kn;
					/**
					 * Constant associated with regulator and alternator field power supply (Kr).
					 * Typical Value =3.77.
					 */
					IEC61970::Base::Domain::PU kr;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>1</sub>, back of commutating reactance (Se[Ve<sub>1</sub>]).  Typical
					 * Value = 1.143.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>2</sub>, back of commutating reactance (Se[Ve<sub>2</sub>]).  Typical
					 * Value = 0.1.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.013.
					 */
					IEC61970::Base::Domain::PU ta;
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
					 * Typical Value = 1.17.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>amax</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>amin</sub>).  Typical Value = -0.95.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve1) equals Vemax (Ve1).  Typical Value = 6.24.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>2</sub>).  Typical Value = 4.68.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Minimum exciter voltage output (Vemin).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vemin;
					/**
					 * Exciter field current limit reference (Vfemax).  Typical Value = 16.
					 */
					IEC61970::Base::Domain::PU vfemax;
					/**
					 * Field voltage used in the minimum field voltage limiter loop (Vlv).  Typical
					 * Value = 0.79.
					 */
					IEC61970::Base::Domain::PU vlv;

				};

			}

		}

	}

}
#endif // EXCAC3A_H
