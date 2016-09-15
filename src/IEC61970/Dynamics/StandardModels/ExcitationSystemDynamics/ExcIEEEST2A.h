///////////////////////////////////////////////////////////
//  ExcIEEEST2A.h
//  Implementation of the Class ExcIEEEST2A
//  Created on:      28-Jan-2016 12:44:36
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_82254A78_D616_4ace_8F99_9CE071BF71EE__INCLUDED_)
#define EA_82254A78_D616_4ace_8F99_9CE071BF71EE__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST2A model. Some static systems
				 * utilize both current and voltage sources (generator terminal quantities) to
				 * comprise the power source.  The regulator controls the exciter output through
				 * controlled saturation of the power transformer components.  These compound-
				 * source rectifier excitation systems are designated Type ST2A and are
				 * represented by ExcIEEEST2A.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.2. 
				 */
				class ExcIEEEST2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST2A();
					virtual ~ExcIEEEST2A();
					/**
					 * Maximum field voltage (E<sub>FDMax</sub>).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 120.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 1.82.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (K<sub>F</sub>).  Typical Value = 0.
					 * 05.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Potential circuit gain coefficient (K<sub>I</sub>).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Potential circuit gain coefficient (K<sub>P</sub>).  Typical Value = 4.88.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 0.5.
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
					 * Maximum voltage regulator outputs (V<sub>RMAX</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (V<sub>RMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_82254A78_D616_4ace_8F99_9CE071BF71EE__INCLUDED_)
