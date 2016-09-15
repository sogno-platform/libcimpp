///////////////////////////////////////////////////////////
//  ExcIEEEDC4B.h
//  Implementation of the Class ExcIEEEDC4B
//  Created on:      28-Jan-2016 12:44:35
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_E22242AF_6C5B_461e_A44C_A8FD40D4B1CC__INCLUDED_)
#define EA_E22242AF_6C5B_461e_A44C_A8FD40D4B1CC__INCLUDED_

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
				 * The class represents IEEE Std 421.5-2005 type DC4B model. These excitation
				 * systems utilize a field-controlled dc commutator exciter with a continuously
				 * acting voltage regulator having supplies obtained from the generator or
				 * auxiliary bus.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 5.4. 
				 */
				class ExcIEEEDC4B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEDC4B();
					virtual ~ExcIEEEDC4B();
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD1</sub>).
					 * Typical Value = 1.75.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD2</sub>).
					 * Typical Value = 2.33.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Regulator derivative gain (K<sub>D</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gain (K<sub>F</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Regulator integral gain (K<sub>I</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Regulator proportional gain (K<sub>P</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * OEL input (OELin).
					 * true = LV gate
					 * false = subtract from error signal.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean oelin;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD1</sub> (S<sub>E</sub>[E<sub>FD1</sub>]).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD2</sub> (S<sub>E</sub>[E<sub>FD2</sub>]).  Typical Value = 0.27.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Regulator derivative filter time constant(T<sub>D</sub>).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * UEL input (UELin).
					 * true = HV gate
					 * false = add to error signal.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean uelin;
					/**
					 * Minimum exciter voltage output(V<sub>EMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vemin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 2.7.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -0.9.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_E22242AF_6C5B_461e_A44C_A8FD40D4B1CC__INCLUDED_)
