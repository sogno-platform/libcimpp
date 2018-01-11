///////////////////////////////////////////////////////////
//  ExcIEEEST1A.h
//  Implementation of the Class ExcIEEEST1A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEST1A_H
#define EXCIEEEST1A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcIEEEST1AUELselectorKind.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST1A model. This model represents
				 * systems in which excitation power is supplied through a transformer from the
				 * generator terminals (or the unit’s auxiliary bus) and is regulated by a
				 * controlled rectifier.  The maximum exciter voltage available from such systems
				 * is directly related to the generator terminal voltage.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.1. 
				 */
				class ExcIEEEST1A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST1A();
					virtual ~ExcIEEEST1A();
					/**
					 * Exciter output current limit reference (I<sub>LR</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ilr;
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 190.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Excitation control system stabilizer gains (K<sub>F</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Exciter output current limiter gain (K<sub>LR</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU klr;
					/**
					 * Selector of the Power System Stabilizer (PSS) input (PSSin).
					 * true = PSS input (Vs) added to error signal
					 * false = PSS input (Vs) added to voltage regulator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean pssin;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>B1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb1;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Voltage regulator time constant (T<sub>C1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc1;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Selector of the connection of the UEL input (UELin). Typical Value =
					 * ignoreUELsignal.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST1AUELselectorKind uelin = IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST1AUELselectorKind::_undef;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 14.5.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -14.5.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Maximum voltage regulator input limit (V<sub>IMAX</sub>).  Typical Value = 999.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (V<sub>IMIN</sub>).  Typical Value = -999.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum voltage regulator outputs (V<sub>RMAX</sub>).  Typical Value = 7.8.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (V<sub>RMIN</sub>).  Typical Value = -6.7.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCIEEEST1A_H
