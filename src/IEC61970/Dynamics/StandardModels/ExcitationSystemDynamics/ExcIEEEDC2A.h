///////////////////////////////////////////////////////////
//  ExcIEEEDC2A.h
//  Implementation of the Class ExcIEEEDC2A
//  Created on:      28-Jan-2016 12:44:34
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_B290438C_F906_40a1_A07A_45D6962B78E7__INCLUDED_)
#define EA_B290438C_F906_40a1_A07A_45D6962B78E7__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * The class represents IEEE Std 421.5-2005 type DC2A model. This model represents
				 * represent field-controlled dc commutator exciters with continuously acting
				 * voltage regulators having supplies obtained from the generator or auxiliary bus.
				 *  It differs from the Type DC1A model only in the voltage regulator output
				 * limits, which are now proportional to terminal voltage
				 * <b>V</b><b><sub>T</sub></b>.
				 * It is representative of solid-state replacements for various forms of older
				 * mechanical and rotating amplifier regulating equipment connected to dc
				 * commutator exciters.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 5.2. 
				 */
				class ExcIEEEDC2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEDC2A();
					virtual ~ExcIEEEDC2A();
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD1</sub>).
					 * Typical Value = 3.05.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD2</sub>).
					 * Typical Value = 2.29.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * (exclim).  IEEE standard is ambiguous about lower limit on exciter output.
					 * Typical Value = - 999  which means that there is no limit applied.
					 */
					IEC61970::Base::Domain::PU exclim;
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 300.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gain (K<sub>F</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD1</sub> (S<sub>E</sub>[E<sub>FD1</sub>]).  Typical Value = 0.279.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD2</sub> (S<sub>E</sub>[E<sub>FD2</sub>]).  Typical Value = 0.117.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.01.
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
					 * (T<sub>E</sub>).  Typical Value = 1.33.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 0.675.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * UEL input (uelin).
					 * true = input is connected to the HV gate
					 * false = input connects to the error signal.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean uelin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 4.95.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -4.9.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_B290438C_F906_40a1_A07A_45D6962B78E7__INCLUDED_)
