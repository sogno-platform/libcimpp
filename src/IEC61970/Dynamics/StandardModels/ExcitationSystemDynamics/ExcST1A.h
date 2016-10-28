///////////////////////////////////////////////////////////
//  ExcST1A.h
//  Implementation of the Class ExcST1A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST1A_H
#define EXCST1A_H

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
				 * Modification of an old IEEE ST1A static excitation system without
				 * overexcitation limiter (OEL) and underexcitation limiter (UEL).
				 */
				class ExcST1A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST1A();
					virtual ~ExcST1A();
					/**
					 * Exciter output current limit reference (Ilr).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ilr;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 190.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc). Typical
					 * Value = 0.05.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Excitation control system stabilizer gains (Kf).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Exciter output current limiter gain (Klr).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU klr;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tb<sub>1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb1;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Voltage regulator time constant (Tc<sub>1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc1;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (Vamax).  Typical Value = 999.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (Vamin).  Typical Value = -999.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Maximum voltage regulator input limit (Vimax).  Typical Value = 999.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (Vimin).  Typical Value = -999.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum voltage regulator outputs (Vrmax).  Typical Value = 7.8.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (Vrmin).  Typical Value = -6.7.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Excitation xfmr effective reactance (Xe).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::PU xe;

				};

			}

		}

	}

}
#endif // EXCST1A_H
