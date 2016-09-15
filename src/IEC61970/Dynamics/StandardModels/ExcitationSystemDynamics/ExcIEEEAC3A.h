///////////////////////////////////////////////////////////
//  ExcIEEEAC3A.h
//  Implementation of the Class ExcIEEEAC3A
//  Created on:      28-Jan-2016 12:44:31
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_B197D755_8D83_4486_8359_883E0E580C1A__INCLUDED_)
#define EA_B197D755_8D83_4486_8359_883E0E580C1A__INCLUDED_

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
				 * The class represents IEEE Std 421.5-2005 type AC3A model. The model represents
				 * the field-controlled alternator-rectifier excitation systems designated Type
				 * AC3A. These excitation systems include an alternator main exciter with non-
				 * controlled rectifiers. The exciter employs self-excitation, and the voltage
				 * regulator power is derived from the exciter output voltage.  Therefore, this
				 * system has an additional nonlinearity, simulated by the use of a multiplier
				 * whose inputs are the voltage regulator command signal, <b>Va</b>, and the
				 * exciter output voltage, <b>Efd</b>, times <b>K</b><b><sub>R</sub></b>.  This
				 * model is applicable to excitation systems employing static voltage regulators.
				 * 
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.3.
				 */
				class ExcIEEEAC3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC3A();
					virtual ~ExcIEEEAC3A();
					/**
					 * Value of <i>EFD </i>at which feedback gain changes (E<sub>FDN</sub>).  Typical
					 * Value = 2.36.
					 */
					IEC61970::Base::Domain::PU efdn;
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 45.62.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.104.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances
					 * (K<sub>D</sub>).  Typical Value = 0.499.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (K<sub>F</sub>).  Typical Value = 0.
					 * 143.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Excitation control system stabilizer gain (K<sub>N</sub>).  Typical Value = 0.
					 * 05.
					 */
					IEC61970::Base::Domain::PU kn;
					/**
					 * Constant associated with regulator and alternator field power supply
					 * (K<sub>R</sub>).  Typical Value = 3.77.
					 */
					IEC61970::Base::Domain::PU kr;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E1</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E1</sub>]).
					 * Typical Value = 1.143.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E2</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E2</sub>]).
					 * Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.013.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 1.17.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -0.95.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E1</sub>) equals V<sub>EMAX </sub>(V<sub>E1</sub>).
					 *  Typical Value = 6.24.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E2</sub>).  Typical Value = 4.68.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Minimum exciter voltage output (V<sub>EMIN</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vemin;
					/**
					 * Exciter field current limit reference (V<sub>FEMAX</sub>).  Typical Value = 16.
					 */
					IEC61970::Base::Domain::PU vfemax;

				};

			}

		}

	}

}
#endif // !defined(EA_B197D755_8D83_4486_8359_883E0E580C1A__INCLUDED_)
