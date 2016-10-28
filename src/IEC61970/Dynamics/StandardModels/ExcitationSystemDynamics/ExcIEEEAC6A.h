///////////////////////////////////////////////////////////
//  ExcIEEEAC6A.h
//  Implementation of the Class ExcIEEEAC6A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEAC6A_H
#define EXCIEEEAC6A_H

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
				 * The class represents IEEE Std 421.5-2005 type AC6A model. The model represents
				 * field-controlled alternator-rectifier excitation systems with system-supplied
				 * electronic voltage regulators.  The maximum output of the regulator,
				 * <b><i>V</i></b><b><i><sub>R</sub></i></b>, is a function of terminal voltage,
				 * <b><i>V</i></b><b><i><sub>T</sub></i></b>. The field current limiter included
				 * in the original model AC6A remains in the 2005 update.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.6. 
				 */
				class ExcIEEEAC6A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC6A();
					virtual ~ExcIEEEAC6A();
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 536.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.173.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances
					 * (K<sub>D</sub>).  Typical Value = 1.91.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.6.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Exciter field current limiter gain (K<sub>H</sub>).  Typical Value = 92.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E1</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E1</sub>]).
					 * Typical Value = 0.214.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E2</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E2</sub>]).
					 * Typical Value = 0.044.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.086.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Exciter field current limiter time constant (T<sub>H</sub>).  Typical Value = 0.
					 * 08.
					 */
					IEC61970::Base::Domain::Seconds th;
					/**
					 * Exciter field current limiter time constant (T<sub>J</sub>).  Typical Value = 0.
					 * 02.
					 */
					IEC61970::Base::Domain::Seconds tj;
					/**
					 * Voltage regulator time constant (T<sub>K</sub>).  Typical Value = 0.18.
					 */
					IEC61970::Base::Domain::Seconds tk;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 75.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -75.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E1</sub>) equals V<sub>EMAX </sub>(V<sub>E1</sub>).
					 *  Typical Value = 7.4.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E2</sub>).  Typical Value = 5.55.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Exciter field current limit reference (V<sub>FELIM</sub>).  Typical Value = 19.
					 */
					IEC61970::Base::Domain::PU vfelim;
					/**
					 * Maximum field current limiter signal reference (V<sub>HMAX</sub>).  Typical
					 * Value = 75.
					 */
					IEC61970::Base::Domain::PU vhmax;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 44.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -36.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCIEEEAC6A_H
