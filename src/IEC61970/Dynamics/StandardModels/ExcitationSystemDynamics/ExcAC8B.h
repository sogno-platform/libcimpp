///////////////////////////////////////////////////////////
//  ExcAC8B.h
//  Implementation of the Class ExcAC8B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCAC8B_H
#define EXCAC8B_H

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
				 * Modified IEEE AC8B alternator-supplied rectifier excitation system with speed
				 * input and input limiter.
				 */
				class ExcAC8B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC8B();
					virtual ~ExcAC8B();
					/**
					 * Input limiter indicator.
					 * true = input limiter Vimax and Vimin is considered
					 * false = input limiter Vimax and Vimin is not considered.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean inlim;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc). Typical
					 * Value = 0.55.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances (Kd).
					 * Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Voltage regulator derivative gain (Kdr).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU kdr;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Voltage regulator integral gain (Kir).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU kir;
					/**
					 * Voltage regulator proportional gain (Kpr).  Typical Value = 80.
					 */
					IEC61970::Base::Domain::PU kpr;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * PID limiter indicator.
					 * true = input limiter Vpidmax and Vpidmin is considered
					 * false = input limiter Vpidmax and Vpidmin is not considered.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean pidlim;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>1</sub>, back of commutating reactance (Se[Ve1]).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>2</sub>, back of commutating reactance (Se[Ve2]).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Lag time constant (Tdr).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tdr;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Selector for the limiter on the block [1/sTe].
					 * See diagram for meaning of true and false.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean telim;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>1</sub>) equals V<sub>EMAX</sub> (Ve1).  Typical
					 * Value = 6.5.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>2</sub>).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Minimum exciter voltage output (Vemin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vemin;
					/**
					 * Exciter field current limit reference (Vfemax).  Typical Value = 6.
					 */
					IEC61970::Base::Domain::PU vfemax;
					/**
					 * Input signal maximum (Vimax).  Typical Value = 35.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Input signal minimum (Vimin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * PID maximum controller output (Vpidmax).  Typical Value = 35.
					 */
					IEC61970::Base::Domain::PU vpidmax;
					/**
					 * PID minimum controller output (Vpidmin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vpidmin;
					/**
					 * Maximum voltage regulator output (Vrmax). Typical Value = 35.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Multiply by generator's terminal voltage indicator.
					 * true =the limits Vrmax and Vrmin are multiplied by the generator’s terminal
					 * voltage to represent a thyristor power stage fed from the generator terminals
					 * false = limits are not multiplied by generator's terminal voltage.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean vtmult;

				};

			}

		}

	}

}
#endif // EXCAC8B_H
