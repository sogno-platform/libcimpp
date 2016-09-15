///////////////////////////////////////////////////////////
//  ExcAC6A.h
//  Implementation of the Class ExcAC6A
//  Created on:      28-Jan-2016 12:44:21
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_C7122DB6_BA2B_49e4_81CF_1BBC1630BE86__INCLUDED_)
#define EA_C7122DB6_BA2B_49e4_81CF_1BBC1630BE86__INCLUDED_

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
				 * Modified IEEE AC6A alternator-supplied rectifier excitation system with speed
				 * input.
				 */
				class ExcAC6A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC6A();
					virtual ~ExcAC6A();
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 536.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc).  Typical
					 * Value = 0.173.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances (Kd).
					 * Typical Value = 1.91.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.6.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Exciter field current limiter gain (Kh).  Typical Value = 92.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve1,
					 * back of commutating reactance (Se[Ve1]).  Typical Value = 0.214.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve2,
					 * back of commutating reactance (Se[Ve2]).  Typical Value = 0.044.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.086.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Exciter field current limiter time constant (Th).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds th;
					/**
					 * Exciter field current limiter time constant (Tj).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds tj;
					/**
					 * Voltage regulator time constant (Tk).  Typical Value = 0.18.
					 */
					IEC61970::Base::Domain::Seconds tk;
					/**
					 * Maximum voltage regulator output (Vamax).  Typical Value = 75.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (Vamin).  Typical Value = -75.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve<sub>1</sub>).  Typical Value = 7.4.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve2).  Typical Value = 5.55.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Exciter field current limit reference (Vfelim).  Typical Value = 19.
					 */
					IEC61970::Base::Domain::PU vfelim;
					/**
					 * Maximum field current limiter signal reference (Vhmax).  Typical Value = 75.
					 */
					IEC61970::Base::Domain::PU vhmax;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 44.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -36.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_C7122DB6_BA2B_49e4_81CF_1BBC1630BE86__INCLUDED_)
