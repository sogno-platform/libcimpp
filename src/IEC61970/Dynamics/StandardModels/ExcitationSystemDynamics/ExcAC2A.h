///////////////////////////////////////////////////////////
//  ExcAC2A.h
//  Implementation of the Class ExcAC2A
//  Created on:      28-Jan-2016 12:44:19
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_A0F1072D_B0E0_43d2_AFCC_736A3BCF60B9__INCLUDED_)
#define EA_A0F1072D_B0E0_43d2_AFCC_736A3BCF60B9__INCLUDED_

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
				 * Modified IEEE AC2A alternator-supplied rectifier excitation system with
				 * different field current limit.
				 */
				class ExcAC2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC2A();
					virtual ~ExcAC2A();
					/**
					 * Indicates if HV gate is active (HVgate).
					 * true = gate is used
					 * false = gate is not used.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean hvgate;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 400.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Second stage regulator gain (Kb) (>0).  Exciter field current controller gain.
					 * Typical Value = 25.
					 */
					IEC61970::Base::Domain::PU kb;
					/**
					 * Second stage regulator gain (Kb1). It is exciter field current controller gain
					 * used as alternative to Kb to represent a variant of the ExcAC2A model.  Typical
					 * Value = 25.
					 */
					IEC61970::Base::Domain::PU kb1;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc).  Typical
					 * Value = 0.28.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances (Kd).
					 * Typical Value = 0.35.
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
					 * Exciter field current feedback gain (Kh).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Exciter field current limiter gain (Kl).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU kl;
					/**
					 * Coefficient to allow different usage of the model (Kl1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kl1;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Indicates if LV gate is active (LVgate).
					 * true = gate is used
					 * false = gate is not used.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean lvgate;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>1</sub>, back of commutating reactance (Se[Ve<sub>1</sub>]).  Typical
					 * Value = 0.037.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * Ve<sub>2</sub>, back of commutating reactance (Se[Ve<sub>2</sub>]).  Typical
					 * Value = 0.012.
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
					 * Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>amax</sub>).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>amin</sub>).  Typical Value = -8.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>1</sub>).  Typical Value = 4.4.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>2</sub>).  Typical Value = 3.3.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Exciter field current limit reference (Vfemax).  Typical Value = 4.4.
					 */
					IEC61970::Base::Domain::PU vfemax;
					/**
					 * Maximum exciter field current (Vlr).  Typical Value = 4.4.
					 */
					IEC61970::Base::Domain::PU vlr;
					/**
					 * Maximum voltage regulator outputs (Vrmax).  Typical Value = 105.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (Vrmin).  Typical Value = -95.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_A0F1072D_B0E0_43d2_AFCC_736A3BCF60B9__INCLUDED_)
