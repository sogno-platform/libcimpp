///////////////////////////////////////////////////////////
//  ExcIEEEAC4A.h
//  Implementation of the Class ExcIEEEAC4A
//  Created on:      28-Jan-2016 12:44:31
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_B8FD4E35_FBCE_4c97_81F4_786172A92F61__INCLUDED_)
#define EA_B8FD4E35_FBCE_4c97_81F4_786172A92F61__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
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
				 * The class represents IEEE Std 421.5-2005 type AC4A model. The model represents
				 * type AC4A alternator-supplied controlled-rectifier excitation system which is
				 * quite different from the other type ac systems. This high initial response
				 * excitation system utilizes a full thyristor bridge in the exciter output
				 * circuit.  The voltage regulator controls the firing of the thyristor bridges.
				 * The exciter alternator uses an independent voltage regulator to control its
				 * output voltage to a constant value. These effects are not modeled; however,
				 * transient loading effects on the exciter alternator are included.
				 * 
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.4.
				 */
				class ExcIEEEAC4A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC4A();
					virtual ~ExcIEEEAC4A();
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.015.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Maximum voltage regulator input limit (V<sub>IMAX</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (V<sub>IMIN</sub>).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 5.64.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -4.53.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_B8FD4E35_FBCE_4c97_81F4_786172A92F61__INCLUDED_)
