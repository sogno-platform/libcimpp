///////////////////////////////////////////////////////////
//  ExcAC4A.h
//  Implementation of the Class ExcAC4A
//  Created on:      28-Jan-2016 12:44:20
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_EECAF9B6_B52A_4ede_9D4D_93CD43C638FE__INCLUDED_)
#define EA_EECAF9B6_B52A_4ede_9D4D_93CD43C638FE__INCLUDED_

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
				 * Modified IEEE AC4A alternator-supplied rectifier excitation system with
				 * different minimum controller output.
				 */
				class ExcAC4A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC4A();
					virtual ~ExcAC4A();
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc).  Typical
					 * Value = 0.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.015.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Maximum voltage regulator input limit (Vimax).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (Vimin).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 5.64.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -4.53.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_EECAF9B6_B52A_4ede_9D4D_93CD43C638FE__INCLUDED_)
